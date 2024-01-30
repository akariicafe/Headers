@class _PKHueSpectrumView, CAShapeLayer;

@interface _PKFlatColorPickerButton : _PKInkColorButton

@property (retain, nonatomic) _PKHueSpectrumView *hueSpectrumView;
@property (retain, nonatomic) CAShapeLayer *selectedColorLayer;
@property (retain, nonatomic) CAShapeLayer *strokeShapeLayer;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } lastRenderedBounds;

- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)initWithColor:(id)a0 isCompact:(BOOL)a1;

@end
