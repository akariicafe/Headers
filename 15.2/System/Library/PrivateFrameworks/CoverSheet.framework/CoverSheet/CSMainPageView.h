@class NSString, CSVibrantWallpaperButton, SBWallpaperEffectView, _UILegibilitySettings;

@interface CSMainPageView : CSPageViewBase <CAAnimationDelegate> {
    _UILegibilitySettings *_legibilitySettings;
    BOOL _logoutHugCorner;
}

@property (retain, nonatomic) CSVibrantWallpaperButton *logoutButtonView;
@property (retain, nonatomic) SBWallpaperEffectView *wallpaperEffectView;
@property (nonatomic) BOOL fakeWallpaperVisible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutSubviews;
- (void)updateForPresentation:(id)a0;
- (void)updateForLegibilitySettings:(id)a0;
- (id)presentationRegions;
- (void)_layoutWallpaperEffectView;
- (void).cxx_destruct;
- (void)_layoutLogoutButtonView;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_logoutButtonInsets;
- (void)_updateLogoutButtonForLegibilitySettings;

@end
