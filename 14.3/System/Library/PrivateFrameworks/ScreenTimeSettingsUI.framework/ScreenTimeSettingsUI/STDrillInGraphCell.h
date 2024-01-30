@class UILabel, STUsageItem, STUsageGraphViewController;

@interface STDrillInGraphCell : STTableCell

@property (readonly, nonatomic) UILabel *usageLabel;
@property (readonly, nonatomic) STUsageGraphViewController *usageGraphViewController;
@property (readonly, nonatomic) STUsageItem *usageItem;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (void).cxx_destruct;
- (void)setValue:(id)a0;

@end
