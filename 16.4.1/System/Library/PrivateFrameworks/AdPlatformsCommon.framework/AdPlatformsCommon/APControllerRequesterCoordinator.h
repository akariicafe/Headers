@class NSMutableDictionary, APUnfairRecursiveLock;

@interface APControllerRequesterCoordinator : APXPCActionRequester <APPCControllerClientInterface>

@property (retain, nonatomic) NSMutableDictionary *requestDelegates;
@property (retain, nonatomic) APUnfairRecursiveLock *lock;

+ (id)machService;
+ (id)requestCoordinator;
+ (BOOL)canShareConnection;

- (void)connectionInterrupted;
- (void)connectionInvalidated;
- (void)_addDelegate:(id)a0 withID:(id)a1;
- (id)remoteObjectInterface;
- (id)exportedInterface;
- (id)proxyURLForRequester:(id)a0;
- (void)preWarm:(id)a0 forRequester:(id)a1;
- (void)requestPromotedContentOfTypes:(id)a0 forRequester:(id)a1 forContext:(id)a2 completionHandler:(id /* block */)a3;
- (void)extendCollectionClassesForExportedInterface:(id)a0;
- (void)contentResponses:(id)a0 requester:(id)a1;
- (void)sendAndRankContent:(id)a0 forContext:(id)a1 placement:(unsigned long long)a2 completionHandler:(id /* block */)a3;
- (void)extendCollectionClassesForRemoteInterface:(id)a0;
- (void)proxyURLForRequester:(id)a0 withCompletionHandler:(id /* block */)a1;
- (id)init;
- (id)exportedObject;
- (void)finishedWithRequestsForID:(id)a0;
- (void).cxx_destruct;

@end
