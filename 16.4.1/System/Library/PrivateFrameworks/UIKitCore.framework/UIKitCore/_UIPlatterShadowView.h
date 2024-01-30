@class _UIShapeView, UIColor, UIBezierPath;

@interface _UIPlatterShadowView : UIView

@property (readonly, nonatomic) _UIShapeView *shadowMaskView;
@property (nonatomic) BOOL punchOut;
@property (retain, nonatomic) UIColor *shadowColor;
@property (nonatomic) double shadowOpacity;
@property (nonatomic) struct CGSize { double x0; double x1; } shadowOffset;
@property (nonatomic) double shadowRadius;
@property (retain, nonatomic) UIBezierPath *shadowPath;

- (BOOL)_shouldAnimatePropertyWithKey:(id)a0;
- (void).cxx_destruct;
- (id)initWithShadowPath:(id)a0;

@end
