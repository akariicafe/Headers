@class VUIUpsellOfferViewLayout, IKViewElement, IKImageElement, VUILabel, _TVImageView;

@interface VUIUpsellOfferView : UIView

@property (retain, nonatomic) IKImageElement *imageElement;
@property (retain, nonatomic) IKViewElement *viewElement;
@property (retain, nonatomic) VUIUpsellOfferViewLayout *layout;
@property (retain, nonatomic) VUILabel *titleLabel;
@property (retain, nonatomic) VUILabel *descriptionLabel;
@property (retain, nonatomic) _TVImageView *imageView;

+ (id)upsellViewFromElement:(id)a0 existingView:(id)a1;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })_iOS_layoutWithSize:(struct CGSize { double x0; double x1; })a0 metricsOnly:(BOOL)a1;

@end
