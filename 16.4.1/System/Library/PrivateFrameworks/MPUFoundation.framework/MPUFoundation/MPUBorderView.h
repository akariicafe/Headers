@class MPUBorderConfiguration;

@interface MPUBorderView : UIView

@property (copy, nonatomic) MPUBorderConfiguration *borderConfiguration;
@property (nonatomic) BOOL hidesWhenFullyTransparent;
@property (readonly, nonatomic) double requiredOutsetForDropShadow;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } resizableImageCapInsets;

+ (double)requiredOutsetForDropShadow;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
