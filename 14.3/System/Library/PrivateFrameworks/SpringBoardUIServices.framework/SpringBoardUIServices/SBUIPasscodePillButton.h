@class UIFont, NSString, CABackdropLayer, UILabel, UIView;

@interface SBUIPasscodePillButton : UIControl {
    UILabel *_titleLabel;
    UIView *_pillView;
    UIView *_backdropView;
    CABackdropLayer *_backdropLayer;
}

@property (nonatomic) double unhighlightedAlpha;
@property (nonatomic) double highlightedAlpha;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) UIFont *font;

- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setHighlighted:(BOOL)a0;

@end
