@class NSLock, NSXPCConnection, NSString, PFDispatchQueue, PHAManager, NSObject, NSMutableArray, PHAExecutive, NSMapTable;
@protocol OS_dispatch_group, OS_dispatch_semaphore;

@interface PHAServiceClientHandler : NSObject <NSXPCConnectionDelegate, PHAServiceOperationHandling, PHAGraphRegistration, PLPhotoAnalysisServiceProtocol> {
    NSString *_clientBundleID;
    NSMapTable *_cancelableOperationsById;
    NSMutableArray *_clientHandlers;
    unsigned long long _graphLoadCount;
    NSObject<OS_dispatch_group> *_graphReady;
    PFDispatchQueue *_graphLoadQueue;
}

@property (retain) NSXPCConnection *xpcConnection;
@property (retain) PHAManager *photoAnalysisManager;
@property (weak) PHAExecutive *executive;
@property (retain) NSObject<OS_dispatch_semaphore> *invalidationSemaphore;
@property (retain) id serviceUnavailableHandler;
@property (readonly) NSString *clientBundleID;
@property (retain, nonatomic) NSLock *sharedOperationLock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)shutdown;
- (id)init;
- (void).cxx_destruct;
- (void)setJobProcessingConstraintsWithValues:(id)a0 mask:(id)a1 context:(id)a2 reply:(id /* block */)a3;
- (void)unloadGraphWithContext:(id)a0 reply:(id /* block */)a1;
- (void)loadGraphWithContext:(id)a0 reply:(id /* block */)a1;
- (void)graphUpdateDidStop;
- (void)graphUpdateIsConsistent;
- (BOOL)isPhotos;
- (void)connection:(id)a0 handleInvocation:(id)a1 isReply:(BOOL)a2;
- (void)cancelOperationsWithIdentifiers:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (id)initWithXPCConnection:(id)a0 executive:(id)a1;
- (BOOL)isplphotosctl;
- (void)handleOperation:(id)a0;
- (id)contextInformationFromInvocation:(id)a0;
- (BOOL)wantsGraphUpdateNotifications;
- (id)forwardingTargetForInvocation:(id)a0 contextInformation:(id)a1;
- (BOOL)wantsLiveGraphUpdates;
- (void)submitBlockToExecutiveStateQueue:(id /* block */)a0;
- (void)graphBecameReady:(id)a0 forPHAGraphManager:(id)a1;
- (id)libraryURLFromContextInformation:(id)a0;
- (id)cancelableOperationsById;
- (void)graphUpdateMadeProgress:(double)a0;
- (id)managerForInvocation:(id)a0 contextInformation:(id)a1;

@end
