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

- (long long)preferredStatusBarStyle;
- (long long)idleTimerDuration;
- (void)_updateLegibility;
- (id)_legibilitySettings;
- (void)setContainerOrientation:(long long)a0;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)conformsToCSBehaviorProviding;
- (long long)idleWarnMode;
- (void)_updateData;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidDisappear:(BOOL)a0;
- (long long)idleTimerMode;
- (void)refreshData;
- (BOOL)isContentOpaque;
- (void)conformsToCSExternalBehaviorProviding;
- (BOOL)_canShowWhileLocked;
- (void)viewDidLoad;
- (id)newTransientOverlayDismissalTransitionCoordinator;
- (id)newTransientOverlayPresentationTransitionCoordinator;
- (void)prepareForRestart;
- (id)initWithUserAccount:(id)a0;
- (BOOL)_supportsDebugUI;
- (void)_updateDebugTasksViewControllerSizeFromSize:(struct CGSize { double x0; double x1; })a0;

@end
