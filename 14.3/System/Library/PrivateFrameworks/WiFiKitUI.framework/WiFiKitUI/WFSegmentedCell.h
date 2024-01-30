@class UISegmentedControl;

@interface WFSegmentedCell : UITableViewCell

@property (weak, nonatomic) UISegmentedControl *segmentedControl;
@property (copy) id /* block */ handler;

- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)addSubview:(id)a0;
- (void)_segmentedControlDidChange:(id)a0;

@end
