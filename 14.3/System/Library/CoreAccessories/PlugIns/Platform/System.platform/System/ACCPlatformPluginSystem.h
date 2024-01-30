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

- (BOOL)isDeviceLocked;
- (void)initPlugin;
- (void)startPlugin;
- (void)stopPlugin;
- (void)launchApplication:(id)a0;
- (BOOL)launchURL:(id)a0;
- (void)layoutMonitor:(id)a0 didUpdateDisplayLayout:(id)a1 withContext:(id)a2;
- (BOOL)isLockScreenUIDisplayed;
- (BOOL)isDeviceLockSettingEnabled;
- (void).cxx_destruct;
- (BOOL)isApplicationRunning:(id)a0;
- (void)stopObservingApplicationState;
- (void)cancelProcessAssertionForBundleID:(id)a0;
- (void)toggleProcessAssertionForBundleID:(id)a0;
- (long long)secondsSinceLastLockModeEvent:(int)a0;
- (BOOL)isAppInstalledWithBundleID:(id)a0;
- (id)_convertDictionaryToPlatformACCDictionary:(id)a0;
- (void)takeOneTimeProcessAssertionForBundleID:(id)a0;
- (BOOL)isAppVisibleInCurrentMode:(id)a0;
- (BOOL)unlockedSinceBoot;
- (id)mediaLibraryUIDString:(BOOL)a0;
- (void)launchBundleIDToBackground:(id)a0;
- (BOOL)supportsExternalAccessoryBackgroundMode:(id)a0;
- (void)_observeApplicationState:(id)a0;
- (long long)timeSinceBootInSecs;
- (id)appNameForBundleID:(id)a0;
- (id)applicationsInstalledWithExternalAccessoryProtocol:(id)a0;
- (BOOL)createFolder:(const char *)a0 mode:(unsigned short)a1;
- (void)startObservingApplicationState;
- (id)foregroundAppBundleIDs;
- (BOOL)isApplicationInForeground:(id)a0;
- (id)applicationInfoForPID:(int)a0;
- (id)applicationInfoForBundleID:(id)a0;

@end
