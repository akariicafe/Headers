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

+ (void)disableBundleNamed:(id)a0;
+ (void)disableBundleNamed:(id)a0 deactivationContext:(id)a1;
+ (void)enableBundleNamed:(id)a0;
+ (void)enableBundleNamed:(id)a0 activationContext:(id)a1;

- (long long)presentationStyle;
- (BOOL)showStatusBar;
- (void)disable;
- (id)_legibilitySettings;
- (void)setActivationContext:(id)a0;
- (BOOL)handleMenuButtonTap;
- (id)init;
- (long long)notificationBehavior;
- (void).cxx_destruct;
- (BOOL)shouldShowLockStatusBarTime;
- (id)customHeaderView;
- (void)setFullscreen:(BOOL)a0 animated:(BOOL)a1;
- (BOOL)handleHeadsetButtonPressed:(BOOL)a0;
- (BOOL)handleLockButtonPressed;
- (BOOL)handleVolumeDownButtonPressed;
- (BOOL)handleVolumeUpButtonPressed;
- (long long)overlayStyle;
- (void)pluginDidDeactivateWithContext:(id)a0;
- (id)pluginAnimateAppearanceTransition:(BOOL)a0 withCompletion:(id /* block */)a1;
- (BOOL)pluginAnimatesAppearanceTransition:(BOOL)a0;
- (BOOL)pluginHandleEvent:(long long)a0;
- (void)pluginWillActivateWithContext:(id)a0;
- (id)slideToUnlockText;
- (BOOL)showDate;
- (void)setDeactivationContext:(id)a0;
- (BOOL)allowsUnlocking;
- (void)_updateAppearanceAndNotify:(BOOL)a0;
- (BOOL)allowsControlCenter;
- (BOOL)allowsLockScreenCamera;
- (BOOL)allowsLockScreenHint;
- (BOOL)allowsLockScreenMediaControls;
- (BOOL)allowsLogout;
- (BOOL)allowsPhotoSlideshow;
- (BOOL)allowsScreenshots;
- (BOOL)allowsSiri;
- (BOOL)allowsTimer;
- (BOOL)animateResumingToApplicationWithIdentifier:(id)a0;
- (id)bundleIDForUnlock;
- (id)customSubtitleColor;
- (id)customSubtitleText;
- (BOOL)disablesAwayItemsCompletely;
- (id /* block */)enableTransitionBlock;
- (BOOL)handleMenuButtonDoubleTap;
- (BOOL)handleMenuButtonHeld;
- (BOOL)hasCustomSubtitle;
- (BOOL)isContentViewWhiteUnderSlideToUnlockText;
- (BOOL)legibilitySettingsOverridesVibrancy;
- (void)purgeView;
- (void)setFullscreen:(BOOL)a0 duration:(double)a1;
- (void)setNeedsLegibilityAppearanceUpdate;
- (BOOL)shouldAutoHideNotifications;
- (BOOL)shouldDisableOnRelock;
- (BOOL)shouldDisableOnUnlock;
- (BOOL)showBatteryChargingText;
- (BOOL)showDateView;
- (unsigned long long)unlockAnimationStyleForDestinationApp:(id)a0;
- (BOOL)viewWantsOverlayLayout;
- (BOOL)wantsMenuButtonHeldEvent;
- (BOOL)wantsMesaAutoUnlock;

@end
