@class STHorizontallySegmentedView, STHistoricalUsageViewController;

@interface STHistoricalScreenTimeCell : STTableCell

@property (readonly) STHistoricalUsageViewController *historicalUsageViewController;
@property (readonly) STHorizontallySegmentedView *topItemsView;

- (void)setValue:(id)a0;
- (id)value;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (void)_numberOfLinesDidChangeFrom:(unsigned long long)a0 to:(unsigned long long)a1;
- (void)_currentViewModeDidChangeFrom:(long long)a0 to:(long long)a1;
- (void)_hasMulitlineLayoutDidChangeFrom:(BOOL)a0 to:(BOOL)a1;
- (void)_handleEffectiveChangeForViewMode:(long long)a0 hasMultilineLayout:(BOOL)a1 numberOfLines:(unsigned long long)a2;

@end
