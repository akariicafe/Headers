@class UILabel, _UIScrollViewFPSHUDGraphView;

@interface _UIScrollViewFPSHUD : UIView {
    UILabel *_preferredLabel;
    UILabel *_reportedLabel;
    UILabel *_mismatchesLabel;
    _UIScrollViewFPSHUDGraphView *_preferredGraph;
    _UIScrollViewFPSHUDGraphView *_reportedGraph;
    _UIScrollViewFPSHUDGraphView *_mismatchesGraph;
    unsigned int _previousFramePreferred;
}

- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
