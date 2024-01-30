@class NSArray, NSMutableArray;

@interface SKUIInteractiveSegmentedControl : UIControl {
    NSMutableArray *_dividerViews;
}

@property (copy, nonatomic) id /* block */ dividerCreationBlock;
@property (nonatomic) double dividerWidth;
@property (copy, nonatomic) NSArray *segments;
@property (nonatomic) double selectionProgress;

- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_unregisterForObservationOfSegment:(id)a0;
- (id)_createDividerViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (long long)selectedSegmentIndexForSelectionProgress:(double)a0;
- (double)relativeSelectionProgressForSelectionProgress:(double)a0 segmentIndex:(long long)a1;
- (void)_registerForObservationOfSegment:(id)a0;
- (double)selectionProgressForRelativeSectionProgress:(double)a0 segmentIndex:(long long)a1;
- (BOOL)_setSelectionProgress:(double)a0;
- (void)_applySelectionProgressToSegments;
- (void)_notifyClientsOfSelectionProgressChange;
- (double)selectionProgressForSelectedSegmentAtIndex:(long long)a0;
- (void)_segmentControlTouchUpInsideAction:(id)a0;

@end
