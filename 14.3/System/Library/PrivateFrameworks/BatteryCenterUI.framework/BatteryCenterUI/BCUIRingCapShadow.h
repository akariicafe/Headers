@class UIImageView;

@interface BCUIRingCapShadow : UIView {
    UIImageView *_shadowCapImageView;
}

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } ringBounds;
@property (readonly, nonatomic) double lineWidth;
@property (nonatomic) double arcFraction;

+ (id)ringCapShadowForRingWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 lineWidth:(double)a1;
+ (id)_ringCapShadowImageWithRingBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 lineWidth:(double)a1 scale:(double)a2;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)_initWithRingBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 lineWidth:(double)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_shadowCapFrame;

@end
