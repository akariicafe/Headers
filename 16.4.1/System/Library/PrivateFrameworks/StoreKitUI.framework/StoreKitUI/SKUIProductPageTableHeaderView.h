@class NSString, UILabel;

@interface SKUIProductPageTableHeaderView : UIView {
    UILabel *_titleLabel;
}

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInsets;
@property (copy, nonatomic) NSString *title;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setBackgroundColor:(id)a0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
