@class NSObject, NSString, SBKTransactionController, NSMutableDictionary, NSMutableArray, SBKSyncResponseData;
@protocol OS_dispatch_queue;

@interface SBKSyncRequestHandler : SBKRequestHandler <SBKSyncTransactionProcessing> {
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_overrideResponseDomainVersion;
    NSMutableDictionary *_responseDataByKey;
}

@property (readonly, nonatomic) SBKSyncResponseData *responseData;
@property (readonly, nonatomic) SBKTransactionController *transactionController;
@property (copy, nonatomic) NSString *responseDomainVersion;
@property (readonly, nonatomic) NSMutableArray *responseUpdatedKeys;
@property (readonly, nonatomic) NSMutableArray *responseDeletedKeys;
@property (readonly, nonatomic) NSMutableArray *responseConflictedKeys;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)conflictDetectionType;

- (id)initWithBagContext:(id)a0;
- (void).cxx_destruct;
- (void)_onQueue_clearTransactionResponseData;
- (void)clearTransactionResponseData;
- (id)initWithBagContext:(id)a0 accountIdentifier:(id)a1;
- (id)responseDataForResponseKey:(id)a0;
- (void)startTransactionWithSyncAnchor:(id)a0 keysToUpdate:(id)a1 keysToDelete:(id)a2 finishedBlock:(id /* block */)a3;
- (void)transaction:(id)a0 didProcessResponseData:(id)a1;
- (id)transaction:(id)a0 keyValuePairForUpdatedKey:(id)a1;
- (void)transaction:(id)a0 processDeletedKey:(id)a1 isDirty:(BOOL *)a2;
- (void)transaction:(id)a0 processUpdatedKey:(id)a1 data:(id)a2 conflict:(BOOL)a3 isDirty:(BOOL *)a4;
- (void)transaction:(id)a0 willProcessResponseData:(id)a1;

@end
