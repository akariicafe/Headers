@class TSCHChartAxisLineLayoutItem, TSCHChartReferenceLineLabelPaddingLayoutItem, TSCHChartReferenceLineLabelsLayoutItem, TSCHChartAxisPaddingLayoutItem, TSCHChartAxisID, TSCHChartAxisTickMarksLayoutItem, TSCHChartAxisTitleLayoutItem;

@interface TSCHChartAxisLayoutItem : TSCHChartLayoutItem

@property (nonatomic) struct CGSize { double width; double height; } chartBodySize;
@property (retain, nonatomic) TSCHChartAxisID *axisID;
@property (readonly, nonatomic) int axisPosition;
@property (readonly, nonatomic) TSCHChartAxisTitleLayoutItem *axisTitleLayoutItem;
@property (readonly, nonatomic) TSCHChartAxisPaddingLayoutItem *axisPaddingLayoutItem;
@property (readonly, nonatomic) TSCHChartAxisTickMarksLayoutItem *axisTickMarksLayoutItem;
@property (readonly, nonatomic) TSCHChartAxisLineLayoutItem *axisLineLayoutItem;
@property (readonly, nonatomic) TSCHChartReferenceLineLabelPaddingLayoutItem *refLineLabelPadding;
@property (readonly, nonatomic) TSCHChartReferenceLineLabelsLayoutItem *refLineLabels;
@property (retain, nonatomic) TSCHChartAxisID *referenceLineLabelAxisID;

- (id)axis;
- (void).cxx_destruct;
- (id)p_description;
- (struct CGSize { double x0; double x1; })calcMinSize;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calcOverhangRect;
- (id)initWithParent:(id)a0 axisPosition:(int)a1;
- (void)layoutInward;
- (void)layoutOutward;
- (void)p_layoutLabelsNow;
- (id)p_subselectionHaloPositionsForLabelsSelections:(id)a0;
- (id)p_subselectionKnobPositionsForLabelsSelection:(id)a0;
- (id)protected_layoutSpaceHalosForAllLabels;
- (id)protected_layoutSpaceKnobsForAllLabels;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })protected_layoutSpaceRectForAllLabels;
- (id)renderersWithRep:(id)a0;
- (id)subselectionHaloPositionsForSelections:(id)a0;
- (id)subselectionKnobPositionsForSelection:(id)a0;

@end
