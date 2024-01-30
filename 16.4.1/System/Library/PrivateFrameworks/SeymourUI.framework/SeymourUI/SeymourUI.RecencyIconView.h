@class UIView, NSLayoutYAxisAnchor;

@interface SeymourUI.RecencyIconView : UIView {
    void /* unknown type, empty encoding */ title;
    void /* unknown type, empty encoding */ label;
    void /* unknown type, empty encoding */ layout;
    void /* unknown type, empty encoding */ imageView;
    void /* unknown type, empty encoding */ layoutView;
}

@property (nonatomic, readonly) NSLayoutYAxisAnchor *firstBaselineAnchor;
@property (nonatomic, readonly) NSLayoutYAxisAnchor *lastBaselineAnchor;
@property (nonatomic, readonly) UIView *viewForFirstBaselineLayout;
@property (nonatomic, readonly) UIView *viewForLastBaselineLayout;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)didMoveToSuperview;
- (void).cxx_destruct;

@end
