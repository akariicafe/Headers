@class _PKHueSpectrumView, UIImageView, CAShapeLayer;

@interface _PKEmbossedColorPickerButton : _PKInkColorButton

@property (retain, nonatomic) _PKHueSpectrumView *hueSpectrumView;
@property (retain, nonatomic) CAShapeLayer *selectedColorLayer;
@property (retain, nonatomic) UIImageView *embossImageView;
@property (retain, nonatomic) CAShapeLayer *strokeShapeLayer;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithColor:(id)a0 isCompact:(BOOL)a1;

@end
