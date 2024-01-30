@class STUsageGraphViewController, STDailyAverageView, STUsageSummaryTitleView, STHorizontallySegmentedView;

@interface STDailyAverageSummaryTableViewCell : STTableCell

@property (readonly) STUsageSummaryTitleView *titleView;
@property (readonly) STUsageGraphViewController *usageGraphViewController;
@property (readonly) STHorizontallySegmentedView *topItemsView;
@property (readonly) STDailyAverageView *dailyAverageView;

- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (void)_numberOfLinesDidChangeFrom:(unsigned long long)a0 to:(unsigned long long)a1;
- (void)_layoutDidChangeFrom:(BOOL)a0 to:(BOOL)a1;
- (id)initWithUsageReport:(id)a0;

@end
