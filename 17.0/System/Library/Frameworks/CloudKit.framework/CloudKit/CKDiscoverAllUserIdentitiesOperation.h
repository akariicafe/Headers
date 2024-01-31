@class NSMutableDictionary, CKDiscoverUserIdentitiesOperationInfo;
@protocol CKDiscoverAllUserIdentitiesOperationCallbacks;

@interface CKDiscoverAllUserIdentitiesOperation : CKOperation <CKDiscoverAllUserIdentitiesOperationCallbacks>

@property (retain, nonatomic) NSMutableDictionary *identityToContactIdentifiers;
@property (readonly, nonatomic) id<CKDiscoverAllUserIdentitiesOperationCallbacks> clientOperationCallbackProxy;
@property (readonly, nonatomic) CKDiscoverUserIdentitiesOperationInfo *operationInfo;
@property (copy, nonatomic) id /* block */ userIdentityDiscoveredBlock;
@property (copy, nonatomic) id /* block */ discoverAllUserIdentitiesCompletionBlock;

+ (SEL)daemonInvocationSelector;
+ (Class)operationInfoClass;

- (void)ckSignpostEndWithError:(id)a0;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (BOOL)CKOperationShouldRun:(id *)a0;
- (void)performCKOperation;
- (void)ckSignpostBegin;
- (id)init;
- (id)activityCreate;
- (void).cxx_destruct;
- (void)handleUserIdentityDiscovery:(id)a0;

@end
