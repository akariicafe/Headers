@class UILabel, CNGeminiBadge;

@interface TSCellularPlanUsesTableViewCell : UITableViewCell

@property (retain) CNGeminiBadge *badge;
@property (retain) UILabel *titleLabel;
@property (retain) UILabel *descriptionLabel;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)setLabel:(id)a0 description:(id)a1 badge:(id)a2;

@end
