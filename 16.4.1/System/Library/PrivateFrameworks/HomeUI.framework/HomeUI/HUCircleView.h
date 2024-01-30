@class UIView;

@interface HUCircleView : UIView

@property (retain, nonatomic) UIView *controlCenterMaterialView;
@property (nonatomic) BOOL backgroundColorFollowsTintColor;
@property (nonatomic) BOOL borderColorFollowsTintColor;

+ (BOOL)requiresConstraintBasedLayout;

- (BOOL)_shouldAnimatePropertyWithKey:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)tintColorDidChange;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
