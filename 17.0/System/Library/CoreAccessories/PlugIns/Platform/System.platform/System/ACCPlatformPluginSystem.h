@class FBSDisplayLayoutMonitor, NSMutableDictionary, NSString, NSMutableSet, BKSApplicationStateMonitor, NSLock;

@interface ACCPlatformPluginSystem : NSObject <FBSDisplayLayoutObserver, ACCPlatformSystemPluginProtocol> {
    BKSApplicationStateMonitor *_appStateMonitor;
    FBSDisplayLayoutMonitor *_sharedDisplayLayoutMonitor;
    BOOL _observingFBSLayoutMonitor;
}

@property (nonatomic) BOOL isRunning;
@property (retain, nonatomic) NSMutableSet *foregroundAppBundleIDsMutable;
@property (retain) NSMutableDictionary *activeProcessAssertions;
@property (retain, nonatomic) NSLock *applicationStateLock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *pluginName;

- (void)initPlugin;
- (void)startPlugin;
- (BOOL)isDeviceLocked;
- (void)stopPlugin;
- (BOOL)isApplicationRunning:(id)a0;
- (BOOL)isAppInstalledWithBundleID:(id)a0;
- (long long)timeSinceBootInSecs;
- (void)launchBundleIDToBackground:(id)a0;
- (BOOL)isAppVisibleInCurrentMode:(id)a0;
- (id)applicationInfoForPID:(int)a0;
- (BOOL)isApplicationInForeground:(id)a0;
- (id)_convertDictionaryToPlatformACCDictionary:(id)a0;
- (void)layoutMonitor:(id)a0 didUpdateDisplayLayout:(id)a1 withContext:(id)a2;
- (void)_observeApplicationState:(id)a0;
- (void)startObservingApplicationState;
- (id)foregroundAppBundleIDs;
- (id)applicationsInstalledWithExternalAccessoryProtocol:(id)a0;
- (void)stopObservingApplicationState;
- (id)applicationInfoForBundleID:(id)a0;
- (BOOL)unlockedSinceBoot;
- (void)toggleProcessAssertionForBundleID:(id)a0 applicationPid:(int)a1;
- (BOOL)isDeviceLockSettingEnabled;
- (id)appNameForBundleID:(id)a0;
- (void).cxx_destruct;
- (id)mediaLibraryUIDString:(BOOL)a0;
- (void)launchApplication:(id)a0;
- (long long)secondsSinceLastLockModeEvent:(int)a0;
- (BOOL)createFolder:(const char *)a0 mode:(unsigned short)a1;
- (void)cancelProcessAssertionForBundleID:(id)a0 applicationPid:(int)a1;
- (BOOL)supportsExternalAccessoryBackgroundMode:(id)a0;
- (void)takeOneTimeProcessAssertionForBundleID:(id)a0 applicationPid:(int)a1;
- (BOOL)launchURL:(id)a0;
- (void)startObservingFirstUnlockNotification;
- (BOOL)isLockScreenUIDisplayed;

@end
