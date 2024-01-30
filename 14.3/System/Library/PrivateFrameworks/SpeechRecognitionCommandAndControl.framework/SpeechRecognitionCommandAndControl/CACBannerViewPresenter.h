@class CACBannerView, UIView;

@interface CACBannerViewPresenter : NSObject

@property (retain, nonatomic) CACBannerView *bannerView;
@property (readonly, nonatomic) UIView *containingView;

+ (double)durationToDisplayMessageString:(id)a0;

- (void).cxx_destruct;
- (void)_hideBannerView;
- (void)presentBannerViewWithText:(id)a0 type:(long long)a1 duration:(double)a2;
- (id)initWithContainingView:(id)a0;
- (void)presentBannerViewWithText:(id)a0 type:(long long)a1;
- (void)dismissBannerView;

@end
