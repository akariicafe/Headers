@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface CKDOperationInfoCache : CKSQLite

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *cacheQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *cacheDelegateQueue;
@property (retain, nonatomic) NSMutableDictionary *delegateWrappersByOperationID;

+ (id)dbFileName;
+ (id)sharedCache;

- (void)enumerateCallbacksForOperationWithID:(id)a0 usingBlock:(id /* block */)a1;
- (void)registerCacheEvictionActivity;
- (void)_locked_enumerateCallbacksForOperationWithID:(id)a0 usingBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (void)archiveCallback:(id)a0 forOperationID:(id)a1;
- (void)expungeOperationInfoForDeletedAccountID:(id)a0;
- (void)unregisterDelegate:(id)a0 forOperationWithID:(id)a1;
- (void)setOperationInfo:(id)a0 forOperationID:(id)a1 appContainerTuple:(id)a2 accountID:(id)a3;
- (void)_lockedSetOperationInfo:(id)a0 forOperationID:(id)a1 appContainerTuple:(id)a2 accountID:(id)a3;
- (void)deleteAllInfoForOperationWithID:(id)a0;
- (void)registerAttemptForOperationWithID:(id)a0;
- (id)resumableOperationInfosByAppContainerTuplesWithProgressPurged:(BOOL)a0;
- (id)_initWithCacheDir:(id)a0;
- (id)allOutstandingOperationIDsForAppContainerTuple:(id)a0 accountID:(id)a1;
- (void)registerDelegate:(id)a0 forOperationWithID:(id)a1;
- (id)outstandingOperationInfosForIDs:(id)a0;
- (void)_lockedArchiveCallback:(id)a0 forOperationID:(id)a1;
- (id)_locked_operationInfoForID:(id)a0;
- (id)operationInfoMetadataForOperationWithID:(id)a0;

@end
