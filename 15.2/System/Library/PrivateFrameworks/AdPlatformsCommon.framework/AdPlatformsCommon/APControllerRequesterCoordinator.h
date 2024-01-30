@class NSMutableDictionary, APUnfairRecursiveLock;

@interface APControllerRequesterCoordinator : APXPCActionRequester <APPCControllerClientInterface>

@property (retain, nonatomic) NSMutableDictionary *requestDelegates;
@property (retain, nonatomic) APUnfairRecursiveLock *lock;

+ (id)requestCoordinator;
+ (id)machService;
+ (BOOL)canShareConnection;

- (id)proxyURL;
- (id)exportedObject;
- (void)connectionInvalidated;
- (id)remoteObjectInterface;
- (void)contentResponses:(id)a0 requester:(id)a1;
- (void)requestPromotedContentOfTypes:(id)a0 forRequester:(id)a1 forContext:(id)a2 completionHandler:(id /* block */)a3;
- (void)_addDelegate:(id)a0 withID:(id)a1;
- (void).cxx_destruct;
- (void)connectionInterrupted;
- (id)init;
- (void)extendCollectionClassesForExportedInterface:(id)a0;
- (id)exportedInterface;
- (void)proxyURLWithCompletionHandler:(id /* block */)a0;
- (void)finishedWithRequestsForID:(id)a0;

@end
