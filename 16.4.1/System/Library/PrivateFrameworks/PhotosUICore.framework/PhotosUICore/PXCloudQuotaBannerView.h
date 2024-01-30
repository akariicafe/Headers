@class ICQBannerView, UIFont;

@interface PXCloudQuotaBannerView : PXCloudQuotaView {
    ICQBannerView *_bannerView;
}

@property (readonly, nonatomic) UIFont *contentViewFont;

- (id)initWithContentView:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })contentViewSizeForWidth:(double)a0;
- (id)initWithBannerView:(id)a0;

@end
