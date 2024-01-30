@class NSURL, NSString, NSArray;
@protocol SBKSyncTransactionProcessing;

@interface SBKSyncTransaction : SBKTransaction {
    NSString *_domain;
}

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) long long conflictDetectionType;
@property (readonly, nonatomic) NSURL *syncRequestURL;
@property (readonly, copy, nonatomic) NSString *syncAnchor;
@property (readonly, nonatomic) NSArray *keysToUpdate;
@property (readonly, nonatomic) NSArray *keysToDelete;
@property (weak, nonatomic) id<SBKSyncTransactionProcessing> transactionProcessor;

- (id)newRequest;
- (id)description;
- (id)requestURL;
- (void).cxx_destruct;
- (id)domain;
- (id)clampsKey;
- (void)processDataInResponse:(id)a0 withCompletionHandler:(id /* block */)a1;
- (id)initWithSyncRequestURL:(id)a0 domain:(id)a1 syncAnchor:(id)a2 keysToUpdate:(id)a3 keysToDelete:(id)a4 conflictDetectionType:(long long)a5;
- (id)initWithStoreBagContext:(id)a0 syncAnchor:(id)a1 keysToUpdate:(id)a2 keysToDelete:(id)a3 conflictDetectionType:(long long)a4;
- (void)_validateTransactionProcessor:(id)a0;
- (id)conflictDetectionOrdinalForKey:(id)a0;
- (id)keyValuePairForUpdatedKey:(id)a0;

@end
