@class NSString, CKShareMetadata, CKInitiateParticipantVettingOperationInfo;
@protocol CKInitiateParticipantVettingOperationCallbacks;

@interface CKInitiateParticipantVettingOperation : CKOperation <CKInitiateParticipantVettingOperationCallbacks>

@property (copy, nonatomic) CKShareMetadata *shareMetadata;
@property (copy, nonatomic) NSString *participantID;
@property (copy, nonatomic) NSString *address;
@property (readonly, nonatomic) id<CKInitiateParticipantVettingOperationCallbacks> clientOperationCallbackProxy;
@property (readonly, nonatomic) CKInitiateParticipantVettingOperationInfo *operationInfo;
@property (copy, nonatomic) id /* block */ participantVettingInitiatedBlock;
@property (copy, nonatomic) id /* block */ participantVettingInitiationCompletionBlock;

+ (SEL)daemonInvocationSelector;
+ (void)applyDaemonCallbackInterfaceTweaks:(id)a0;

- (void)fillOutOperationInfo:(id)a0;
- (void)ckSignpostEndWithError:(id)a0;
- (void)fillFromOperationInfo:(id)a0;
- (void)ckSignpostBegin;
- (BOOL)CKOperationShouldRun:(id *)a0;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (void).cxx_destruct;
- (void)handleParticipantVettingProgressWithError:(id)a0;
- (id)initWithShareMetadata:(id)a0 participantID:(id)a1 address:(id)a2;
- (void)retryTimes:(unsigned long long)a0 container:(id)a1 participantVettingInitiatedBlock:(id /* block */)a2 participantVettingInitiationCompletionBlock:(id /* block */)a3;

@end
