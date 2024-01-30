@class UIButton;

@interface PKInlineInkPickerItem : UIView

@property (retain, nonatomic) UIButton *button;
@property (nonatomic) double yOffset;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (id)initWithButton:(id)a0;

@end
