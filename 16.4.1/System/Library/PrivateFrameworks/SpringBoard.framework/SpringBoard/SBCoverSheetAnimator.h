@class SBSceneManager, SBWindowSelfHostWrapper, SBFolderController, SBHUnlockSettings, UIWindow, SBIconZoomAnimator, SBLockToAppStatusBarAnimator, SBWallpaperController;

@interface SBCoverSheetAnimator : NSObject

@property (retain, nonatomic) SBLockToAppStatusBarAnimator *statusBarAnimator;
@property (retain, nonatomic) SBIconZoomAnimator *iconAnimator;
@property (retain, nonatomic) SBWindowSelfHostWrapper *coverSheetWindowHostWrapper;
@property (retain, nonatomic) SBSceneManager *sceneManager;
@property (retain, nonatomic) UIWindow *hostingWindow;
@property (retain, nonatomic) UIWindow *switcherWindow;
@property (retain, nonatomic) SBWallpaperController *wallpaperController;
@property (retain, nonatomic) SBFolderController *folderController;
@property (retain, nonatomic) SBHUnlockSettings *unlockSettings;
@property (nonatomic, getter=isTransitioning) BOOL transitioning;
@property (weak, nonatomic) UIWindow *coverSheetWindow;

- (void).cxx_destruct;
- (void)_setWallpaperToLocked:(BOOL)a0 duration:(double)a1;
- (void)_prepareIconAnimatorIncludingLockScreen:(BOOL)a0;
- (void)_updateCoverSheetHosting;
- (void)animateToCoverSheet:(BOOL)a0 animated:(BOOL)a1 withCompletion:(id /* block */)a2;
- (id)initWithCoverSheetWindow:(id)a0 sceneManager:(id)a1 hostingWindow:(id)a2 switcherWindow:(id)a3 wallpaperController:(id)a4 folderController:(id)a5 unlockSettings:(id)a6;

@end
