@class PXAssetReference, PXTextBannerView;

@interface PXPhotosGridRecentlyDeletedDecorationView : UIView <PXGDecorationView>

@property (retain, nonatomic) PXTextBannerView *textBannerView;
@property (copy, nonatomic) PXAssetReference *userData;
@property (nonatomic) unsigned long long decorationOptions;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } clippingRect;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)becomeReusable;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateTextBanner;

@end
