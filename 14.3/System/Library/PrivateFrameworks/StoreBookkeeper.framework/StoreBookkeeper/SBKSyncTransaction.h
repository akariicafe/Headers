@class NSURL, NSString, NSArray;
@protocol SBKSyncTransactionProcessing;

@interface SBKSyncTransaction : SBKTransaction {
    NSString *_domain;
}

@property (readonly) long long type;
@property (readonly) long long conflictDetectionType;
@property (readonly) NSURL *syncRequestURL;
@property (readonly, copy) NSString *syncAnchor;
@property (readonly) NSArray *keysToUpdate;
@property (readonly) NSArray *keysToDelete;
@property (weak) id<SBKSyncTransactionProcessing> transactionProcessor;

- (void).cxx_destruct;
- (id)requestURL;
- (id)domain;
- (id)description;
- (id)newRequest;
- (id)clampsKey;
- (void)processDataInResponse:(id)a0 withCompletionHandler:(id /* block */)a1;
- (id)conflictDetectionOrdinalForKey:(id)a0;
- (id)keyValuePairForUpdatedKey:(id)a0;
- (id)initWithStoreBagContext:(id)a0 syncAnchor:(id)a1 keysToUpdate:(id)a2 keysToDelete:(id)a3 conflictDetectionType:(long long)a4;
- (id)initWithSyncRequestURL:(id)a0 domain:(id)a1 syncAnchor:(id)a2 keysToUpdate:(id)a3 keysToDelete:(id)a4 conflictDetectionType:(long long)a5;
- (void)_validateTransactionProcessor:(id)a0;

@end
