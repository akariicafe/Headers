@class NSString, SBIdleTimerPolicyAggregator, NSMutableDictionary;
@protocol BSInvalidatable;

@interface SBUserAgent : NSObject <SBUIUserAgent_Internal> {
    NSMutableDictionary *_idleTimerDisableAssertions;
    id<BSInvalidatable> _bannerSuppressionAssertion;
}

@property (retain, nonatomic, setter=_setIdleTimerPolicyAggregator:) SBIdleTimerPolicyAggregator *_idleTimerPolicyAggregator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isScreenOn;
- (void)setIdleText:(id)a0;
- (void)setBadgeNumberOrString:(id)a0 forApplicationWithID:(id)a1;
- (BOOL)isInternalInstall;
- (long long)activeInterfaceOrientation;
- (BOOL)launchFromSource:(int)a0 withURL:(id)a1 bundleID:(id)a2 allowUnlock:(BOOL)a3;
- (void)lockAndDimDeviceDisconnectingCallIfNecessary:(BOOL)a0;
- (BOOL)_openApplication:(id)a0 withURL:(id)a1 fromSource:(int)a2 animated:(BOOL)a3 options:(id)a4;
- (BOOL)isNamedRemoteAlertServiceActive:(id)a0 controllerClassName:(id)a1;
- (void)lockAndDimDeviceDisconnectingCallIfNecessary:(BOOL)a0 andDimScreen:(BOOL)a1;
- (BOOL)applicationInstalledForDisplayID:(id)a0;
- (void)addIdleTimerHandler:(id)a0;
- (BOOL)isApplicationRestrictedOrHidden:(id)a0;
- (void)_cleanupFromBannerLaunch;
- (struct __CFRunLoop { } *)wifiRunLoopRef;
- (void)disableLockScreenBundleNamed:(id)a0 deactivationContext:(id)a1;
- (id)topSuspendedEventsOnlyDisplayID;
- (id)foregroundApplicationDisplayID;
- (BOOL)deviceIsPasscodeLocked;
- (BOOL)launchApplicationFromSource:(int)a0 withURL:(id)a1 options:(id)a2;
- (BOOL)_launchFromSource:(int)a0 withURL:(id)a1 bundleID:(id)a2 allowUnlock:(BOOL)a3 animate:(BOOL)a4;
- (id)localizedDisplayNameForDisplayID:(id)a0;
- (void)setMinimumBacklightLevel:(float)a0 animated:(BOOL)a1;
- (void)removeActiveInterfaceOrientationObserver:(id)a0;
- (void)activateRemoteAlertService:(id)a0 options:(id)a1;
- (BOOL)launchApplicationFromSource:(int)a0 withDisplayID:(id)a1 options:(id)a2;
- (BOOL)isApplicationForegroundObscured:(id)a0;
- (void)addActiveInterfaceOrientationObserver:(id)a0;
- (void)setIdleTimerDisabled:(BOOL)a0 forReason:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)notifyOnNextUserEvent;
- (id)folderNameForDisplayID:(id)a0;
- (void)undimScreen;
- (void)enableLockScreenBundleNamed:(id)a0 activationContext:(id)a1;
- (BOOL)lockScreenIsShowing;
- (BOOL)openURL:(id)a0 allowUnlock:(BOOL)a1 animated:(BOOL)a2;
- (void)activateModalBulletinAlert:(id)a0;
- (BOOL)isIdleTimerDisabledForReason:(id)a0;
- (int)networkUsageTypeForAppWithDisplayID:(id)a0;
- (BOOL)deviceIsPasscodeLockedRemotely;
- (BOOL)deviceIsBlocked;
- (BOOL)canLaunchFromSource:(int)a0 withURL:(id)a1 bundleID:(id)a2;
- (BOOL)deviceIsLocked;
- (void)removeIdleTimerHandler:(id)a0;
- (void)updateInterfaceOrientationIfNecessary;
- (BOOL)springBoardIsActive;
- (void)lockAndDimDevice;
- (BOOL)deviceIsTethered;
- (id)_safeValue:(id)a0 forKey:(id)a1 ofType:(Class)a2;

@end
