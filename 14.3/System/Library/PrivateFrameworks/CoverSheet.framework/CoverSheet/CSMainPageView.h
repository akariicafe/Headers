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

- (void)updateForLegibilitySettings:(id)a0;
- (void)_layoutWallpaperEffectView;
- (void).cxx_destruct;
- (id)presentationRegions;
- (void)_layoutLogoutButtonView;
- (void)updateForPresentation:(id)a0;
- (void)layoutSubviews;
- (void)_updateLogoutButtonForLegibilitySettings;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_logoutButtonInsets;

@end
