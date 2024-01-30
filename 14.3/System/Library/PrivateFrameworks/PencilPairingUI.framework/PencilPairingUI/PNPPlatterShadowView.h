@class UIColor, UIBezierPath;

@interface PNPPlatterShadowView : UIView

@property (retain, nonatomic) UIColor *shadowColor;
@property (nonatomic) struct CGSize { double x0; double x1; } shadowOffset;
@property (nonatomic) double shadowOpacity;
@property (nonatomic) double shadowRadius;
@property (retain, nonatomic) UIBezierPath *shadowPath;

- (BOOL)_shouldAnimatePropertyWithKey:(id)a0;

@end
