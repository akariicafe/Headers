@class NSMutableArray, UIView;

@interface EKUIAvailabilityTimelineView : UIScrollView {
    NSMutableArray *_labels;
    UIView *_bottomPixelBorder;
    double _offset;
    double _largestLabelWidth;
}

- (void)setContentWidth:(double)a0;
- (void)setContentOffset:(struct CGPoint { double x0; double x1; })a0;
- (id)init;
- (double)minWidth;
- (void).cxx_destruct;
- (void)setHorizontalScrollOffset:(double)a0;
- (void)setLabels;

@end
