@class _PKHueSpectrumView, CAShapeLayer;

@interface _PKFlatColorPickerButton : _PKInkColorButton

@property (retain, nonatomic) _PKHueSpectrumView *hueSpectrumView;
@property (retain, nonatomic) CAShapeLayer *selectedColorLayer;
@property (retain, nonatomic) CAShapeLayer *strokeShapeLayer;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } lastRenderedBounds;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithColor:(id)a0 isCompact:(BOOL)a1;

@end
