@interface _SFPinnableBanner : UIView

@property (nonatomic, getter=isPinnedToTop) BOOL pinnedToTop;
@property (nonatomic, getter=isInitiallyBehindNavigationBar) BOOL initiallyBehindNavigationBar;

+ (double)unpinAnimationDuration;
+ (double)unpinAnimationDelay;
+ (double)pinAnimationDelay;

- (void)contentSizeCategoryDidChange;
- (void)invalidateBannerLayout;

@end
