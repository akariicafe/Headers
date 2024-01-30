@class NSMutableArray, NSString, FBSSerialQueue, BSServiceConnectionListener, UISApplicationInitializationContext;
@protocol UISApplicationSupportServiceDelegate;

@interface UISApplicationSupportService : NSObject <BSServiceConnectionListenerDelegate, UISApplicationSupportXPCServerInterface> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BSServiceConnectionListener *_listener;
    FBSSerialQueue *_targetQueue;
    NSMutableArray *_lock_launchPendedRequests;
    BOOL _lock_started;
    BOOL _lock_finishedLaunching;
    struct { unsigned char defaultContext : 1; unsigned char overrideInitialize : 1; unsigned char initializeClientSync : 1; unsigned char initializeClientSyncWithParameters : 1; unsigned char initializeClientAsync : 1; unsigned char initializeClientLegacy : 1; unsigned char requestPasscodeUnlockUI : 1; unsigned char destroyScenes : 1; } _lock_delegateFlags;
}

@property (readonly) BOOL hasFinishedLaunching;
@property (copy) UISApplicationInitializationContext *defaultContext;
@property (retain) id<UISApplicationSupportServiceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)_delegate;
- (void)_setDelegate:(id)a0;
- (void)listener:(id)a0 didReceiveConnection:(id)a1 withContext:(id)a2;
- (id)initWithCalloutQueue:(id)a0;
- (void)destroyScenesPersistentIdentifiers:(id)a0 animationType:(id)a1 destroySessions:(id)a2 completion:(id /* block */)a3;
- (id)_initWithDelegate:(id)a0 targetQueue:(id)a1;
- (void)dealloc;
- (void)initializeClientWithParameters:(id)a0 completion:(id /* block */)a1;
- (oneway void)requestPasscodeUnlockUIWithCompletion:(id /* block */)a0;
- (id)init;
- (void)start;
- (void)_pendRequestUntilLaunch:(id /* block */)a0;
- (void).cxx_destruct;

@end
