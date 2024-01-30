@class ICQBannerView;

@interface PXCloudQuotaBannerView : PXCloudQuotaView {
    ICQBannerView *_bannerView;
}

- (id)initWithContentView:(id)a0;
- (id)_font;
- (struct CGSize { double x0; double x1; })contentViewSizeForWidth:(double)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithBannerView:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
