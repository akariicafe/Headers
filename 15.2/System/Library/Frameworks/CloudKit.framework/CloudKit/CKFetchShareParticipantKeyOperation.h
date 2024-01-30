@class NSArray, NSMutableDictionary, NSDictionary, CKFetchShareParticipantKeyOperationInfo;
@protocol CKFetchShareParticipantKeyOperationCallbacks;

@interface CKFetchShareParticipantKeyOperation : CKDatabaseOperation <CKFetchShareParticipantKeyOperationCallbacks>

@property (copy, nonatomic) NSArray *shareIDs;
@property (retain, nonatomic) NSMutableDictionary *errorsByShareID;
@property (readonly, nonatomic) id<CKFetchShareParticipantKeyOperationCallbacks> clientOperationCallbackProxy;
@property (readonly, nonatomic) CKFetchShareParticipantKeyOperationInfo *operationInfo;
@property (copy, nonatomic) NSDictionary *baseTokensByShareID;
@property (copy, nonatomic) NSDictionary *childRecordIDsByShareID;
@property (copy, nonatomic) id /* block */ shareParticipantKeyFetchedBlock;
@property (copy, nonatomic) id /* block */ shareParticipantKeyCompletionBlock;

+ (void)applyDaemonCallbackInterfaceTweaks:(id)a0;

- (void)performCKOperation;
- (BOOL)hasCKOperationCallbacksSet;
- (void)fillOutOperationInfo:(id)a0;
- (id)activityCreate;
- (void)fillFromOperationInfo:(id)a0;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (id)initWithShareIDs:(id)a0;
- (void)handleParticipantKeyFetchForRecordID:(id)a0 participantKey:(id)a1 error:(id)a2;
- (void).cxx_destruct;
- (BOOL)CKOperationShouldRun:(id *)a0;

@end
