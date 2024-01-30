@class NSArray, NSMutableSet, CKDiscoverUserIdentitiesOperationInfo;
@protocol CKDiscoverUserIdentitiesOperationCallbacks;

@interface CKDiscoverUserIdentitiesOperation : CKOperation <CKDiscoverUserIdentitiesOperationCallbacks>

@property (retain, nonatomic) NSMutableSet *discoveredLookupInfos;
@property (readonly, nonatomic) id<CKDiscoverUserIdentitiesOperationCallbacks> clientOperationCallbackProxy;
@property (readonly, nonatomic) CKDiscoverUserIdentitiesOperationInfo *operationInfo;
@property (copy, nonatomic) NSArray *userIdentityLookupInfos;
@property (copy, nonatomic) id /* block */ userIdentityDiscoveredBlock;
@property (copy, nonatomic) id /* block */ discoverUserIdentitiesCompletionBlock;

- (void)performCKOperation;
- (void)fillOutOperationInfo:(id)a0;
- (void)fillFromOperationInfo:(id)a0;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (id)initWithUserIdentityLookupInfos:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)handleUserIdentityDiscoveryForLookupInfo:(id)a0 userIdentity:(id)a1;
- (BOOL)CKOperationShouldRun:(id *)a0;

@end
