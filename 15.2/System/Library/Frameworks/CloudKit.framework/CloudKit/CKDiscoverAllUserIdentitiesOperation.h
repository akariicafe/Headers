@class NSMutableDictionary, CKDiscoverUserIdentitiesOperationInfo;
@protocol CKDiscoverAllUserIdentitiesOperationCallbacks;

@interface CKDiscoverAllUserIdentitiesOperation : CKOperation <CKDiscoverAllUserIdentitiesOperationCallbacks>

@property (retain, nonatomic) NSMutableDictionary *identityToContactIdentifiers;
@property (readonly, nonatomic) id<CKDiscoverAllUserIdentitiesOperationCallbacks> clientOperationCallbackProxy;
@property (readonly, nonatomic) CKDiscoverUserIdentitiesOperationInfo *operationInfo;
@property (copy, nonatomic) id /* block */ userIdentityDiscoveredBlock;
@property (copy, nonatomic) id /* block */ discoverAllUserIdentitiesCompletionBlock;

+ (Class)operationInfoClass;

- (void)performCKOperation;
- (id)activityCreate;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)handleUserIdentityDiscovery:(id)a0;
- (BOOL)CKOperationShouldRun:(id *)a0;

@end
