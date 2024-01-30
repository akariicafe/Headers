@class UISwitch, WFSwitchTableItem;

@interface WFSwitchTableCell : UITableViewCell

@property (weak, nonatomic) WFSwitchTableItem *tableItem;
@property (readonly, nonatomic) UISwitch *switchView;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)switchValueChanged:(id)a0;

@end
