@class UISegmentedControl;

@interface STUsageSummaryHeaderView : STTableViewHeaderFooterView <PSHeaderFooterView>

@property (readonly, nonatomic) UISegmentedControl *segmentedControl;

- (id)initWithSpecifier:(id)a0;
- (void).cxx_destruct;
- (double)preferredHeightForWidth:(double)a0;

@end
