@class NSMutableDictionary, APUnfairRecursiveLock;

@interface APControllerRequesterCoordinator : APXPCActionRequester <APPCControllerClientInterface>

@property (retain, nonatomic) NSMutableDictionary *requestDelegates;
@property (retain, nonatomic) APUnfairRecursiveLock *lock;

+ (id)machService;
+ (BOOL)canShareConnection;
+ (id)requestCoordinator;

- (void)connectionInvalidated;
- (id)init;
- (void).cxx_destruct;
- (void)connectionInterrupted;
- (id)exportedObject;
- (id)exportedInterface;
- (id)remoteObjectInterface;
- (id)proxyURL;
- (void)proxyURLWithCompletionHandler:(id /* block */)a0;
- (void)extendCollectionClassesForExportedInterface:(id)a0;
- (void)_addDelegate:(id)a0 withID:(id)a1;
- (void)contentResponses:(id)a0 requester:(id)a1;
- (void)requestPromotedContentOfTypes:(id)a0 forRequester:(id)a1 forContext:(id)a2 completionHandler:(id /* block */)a3;
- (void)finishedWithRequestsForID:(id)a0;

@end
