@class UIColor, SKUIBorderView;

@interface SKUITableViewCell : UITableViewCell {
    SKUIBorderView *_bottomBorderView;
    SKUIBorderView *_topBorderView;
    double _titlePaddingLeft;
}

@property (copy, nonatomic) UIColor *bottomBorderColor;
@property (copy, nonatomic) UIColor *topBorderColor;
@property (nonatomic) double borderPaddingLeft;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } textLabelInsets;

- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)_reloadBorderVisibility;

@end
