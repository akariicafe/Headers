@class UILabel, UIImageView, UIView;

@interface BCChatButton : UIControl {
    BOOL _isInverted;
    long long _style;
    UILabel *_label;
    UILabel *_smallLabel;
    UIImageView *_iconImageView;
    UIView *_centeredView;
}

- (void)sizeToFit;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_populateArchivedSubviews:(id)a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (id)initWithStyle:(long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setHighlighted:(BOOL)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)viewForLastBaselineLayout;
- (void)layoutSubviews;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setEnabled:(BOOL)a0;
- (id)viewForFirstBaselineLayout;
- (void).cxx_destruct;

@end
