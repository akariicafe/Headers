@interface CAMIntensityButton : UIButton

@property (nonatomic) double intensityValue;
@property (nonatomic, getter=isActive) BOOL active;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } tappableEdgeInsets;
@property (nonatomic) long long layoutStyle;
@property (nonatomic) long long orientation;

- (void)setOrientation:(long long)a0 animated:(BOOL)a1;
- (id)initWithLayoutStyle:(long long)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (void)setActive:(BOOL)a0 animated:(BOOL)a1;
- (void)_updateColorsAnimated:(BOOL)a0;

@end
