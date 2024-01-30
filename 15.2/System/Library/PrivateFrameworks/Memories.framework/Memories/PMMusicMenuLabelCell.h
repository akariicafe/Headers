@class UILabel, NSLayoutConstraint;

@interface PMMusicMenuLabelCell : UITableViewCell

@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) NSLayoutConstraint *labelLeadingConstraint;

- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void)awakeFromNib;
- (void).cxx_destruct;

@end
