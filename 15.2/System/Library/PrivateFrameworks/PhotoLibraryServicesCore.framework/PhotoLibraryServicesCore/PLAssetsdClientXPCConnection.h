@class NSString, NSXPCConnection, PLAssetsdClientService, NSObject, PLXPCMessageLogger;
@protocol OS_dispatch_queue;

@interface PLAssetsdClientXPCConnection : NSObject <PLXPCProxyCreating> {
    NSObject<OS_dispatch_queue> *_isolationQueue;
    NSObject<OS_dispatch_queue> *_externalNotificationQueue;
    NSXPCConnection *_connection;
    PLXPCMessageLogger *_connectionLogger;
    PLAssetsdClientService *_assetsdClientService;
    BOOL _isShuttingDown;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addBarrierBlock:(id /* block */)a0;
- (void)handleInterruption;
- (void)addPhotoLibraryUnavailabilityHandler:(id /* block */)a0;
- (void)_makeNewResumedConnection;
- (id)_unboostingRemoteObjectProxy;
- (void)handleInvalidation;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)prepareToShutdown;
- (id)connectionWithErrorHandler:(id /* block */)a0;
- (void)_postInterruptedNotification;
- (void).cxx_destruct;
- (id)init;
- (void)invalidate;
- (id)_primitiveSynchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)a0;

@end
