@class NSString, ATDeviceSettings, MSVXPCTransaction, ATSession, NSObject, ATRestoreAssetLink;
@protocol OS_dispatch_queue;

@interface ATRestoreManager : NSObject <ICEnvironmentMonitorObserver, ATSessionObserver, ATRestoreAssetLinkDelegate> {
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

- (void)environmentMonitorDidChangeNetworkReachability:(id)a0;
- (void)setRestoreInProgress:(BOOL)a0;
- (void)restoreAssetLinkNetworkPolicyDidChange:(id)a0;
- (BOOL)hasProperNetworkConditions;
- (void)_start;
- (void)_checkActiveRestoreStateWithCompletion:(id /* block */)a0;
- (void)restoreSessionActiveWithCompletion:(id /* block */)a0;
- (BOOL)_iCloudPhotoLibraryEnabled;
- (void).cxx_destruct;
- (id)init;
- (void)sessionDidFinish:(id)a0;
- (void)restoreAssetLinkDidCancelRestore:(id)a0;
- (void)resume;
- (id)_dataClasses;

@end
