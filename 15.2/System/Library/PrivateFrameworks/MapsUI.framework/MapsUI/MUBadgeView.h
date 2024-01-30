@class NSString, UILabel, UIVisualEffectView;

@interface MUBadgeView : UIView {
    UILabel *_label;
    UIVisualEffectView *_blurView;
}

@property (retain, nonatomic) NSString *badgeString;

- (id)attributionFont;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setupConstraints;
- (void).cxx_destruct;
- (void)_setupSubviews;

@end
