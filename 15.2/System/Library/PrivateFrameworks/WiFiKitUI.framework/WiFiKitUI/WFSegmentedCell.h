@class UISegmentedControl;

@interface WFSegmentedCell : UITableViewCell

@property (weak, nonatomic) UISegmentedControl *segmentedControl;
@property (copy) id /* block */ handler;

- (void)awakeFromNib;
- (void)addSubview:(id)a0;
- (void).cxx_destruct;
- (void)_segmentedControlDidChange:(id)a0;

@end
