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

- (void)layoutMonitor:(id)a0 didUpdateDisplayLayout:(id)a1 withContext:(id)a2;
- (BOOL)supportsExternalAccessoryBackgroundMode:(id)a0;
- (void)stopPlugin;
- (void)initPlugin;
- (void)startObservingFirstUnlockNotification;
- (void)startPlugin;
- (BOOL)isLockScreenUIDisplayed;
- (BOOL)isAppVisibleInCurrentMode:(id)a0;
- (void)startObservingApplicationState;
- (BOOL)launchURL:(id)a0;
- (id)applicationInfoForBundleID:(id)a0;
- (BOOL)isAppInstalledWithBundleID:(id)a0;
- (long long)secondsSinceLastLockModeEvent:(int)a0;
- (BOOL)isDeviceLocked;
- (void)launchApplication:(id)a0;
- (void)toggleProcessAssertionForBundleID:(id)a0 applicationPid:(int)a1;
- (BOOL)unlockedSinceBoot;
- (void)launchBundleIDToBackground:(id)a0;
- (id)applicationInfoForPID:(int)a0;
- (id)mediaLibraryUIDString:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)isDeviceLockSettingEnabled;
- (BOOL)isApplicationInForeground:(id)a0;
- (BOOL)isApplicationRunning:(id)a0;
- (void)cancelProcessAssertionForBundleID:(id)a0 applicationPid:(int)a1;
- (void)takeOneTimeProcessAssertionForBundleID:(id)a0 applicationPid:(int)a1;
- (void)_observeApplicationState:(id)a0;
- (id)foregroundAppBundleIDs;
- (long long)timeSinceBootInSecs;
- (BOOL)createFolder:(const char *)a0 mode:(unsigned short)a1;
- (void)stopObservingApplicationState;
- (id)applicationsInstalledWithExternalAccessoryProtocol:(id)a0;
- (id)_convertDictionaryToPlatformACCDictionary:(id)a0;
- (id)appNameForBundleID:(id)a0;

@end
