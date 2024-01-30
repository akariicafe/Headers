@class AXUIBannerView;

@interface AXUIBannerPresenter : AXUIFloatingViewPresenter

@property (retain, nonatomic) AXUIBannerView *bannerView;

- (void)_contentSizeCategoryDidChange:(id)a0;
- (void).cxx_destruct;
- (void)presentBannerViewWithText:(id)a0 secondaryText:(id)a1 duration:(double)a2 fromUserAction:(BOOL)a3;
- (id)initWithContainingView:(id)a0;
- (void)presentBannerViewWithText:(id)a0 duration:(double)a1;
- (void)presentCustomView:(id)a0 duration:(double)a1;

@end
