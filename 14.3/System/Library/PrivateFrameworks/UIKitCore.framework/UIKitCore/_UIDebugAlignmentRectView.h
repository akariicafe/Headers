@interface _UIDebugAlignmentRectView : UIView {
    double _baselineOffset;
}

- (void)doesNotRecognizeSelector:(SEL)a0;
- (BOOL)isOpaque;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 baselineOffset:(double)a1;
- (id)_alignmentDebuggingOverlayCreateIfNecessary:(BOOL)a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
