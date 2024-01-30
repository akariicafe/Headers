@interface TSCHChartDataSetNameLayoutItem : TSCHChartTitleLayoutItem

@property (readonly, nonatomic) BOOL isAboveChartBody;

- (struct CGSize { double x0; double x1; })calcMinSize;
- (id)titleSelectionPath;
- (unsigned long long)titleParagraphStyleIndex;
- (BOOL)shouldPlaceTitleAtCenter;
- (BOOL)isTitleOn;
- (id)titleTextForModel:(id)a0;

@end
