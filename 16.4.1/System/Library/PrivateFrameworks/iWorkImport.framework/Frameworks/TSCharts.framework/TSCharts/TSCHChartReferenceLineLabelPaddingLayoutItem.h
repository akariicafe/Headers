@class TSCHChartAxisID;

@interface TSCHChartReferenceLineLabelPaddingLayoutItem : TSCHChartLayoutItem

@property (retain, nonatomic) TSCHChartAxisID *axisID;

- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })calcMinSize;
- (id)initWithParent:(id)a0 axisID:(id)a1;
- (struct CGSize { double x0; double x1; })p_calcMinSizeForModel:(id)a0;
- (BOOL)p_hasReferenceLineLabelsWithModel:(id)a0;

@end
