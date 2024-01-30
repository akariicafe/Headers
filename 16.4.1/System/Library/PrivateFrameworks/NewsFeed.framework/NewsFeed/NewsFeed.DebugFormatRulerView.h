@interface NewsFeed.DebugFormatRulerView : UIView {
    void /* unknown type, empty encoding */ scale;
    void /* unknown type, empty encoding */ contentSize;
    void /* unknown type, empty encoding */ contentBounds;
    void /* unknown type, empty encoding */ canvasOffset;
    void /* unknown type, empty encoding */ selectionFrame;
    void /* unknown type, empty encoding */ metricSelectionFrame;
    void /* unknown type, empty encoding */ rulersHidden;
    void /* unknown type, empty encoding */ rulerSize;
    void /* unknown type, empty encoding */ verticalRulerEdgeView;
    void /* unknown type, empty encoding */ horizontalRulerEdgeView;
    void /* unknown type, empty encoding */ gridView;
    void /* unknown type, empty encoding */ cornerView;
    void /* unknown type, empty encoding */ borderLayer;
}

- (id)initWithCoder:(id)a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;

@end
