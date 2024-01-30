@class _SFOverlayProvider, SFBannerTheme;

@interface _SFPinnableBanner : UIView

@property (nonatomic, getter=isPinnedToTop) BOOL pinnedToTop;
@property (nonatomic, getter=isInitiallyBehindNavigationBar) BOOL initiallyBehindNavigationBar;
@property (retain, nonatomic) SFBannerTheme *theme;
@property (readonly, nonatomic) _SFOverlayProvider *overlayProvider;

+ (double)unpinAnimationDuration;
+ (double)unpinAnimationDelay;
+ (double)pinAnimationDelay;

- (void).cxx_destruct;
- (void)contentSizeCategoryDidChange;
- (void)invalidateBannerLayout;
- (void)themeDidChange;
- (void)setTheme:(id)a0 animated:(BOOL)a1;

@end
