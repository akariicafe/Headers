@class UILabel, UIImageView, UIView;

@interface BCChatButton : UIControl {
    BOOL _isInverted;
    long long _style;
    UILabel *_label;
    UILabel *_smallLabel;
    UIImageView *_iconImageView;
    UIView *_centeredView;
}

- (id)viewForLastBaselineLayout;
- (void)_populateArchivedSubviews:(id)a0;
- (id)viewForFirstBaselineLayout;
- (id)initWithStyle:(long long)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setHighlighted:(BOOL)a0;
- (void)encodeWithCoder:(id)a0;
- (void)sizeToFit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setEnabled:(BOOL)a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;

@end
