@class SBUICallToActionLabel, CSPageControl, SBFLockScreenDateView, SBWallpaperController, UILabel, _UILegibilitySettings, SBUIProudLockIconView, SBHomeGrabberView, UIStatusBar, UIView, CSQuickActionsView, _UILegibilityLabel, SBUILegibilityView;

@interface SBLockScreenPreviewView : UIView {
    UIView *_wallpaperView;
    SBFLockScreenDateView *_dateView;
    _UILegibilityLabel *_slideToUnlockLegibilityLabel;
    UIStatusBar *_statusBar;
    _UILegibilitySettings *_legibilitySettings;
    SBWallpaperController *_wallpaperController;
    SBUILegibilityView *_cameraView;
    UILabel *_slideToUnlockView;
    CSPageControl *_dashBoardPageControl;
    SBUICallToActionLabel *_callToActionLabel;
    SBUIProudLockIconView *_proudLockIconView;
    CSQuickActionsView *_quickActionsView;
    SBHomeGrabberView *_homeGrabberView;
}

- (void)_layoutStatusBar;
- (void)layoutSubviews;
- (void)_layoutDateView;
- (void)_layoutQuickActionsView;
- (void)_layoutPageControl;
- (void).cxx_destruct;
- (void)_layoutWallpaperView;
- (void)_setupWallpaperViewWithImage:(id)a0;
- (void)_setupDateViewWithOptions:(unsigned long long)a0;
- (void)_setupStatusBar;
- (void)_setupPageControl;
- (void)_setupCallToActionLabel;
- (void)_setupProudLockIconView;
- (void)_setupQuickActionView;
- (void)_setupHomeGrabberView;
- (void)_layoutCallToActionLabel;
- (void)_layoutProudLockIconView;
- (void)_layoutHomeGrabberView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 wallpaperController:(id)a1 options:(unsigned long long)a2 wallpaperImage:(id)a3;

@end
