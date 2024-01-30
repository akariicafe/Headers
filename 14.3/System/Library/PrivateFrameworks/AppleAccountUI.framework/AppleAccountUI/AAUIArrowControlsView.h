@class UIButton;
@protocol AAUIArrowControlsViewDelegate;

@interface AAUIArrowControlsView : UIView

@property (nonatomic) id<AAUIArrowControlsViewDelegate> delegate;
@property (readonly, nonatomic) UIButton *downButton;
@property (readonly, nonatomic) UIButton *upButton;
@property (nonatomic) long long interfaceOrientation;

+ (double)defaultHeightForOrientation:(long long)a0;
+ (double)defaultWidthForOrientation:(long long)a0;

- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_arrowButtonWasTapped:(id)a0;

@end
