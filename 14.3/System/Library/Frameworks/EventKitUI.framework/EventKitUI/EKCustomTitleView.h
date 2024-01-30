@class UILabel, UIImageView;

@interface EKCustomTitleView : UIView

@property (retain) UILabel *originalTitle;
@property (retain) UILabel *title;
@property (retain) UIImageView *originalImage;
@property (retain) UIImageView *titleImage;
@property (retain) UILabel *subTitle;
@property BOOL showSubtitle;
@property BOOL animating;

- (BOOL)isAccessibilityElement;
- (id)initWithTitle:(id)a0 subTitle:(id)a1 eventViewController:(id)a2;
- (void)animateInWithCompletionBlock:(id /* block */)a0;
- (void)animateOutWithCompletionBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (long long)accessibilityElementCount;
- (id)accessibilityElementAtIndex:(long long)a0;
- (long long)indexOfAccessibilityElement:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_centerAndClipFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
