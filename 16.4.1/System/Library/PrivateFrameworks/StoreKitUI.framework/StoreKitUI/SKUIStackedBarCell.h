@class UIButton, UILabel, UIView;

@interface SKUIStackedBarCell : UIButton {
    UILabel *_expandedLabel;
    UIView *_separator;
}

@property (nonatomic) BOOL expanded;
@property (readonly, nonatomic) UIButton *backButton;

- (void)setTitle:(id)a0 forState:(unsigned long long)a1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setHighlighted:(BOOL)a0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
