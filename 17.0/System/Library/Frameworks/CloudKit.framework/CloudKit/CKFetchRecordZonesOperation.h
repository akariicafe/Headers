@class NSArray, CKFetchRecordZonesOperationInfo, NSMutableDictionary;
@protocol CKFetchRecordZonesOperationCallbacks;

@interface CKFetchRecordZonesOperation : CKDatabaseOperation <CKFetchRecordZonesOperationCallbacks>

@property (readonly, nonatomic) id<CKFetchRecordZonesOperationCallbacks> clientOperationCallbackProxy;
@property (readonly, nonatomic) CKFetchRecordZonesOperationInfo *operationInfo;
@property (copy, nonatomic) id /* block */ perRecordZoneCompletionBlock_wrapper;
@property (copy, nonatomic) id /* block */ fetchRecordZonesCompletionBlock_wrapper;
@property (retain, nonatomic) NSMutableDictionary *recordZonesByZoneID;
@property (retain, nonatomic) NSMutableDictionary *recordZoneErrors;
@property (nonatomic) BOOL isFetchAllRecordZonesOperation;
@property (nonatomic) BOOL ignorePCSFailures;
@property (copy, nonatomic) NSArray *recordZoneIDs;
@property (copy, nonatomic) id /* block */ perRecordZoneCompletionBlock;
@property (copy, nonatomic) id /* block */ fetchRecordZonesCompletionBlock;

+ (void)applyDaemonCallbackInterfaceTweaks:(id)a0;
+ (id)fetchAllRecordZonesOperation;
+ (SEL)daemonInvocationSelector;

- (id)relevantZoneIDs;
- (void)ckSignpostEndWithError:(id)a0;
- (BOOL)hasCKOperationCallbacksSet;
- (void)setFetchRecordZonesCompletionBlockIVar:(id /* block */)a0;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (BOOL)CKOperationShouldRun:(id *)a0;
- (void)fillOutOperationInfo:(id)a0;
- (void)performCKOperation;
- (void)ckSignpostBegin;
- (id)initWithRecordZoneIDs:(id)a0;
- (id)init;
- (id)activityCreate;
- (void)fillFromOperationInfo:(id)a0;
- (void).cxx_destruct;
- (void)handleFetchForRecordZoneID:(id)a0 recordZone:(id)a1 error:(id)a2;

@end
