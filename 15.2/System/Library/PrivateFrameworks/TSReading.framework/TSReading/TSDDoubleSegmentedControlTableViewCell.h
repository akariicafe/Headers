@class TSKSegmentedControl;

@interface TSDDoubleSegmentedControlTableViewCell : UITableViewCell

@property (readonly, nonatomic) TSKSegmentedControl *leftSegmentedControl;
@property (readonly, nonatomic) TSKSegmentedControl *rightSegmentedControl;

- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithLeftSegmentedControl:(id)a0 rightSegmentedControl:(id)a1;

@end
