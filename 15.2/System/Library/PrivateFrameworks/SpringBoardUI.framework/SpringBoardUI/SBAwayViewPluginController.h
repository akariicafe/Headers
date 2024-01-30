@class _UILegibilitySettings, NSString, SBLockScreenPluginAction, SBLockScreenPluginMutableAppearanceContext, UIViewController;
@protocol SBLockScreenPluginViewController, SBLockScreenPluginAgent, SBLockScreenPluginAppearance;

@interface SBAwayViewPluginController : UIViewController <SBLockScreenPluginViewController, SBLockScreenPluginController> {
    SBLockScreenPluginMutableAppearanceContext *_appearance;
}

@property (nonatomic) long long orientation;
@property (nonatomic) BOOL viewCanBeDisplayed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SBLockScreenPluginAgent> pluginAgent;
@property (readonly, nonatomic) long long pluginPriority;
@property (readonly, nonatomic) UIViewController<SBLockScreenPluginViewController> *pluginViewController;
@property (readonly, nonatomic) id<SBLockScreenPluginAppearance> pluginAppearance;
@property (readonly, retain, nonatomic) SBLockScreenPluginAction *pluginUnlockAction;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;

+ (void)enableBundleNamed:(id)a0 activationContext:(id)a1;
+ (void)disableBundleNamed:(id)a0 deactivationContext:(id)a1;
+ (void)enableBundleNamed:(id)a0;
+ (void)disableBundleNamed:(id)a0;

- (void)disable;
- (void)setActivationContext:(id)a0;
- (id)_legibilitySettings;
- (long long)presentationStyle;
- (long long)notificationBehavior;
- (BOOL)handleMenuButtonTap;
- (BOOL)showStatusBar;
- (void).cxx_destruct;
- (id)init;
- (id)customHeaderView;
- (void)setFullscreen:(BOOL)a0 animated:(BOOL)a1;
- (BOOL)shouldShowLockStatusBarTime;
- (BOOL)handleLockButtonPressed;
- (BOOL)handleVolumeUpButtonPressed;
- (BOOL)handleVolumeDownButtonPressed;
- (BOOL)handleHeadsetButtonPressed:(BOOL)a0;
- (long long)overlayStyle;
- (id)pluginAnimateAppearanceTransition:(BOOL)a0 withCompletion:(id /* block */)a1;
- (BOOL)pluginAnimatesAppearanceTransition:(BOOL)a0;
- (void)pluginWillActivateWithContext:(id)a0;
- (void)pluginDidDeactivateWithContext:(id)a0;
- (BOOL)pluginHandleEvent:(long long)a0;
- (id)slideToUnlockText;
- (BOOL)showDateView;
- (BOOL)hasCustomSubtitle;
- (id)customSubtitleText;
- (BOOL)showDate;
- (BOOL)allowsSiri;
- (BOOL)allowsLockScreenCamera;
- (BOOL)allowsUnlocking;
- (BOOL)allowsLogout;
- (BOOL)wantsMesaAutoUnlock;
- (BOOL)allowsLockScreenMediaControls;
- (BOOL)allowsControlCenter;
- (BOOL)allowsScreenshots;
- (BOOL)legibilitySettingsOverridesVibrancy;
- (BOOL)isContentViewWhiteUnderSlideToUnlockText;
- (void)_updateAppearanceAndNotify:(BOOL)a0;
- (void)setDeactivationContext:(id)a0;
- (void)purgeView;
- (id)bundleIDForUnlock;
- (unsigned long long)unlockAnimationStyleForDestinationApp:(id)a0;
- (BOOL)shouldDisableOnUnlock;
- (BOOL)shouldDisableOnRelock;
- (id /* block */)enableTransitionBlock;
- (BOOL)viewWantsOverlayLayout;
- (BOOL)disablesAwayItemsCompletely;
- (BOOL)shouldAutoHideNotifications;
- (void)setFullscreen:(BOOL)a0 duration:(double)a1;
- (BOOL)allowsTimer;
- (BOOL)allowsLockScreenHint;
- (BOOL)animateResumingToApplicationWithIdentifier:(id)a0;
- (BOOL)showBatteryChargingText;
- (id)customSubtitleColor;
- (BOOL)allowsPhotoSlideshow;
- (BOOL)handleMenuButtonDoubleTap;
- (BOOL)wantsMenuButtonHeldEvent;
- (BOOL)handleMenuButtonHeld;
- (void)setNeedsLegibilityAppearanceUpdate;

@end
