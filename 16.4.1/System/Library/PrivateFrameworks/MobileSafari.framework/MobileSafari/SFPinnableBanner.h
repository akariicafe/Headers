@class SFOverlayProvider, UIView, NSNumber, SFBannerTheme;

@interface SFPinnableBanner : UIView {
    UIView *_topSeparator;
    UIView *_bottomSeparator;
}

@property (class, readonly, nonatomic) double unpinAnimationDuration;
@property (class, readonly, nonatomic) double unpinAnimationDelay;
@property (class, readonly, nonatomic) double pinAnimationDelay;
@property (class, readonly, nonatomic) BOOL omitsBottomSeparator;

@property (nonatomic) BOOL showsTopSeparator;
@property (nonatomic) BOOL showsBottomSeparator;
@property (nonatomic, getter=isPinnedToTop) BOOL pinnedToTop;
@property (retain, nonatomic) NSNumber *pinnedOffset;
@property (nonatomic, getter=isInitiallyBehindNavigationBar) BOOL initiallyBehindNavigationBar;
@property (readonly, nonatomic) BOOL shouldUsePlainTheme;
@property (retain, nonatomic) SFBannerTheme *theme;
@property (readonly, nonatomic) SFOverlayProvider *overlayProvider;

- (void)contentSizeCategoryDidChange;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)_setUpSeparators;
- (void)invalidateBannerLayout;
- (void)setTheme:(id)a0 animated:(BOOL)a1;
- (void)themeDidChange;

@end
