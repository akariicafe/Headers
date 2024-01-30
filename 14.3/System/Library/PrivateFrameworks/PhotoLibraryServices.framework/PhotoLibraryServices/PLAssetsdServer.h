@class PLPhotoLibraryBundleController, NSString, PLTCCObserver, NSXPCInterface, PLBackgroundJobService, NSMutableSet, PLDistributedNotificationHandler, NSXPCListener, PLXPCMessageLogger;

@interface PLAssetsdServer : NSObject <NSXPCListenerDelegate> {
    NSXPCListener *_listener;
    PLXPCMessageLogger *_connectionLogger;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _servicesLock;
    NSMutableSet *_services;
    PLPhotoLibraryBundleController *_libraryBundleController;
    PLBackgroundJobService *_backgroundJobService;
    PLDistributedNotificationHandler *_distributedNotificationHandler;
    PLTCCObserver *_tccObserver;
    NSXPCInterface *_assetsdInterface;
}

@property (nonatomic) struct { _Atomic unsigned int imageCacheHitCount; _Atomic unsigned int imageCacheMissCount; _Atomic unsigned int videoComplementCacheHitCount; _Atomic unsigned int videoComplementCacheMissCount; } resourceCacheMetrics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedServer;

- (void)handleInvalidation:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)addService:(id)a0;
- (void)removeService:(id)a0;
- (void)_checkInWithLaunchd;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)start;
- (void)logStatus;
- (void)_collectCacheMetricsDataFromService:(id)a0;
- (void)handleInterruption:(id)a0;

@end
