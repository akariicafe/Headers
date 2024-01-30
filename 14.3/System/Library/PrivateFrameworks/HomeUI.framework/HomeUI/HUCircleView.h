@class UIView;

@interface HUCircleView : UIView

@property (retain, nonatomic) UIView *controlCenterMaterialView;
@property (nonatomic) BOOL backgroundColorFollowsTintColor;
@property (nonatomic) BOOL borderColorFollowsTintColor;

+ (BOOL)requiresConstraintBasedLayout;

- (void)tintColorDidChange;
- (void).cxx_destruct;
- (BOOL)_shouldAnimatePropertyWithKey:(id)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
