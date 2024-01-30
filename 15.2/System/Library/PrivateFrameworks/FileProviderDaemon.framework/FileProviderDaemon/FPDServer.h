@class FPDPresenterManager, NSString, FPDActionOperationEngine, FPDAppMonitor, FPDExtensionManager, FPDCacheDeleteService, NSObject, NSXPCListener, FPDTelemetryService;
@protocol OS_dispatch_source, OS_dispatch_queue, OS_dispatch_group;

@interface FPDServer : NSObject <NSXPCListenerDelegate> {
    NSObject<OS_dispatch_source> *_sigIntSrc;
    NSObject<OS_dispatch_source> *_sigQuitSrc;
    NSObject<OS_dispatch_source> *_sigTermSrc;
    NSObject<OS_dispatch_source> *_machSrc;
    NSObject<OS_dispatch_queue> *_makeSureSetupEnqueued;
    NSObject<OS_dispatch_queue> *_setupQueue;
    NSObject<OS_dispatch_queue> *_afterSetupWorkQueue;
    NSObject<OS_dispatch_group> *_fileProviderManagerIsReadyGroup;
    NSObject<OS_dispatch_queue> *_machServerQueue;
    int _providerChangeNotificationToken;
    FPDTelemetryService *_telemetry;
    BOOL _isUnlocked;
    BOOL _isPastBuddy;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSXPCListener *listener;
@property (readonly, nonatomic) FPDActionOperationEngine *operationEngine;
@property (readonly, nonatomic) FPDCacheDeleteService *cacheDelete;
@property (readonly, nonatomic) FPDAppMonitor *appMonitor;
@property (readonly, nonatomic) FPDExtensionManager *extensionManager;
@property (readonly, nonatomic) FPDPresenterManager *presenterManager;
@property (retain, nonatomic) Class fpfsClass;
@property (retain, nonatomic) Class fpfsSQLBackupManagerClass;
@property (retain, nonatomic) Class fpfsSQLRestoreManagerClass;

+ (id)homeDirectory;
+ (id)personaCloudStoragePath;
+ (id)appSupportPath;

- (void)_startXPCListener;
- (void)_setup;
- (void)_finishSetup;
- (void)_computeUnlockedStatus;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)_initSignals;
- (void)start;
- (void)providersDidChange;
- (void).cxx_destruct;
- (void)signalProviderChanges;
- (id)init;
- (void)materializeURL:(id)a0 completion:(id /* block */)a1;
- (void)exitWithCode:(int)a0;
- (void)localeDidChange;
- (void)handleExitSignal:(int)a0;

@end
