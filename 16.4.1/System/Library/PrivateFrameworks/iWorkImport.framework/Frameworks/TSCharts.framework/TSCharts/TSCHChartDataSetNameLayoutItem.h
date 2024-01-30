@interface TSCHChartDataSetNameLayoutItem : TSCHChartTitleLayoutItem

@property (readonly, nonatomic) BOOL isAboveChartBody;

- (struct CGSize { double x0; double x1; })calcMinSize;
- (BOOL)isTitleOn;
- (BOOL)shouldPlaceTitleAtCenter;
- (unsigned long long)titleParagraphStyleIndex;
- (id)titleSelectionPath;
- (id)titleTextForModel:(id)a0;

@end
