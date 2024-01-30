@class UIColor;

@interface BCUIRingView : UIView

@property (nonatomic) double ringStart;
@property (nonatomic) double ringEnd;
@property (nonatomic) double lineWidth;
@property (copy, nonatomic) UIColor *strokeColor;
@property (copy, nonatomic) UIColor *fillColor;

+ (Class)layerClass;

- (void)setFractionComplete:(double)a0;
- (void).cxx_destruct;
- (BOOL)_shouldAnimatePropertyWithKey:(id)a0;
- (id)_shapeLayer;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mt_applyVisualStyling:(id)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_invalidatePath;

@end
