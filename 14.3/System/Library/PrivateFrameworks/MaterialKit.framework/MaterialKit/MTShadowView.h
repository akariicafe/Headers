@interface MTShadowView : UIImageView

@property (readonly, nonatomic) struct { float opacity; struct CGSize { double width; double height; } offset; double radius; } shadowAttributes;
@property (readonly, nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } shadowOutsets;
@property (readonly, nonatomic) double maskCornerRadius;
@property (readonly, nonatomic) BOOL continuousCorners;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameWithContentWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)_updateShadowOutsetsIfNecessary;
- (void)didMoveToSuperview;
- (void)layoutSubviews;
- (void)_updateShadowVisualStyling;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithShadowAttributes:(struct { float x0; struct CGSize { double x0; double x1; } x1; double x2; })a0 maskCornerRadius:(double)a1;
- (id)initWithShadowAttributes:(struct { float x0; struct CGSize { double x0; double x1; } x1; double x2; })a0 maskCornerRadius:(double)a1 continuousCorners:(BOOL)a2;
- (void)_validateImage;

@end
