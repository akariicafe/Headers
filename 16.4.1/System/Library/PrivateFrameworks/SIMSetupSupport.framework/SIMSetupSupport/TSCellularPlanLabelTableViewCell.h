@class UILabel, CNGeminiBadge;

@interface TSCellularPlanLabelTableViewCell : UITableViewCell

@property (retain) CNGeminiBadge *badge;
@property (retain) UILabel *label;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)setLabel:(id)a0 badge:(id)a1;
- (void)setLabelWithNoBadge:(id)a0;

@end
