@class UIFont, UIColor, NSString, UILabel;

@interface _UITableViewCellBadge : UIView

@property (retain, nonatomic) UILabel *badgeTextLabel;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIColor *color;
@property (copy, nonatomic) NSString *text;

- (void).cxx_destruct;
- (BOOL)isHighlighted;
- (void)layoutSubviews;
- (double)minHeight;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_sizeToFit;
- (void)setHighlighted:(BOOL)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
