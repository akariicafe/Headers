@class UILabel, UIView;

@interface SKUIDeveloperInfoLineItemView : UIView {
    UILabel *_labelLabel;
    UIView *_separatorView;
    UILabel *_valueLabel;
}

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInset;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setBackgroundColor:(id)a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)initWithLabel:(id)a0 value:(id)a1;

@end
