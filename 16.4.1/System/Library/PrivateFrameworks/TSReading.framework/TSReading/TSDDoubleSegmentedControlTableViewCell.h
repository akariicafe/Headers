@class TSKSegmentedControl;

@interface TSDDoubleSegmentedControlTableViewCell : UITableViewCell

@property (readonly, nonatomic) TSKSegmentedControl *leftSegmentedControl;
@property (readonly, nonatomic) TSKSegmentedControl *rightSegmentedControl;

- (void)dealloc;
- (void)layoutSubviews;
- (id)initWithLeftSegmentedControl:(id)a0 rightSegmentedControl:(id)a1;

@end
