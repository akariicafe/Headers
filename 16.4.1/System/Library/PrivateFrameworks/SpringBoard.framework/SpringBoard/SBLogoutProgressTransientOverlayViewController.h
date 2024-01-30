@class SBTransientOverlayWallpaperEffectView, NSString, UMUser, SBLogoutDebugBlockingViewController, SBMultiUserDefaults, SBPlatformController, SBLogoutProgressView;
@protocol SBLogoutProgressDataSource, SBLogoutProgressDelegate;

@interface SBLogoutProgressTransientOverlayViewController : SBTransientOverlayViewController <CSExternalBehaviorProviding> {
    SBLogoutDebugBlockingViewController *_debugTasksViewController;
    SBMultiUserDefaults *_multiUserDefaults;
    SBPlatformController *_platformController;
    SBLogoutProgressView *_progressView;
    SBTransientOverlayWallpaperEffectView *_wallpaperEffectView;
}

@property (weak, nonatomic) id<SBLogoutProgressDataSource> dataSource;
@property (weak, nonatomic) id<SBLogoutProgressDelegate> delegate;
@property (readonly, nonatomic) UMUser *user;
@property (readonly, nonatomic) long long scrollingStrategy;
@property (readonly, nonatomic) long long notificationBehavior;
@property (readonly, nonatomic) unsigned long long restrictedCapabilities;
@property (readonly, nonatomic) long long proximityDetectionMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *coverSheetIdentifier;
@property (readonly, nonatomic) long long participantState;

- (void)_updateData;
- (void)_updateLegibility;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)setContainerOrientation:(long long)a0;
- (void)conformsToCSExternalBehaviorProviding;
- (id)_legibilitySettings;
- (BOOL)_canShowWhileLocked;
- (void)conformsToCSBehaviorProviding;
- (long long)preferredStatusBarStyle;
- (void)viewDidLoad;
- (long long)idleTimerMode;
- (long long)idleTimerDuration;
- (void)viewDidDisappear:(BOOL)a0;
- (long long)idleWarnMode;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)isContentOpaque;
- (void)refreshData;
- (BOOL)_supportsDebugUI;
- (void)_updateDebugTasksViewControllerSizeFromSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithUserAccount:(id)a0;
- (id)newTransientOverlayDismissalTransitionCoordinator;
- (id)newTransientOverlayPresentationTransitionCoordinator;
- (void)prepareForRestart;

@end
