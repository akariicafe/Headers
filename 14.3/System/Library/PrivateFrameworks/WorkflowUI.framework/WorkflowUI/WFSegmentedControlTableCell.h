@class WFSegmentedControlValue, NSArray, UISegmentedControl, WFSegmentedControlTableItem;

@interface WFSegmentedControlTableCell : UITableViewCell

@property (weak, nonatomic) WFSegmentedControlTableItem *tableItem;
@property (retain, nonatomic) UISegmentedControl *segmentedControl;
@property (copy, nonatomic) NSArray *possibleValues;
@property (retain, nonatomic) WFSegmentedControlValue *selectedValue;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)valueChanged:(id)a0;

@end
