@class UIColor, _TPTemplatedColoredImageView;

@interface TPRevealingRingView : UIView {
    struct { struct CGSize { double width; double height; } size; struct { struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rect; double cornerRadius; } outerPath; struct { struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rect; double cornerRadius; } innerPath; BOOL isCircle; BOOL drawsOutsideOuterPath; } _outerViewDrawingProperties;
    _TPTemplatedColoredImageView *_outerView;
    struct { struct CGSize { double width; double height; } size; struct { struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rect; double cornerRadius; } outerPath; struct { struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rect; double cornerRadius; } innerPath; BOOL isCircle; BOOL drawsOutsideOuterPath; } _innerViewDrawingProperties;
    _TPTemplatedColoredImageView *_innerView;
    UIColor *_colorInsideRing;
    BOOL _isCircularRing;
    BOOL _revealed;
}

@property (readonly, nonatomic) struct CGSize { double x0; double x1; } ringSize;
@property (readonly, nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } paddingOutsideRing;
@property (nonatomic) double cornerRadius;
@property (nonatomic) double defaultRingStrokeWidth;
@property (retain, nonatomic) UIColor *colorOutsideRing;
@property (retain, nonatomic) UIColor *colorInsideRing;
@property (nonatomic) double revealAnimationDuration;
@property (nonatomic) double unrevealAnimationDuration;
@property (nonatomic) double alphaOutsideRing;
@property (nonatomic) double alphaInsideRing;

+ (id)classIdentifier;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (void)setRevealed:(BOOL)a0 animated:(BOOL)a1 delay:(double)a2;
- (void)setRevealed:(BOOL)a0 animated:(BOOL)a1;
- (id)description;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })ringSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 paddingOutsideRing:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setPaddingOutsideRing:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)_evaluateCircularness;
- (void)_animateForReveal:(BOOL)a0 withDuration:(float)a1 delay:(double)a2;
- (void)_computeOuterViewDrawingPropertiesWithScale:(double)a0;
- (void)_computeInnerViewDrawingPropertiesWithScale:(double)a0;
- (void)_calculateOuter:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 inner:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1 newXOffset:(double *)a2 newYOffset:(double *)a3 withScale:(double)a4;
- (BOOL)_shouldDrawAsCircle:(struct CGSize { double x0; double x1; })a0 cornerRadius:(double)a1;
- (BOOL)_isSquare:(struct CGSize { double x0; double x1; })a0;

@end
