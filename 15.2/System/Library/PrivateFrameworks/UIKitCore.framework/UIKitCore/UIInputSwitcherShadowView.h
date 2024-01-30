@class _UIBackdropView, UIKeyboardMenuView, NSArray;

@interface UIInputSwitcherShadowView : UIView

@property (nonatomic) int mode;
@property (nonatomic) UIKeyboardMenuView *menu;
@property (retain, nonatomic) _UIBackdropView *blurView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } keyRect;
@property (nonatomic) double pointerOffset;
@property (retain, nonatomic) NSArray *gradientColors;

- (void)layoutSubviews;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
