@class NSString, SBIdleTimerPolicyAggregator, NSMutableDictionary;
@protocol BSInvalidatable;

@interface SBUserAgent : NSObject <SBUIUserAgent_Internal> {
    NSMutableDictionary *_idleTimerDisableAssertions;
    id<BSInvalidatable> _bannerSuppressionAssertion;
}

@property (retain, nonatomic, setter=_setIdleTimerPolicyAggregator:) SBIdleTimerPolicyAggregator *_idleTimerPolicyAggregator;
@property (nonatomic) long long softwareUpdatePasscodePolicyType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setIdleText:(id)a0;
- (BOOL)isInternalInstall;
- (void)setIdleTimerDisabled:(BOOL)a0 forReason:(id)a1;
- (void)updateInterfaceOrientationIfNecessary;
- (void)setMinimumBacklightLevel:(float)a0 animated:(BOOL)a1;
- (BOOL)springBoardIsActive;
- (BOOL)deviceIsPasscodeLocked;
- (id)init;
- (BOOL)launchApplicationFromSource:(int)a0 withDisplayID:(id)a1 options:(id)a2;
- (id)foregroundApplicationDisplayID;
- (long long)activeInterfaceOrientation;
- (void).cxx_destruct;
- (void)lockAndDimDeviceDisconnectingCallIfNecessary:(BOOL)a0 andDimScreen:(BOOL)a1;
- (void)addIdleTimerHandler:(id)a0;
- (void)setBadgeNumberOrString:(id)a0 forApplicationWithID:(id)a1;
- (BOOL)isNamedRemoteAlertServiceActive:(id)a0 controllerClassName:(id)a1;
- (void)notifyOnNextUserEvent;
- (BOOL)launchApplicationFromSource:(int)a0 withURL:(id)a1 options:(id)a2;
- (struct __CFRunLoop { } *)wifiRunLoopRef;
- (BOOL)canLaunchFromSource:(int)a0 withURL:(id)a1 bundleID:(id)a2;
- (BOOL)isApplicationRestrictedOrHidden:(id)a0;
- (BOOL)deviceIsLocked;
- (void)disableLockScreenBundleNamed:(id)a0 deactivationContext:(id)a1;
- (BOOL)isIdleTimerDisabledForReason:(id)a0;
- (void)activateModalBulletinAlert:(id)a0;
- (BOOL)applicationInstalledForDisplayID:(id)a0;
- (void)addActiveInterfaceOrientationObserver:(id)a0;
- (BOOL)deviceIsPasscodeLockedRemotely;
- (BOOL)_openApplication:(id)a0 withURL:(id)a1 fromSource:(int)a2 animated:(BOOL)a3 options:(id)a4;
- (void)_cleanupFromBannerLaunch;
- (BOOL)launchFromSource:(int)a0 withURL:(id)a1 bundleID:(id)a2 allowUnlock:(BOOL)a3;
- (void)enableLockScreenBundleNamed:(id)a0 activationContext:(id)a1;
- (id)localizedDisplayNameForDisplayID:(id)a0;
- (id)_safeValue:(id)a0 forKey:(id)a1 ofType:(Class)a2;
- (id)folderNameForDisplayID:(id)a0;
- (BOOL)_launchFromSource:(int)a0 withURL:(id)a1 bundleID:(id)a2 allowUnlock:(BOOL)a3 animate:(BOOL)a4;
- (void)undimScreen;
- (int)networkUsageTypeForAppWithDisplayID:(id)a0;
- (BOOL)lockScreenIsShowing;
- (id)topSuspendedEventsOnlyDisplayID;
- (void)activateRemoteAlertService:(id)a0 options:(id)a1;
- (BOOL)deviceIsTethered;
- (void)lockAndDimDevice;
- (void)lockAndDimDeviceDisconnectingCallIfNecessary:(BOOL)a0;
- (void)removeActiveInterfaceOrientationObserver:(id)a0;
- (BOOL)openURL:(id)a0 allowUnlock:(BOOL)a1 animated:(BOOL)a2;
- (BOOL)isScreenOn;
- (void)removeIdleTimerHandler:(id)a0;
- (BOOL)deviceIsBlocked;
- (BOOL)isApplicationForegroundObscured:(id)a0;

@end
