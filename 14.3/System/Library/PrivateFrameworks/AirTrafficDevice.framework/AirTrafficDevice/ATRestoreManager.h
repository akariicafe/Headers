@class NSString, ATDeviceSettings, MSVXPCTransaction, ATSession, NSObject, ATRestoreAssetLink;
@protocol OS_dispatch_queue;

@interface ATRestoreManager : NSObject <ATEnvironmentMonitorObserver, ATSessionObserver, ATRestoreAssetLinkDelegate> {
    ATRestoreAssetLink *_restoreLink;
    ATRestoreAssetLink *_applicationDataRestoreLink;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSObject<OS_dispatch_queue> *_checkRestoreStatusQueue;
    BOOL _cancelled;
    BOOL _iTunesRestoreActive;
    BOOL _iCloudRestoreActive;
    BOOL _deviceRestoreActive;
    MSVXPCTransaction *_xpcTransaction;
    ATDeviceSettings *_settings;
    ATSession *_restoreSession;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)sessionDidFinish:(id)a0;
- (void)_start;
- (id)init;
- (void).cxx_destruct;
- (void)_checkActiveRestoreStateWithCompletion:(id /* block */)a0;
- (BOOL)_iCloudPhotoLibraryEnabled;
- (void)environmentMonitorDidChangeNetworkReachability:(id)a0;
- (void)setRestoreInProgress:(BOOL)a0;
- (void)restoreAssetLinkDidCancelRestore:(id)a0;
- (void)resume;
- (id)_dataClasses;
- (void)restoreSessionActiveWithCompletion:(id /* block */)a0;

@end
