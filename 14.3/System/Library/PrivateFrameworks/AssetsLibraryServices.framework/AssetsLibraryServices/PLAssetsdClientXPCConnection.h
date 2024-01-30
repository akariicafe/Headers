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
- (void)addPhotoLibraryUnavailabilityHandler:(id /* block */)a0;
- (id)init;
- (id)connectionWithErrorHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)prepareToShutdown;
- (id)_unboostingRemoteObjectProxy;
- (void)handleInterruption;
- (void)_postInterruptedNotification;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)_primitiveSynchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)handleInvalidation;

@end
