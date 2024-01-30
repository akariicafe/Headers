@interface LPHighlightGestureRecognizer : UIGestureRecognizer {
    struct CGPoint { double x; double y; } _startPointInWindowCoordinates;
}

- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (struct CGPoint { double x0; double x1; })_locationInWindow;
- (void)startHighlightIfPossible;
- (void)updateHighlight;
- (void)cancelHighlight;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;

@end
