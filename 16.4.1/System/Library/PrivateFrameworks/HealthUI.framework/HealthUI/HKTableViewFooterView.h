@class UILabel;

@interface HKTableViewFooterView : UIView

@property (readonly, nonatomic) UILabel *label;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInsets;
@property (nonatomic) double preferredMaxLayoutWidth;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (id)init;
- (void).cxx_destruct;
- (void)updateFont;

@end
