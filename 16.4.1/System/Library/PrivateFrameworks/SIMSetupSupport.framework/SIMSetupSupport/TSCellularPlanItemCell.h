@class UILabel;

@interface TSCellularPlanItemCell : UITableViewCell

@property (retain) UILabel *title;
@property (retain) UILabel *planInfo;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void)setIcon:(BOOL)a0;
- (void).cxx_destruct;
- (void)setDisable;

@end
