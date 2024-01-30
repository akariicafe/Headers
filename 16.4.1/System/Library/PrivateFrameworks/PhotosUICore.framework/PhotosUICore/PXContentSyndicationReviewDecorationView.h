@class PXAssetReference, UIImageView;

@interface PXContentSyndicationReviewDecorationView : UIView <PXGDecorationView> {
    UIImageView *_imageView;
    long long _eligibility;
}

@property (copy, nonatomic) PXAssetReference *userData;
@property (nonatomic) unsigned long long decorationOptions;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } clippingRect;
@property (readonly, nonatomic) BOOL shouldReuseWhenInvisible;

- (void)becomeReusable;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)_positionSubviews;
- (void)_setEligibility:(long long)a0;
- (void)_updateAssetInformation;

@end
