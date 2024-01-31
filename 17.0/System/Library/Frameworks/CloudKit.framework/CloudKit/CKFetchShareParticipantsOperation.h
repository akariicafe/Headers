@class NSMutableDictionary, NSArray, NSMutableSet, CKFetchShareParticipantsOperationInfo;
@protocol CKFetchShareParticipantsOperationCallbacks;

@interface CKFetchShareParticipantsOperation : CKOperation <CKFetchShareParticipantsOperationCallbacks>

@property (retain, nonatomic) NSMutableSet *discoveredUserIdentities;
@property (retain, nonatomic) NSMutableDictionary *lookupErrors;
@property (readonly, nonatomic) id<CKFetchShareParticipantsOperationCallbacks> clientOperationCallbackProxy;
@property (readonly, nonatomic) CKFetchShareParticipantsOperationInfo *operationInfo;
@property (copy, nonatomic) id /* block */ perShareParticipantCompletionBlock_wrapper;
@property (copy, nonatomic) id /* block */ fetchShareParticipantsCompletionBlock_wrapper;
@property (copy, nonatomic) NSArray *userIdentityLookupInfos;
@property (copy, nonatomic) id /* block */ shareParticipantFetchedBlock;
@property (copy, nonatomic) id /* block */ perShareParticipantCompletionBlock;
@property (copy, nonatomic) id /* block */ fetchShareParticipantsCompletionBlock;

+ (void)applyDaemonCallbackInterfaceTweaks:(id)a0;
+ (SEL)daemonInvocationSelector;

- (void)ckSignpostEndWithError:(id)a0;
- (BOOL)hasCKOperationCallbacksSet;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (BOOL)CKOperationShouldRun:(id *)a0;
- (void)fillOutOperationInfo:(id)a0;
- (void)ckSignpostBegin;
- (id)init;
- (id)activityCreate;
- (void)fillFromOperationInfo:(id)a0;
- (void).cxx_destruct;
- (id)initWithUserIdentityLookupInfos:(id)a0;
- (void)handleShareParticipantFetchForLookupInfo:(id)a0 shareParticipant:(id)a1 error:(id)a2;
- (void)setFetchShareParticipantsCompletionBlockIVar:(id /* block */)a0;

@end
