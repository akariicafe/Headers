@interface _UIContentUnavailableWrapperScrollView : UIScrollView {
    BOOL _hasFlashedScrollIndicators;
}

- (void)setShowsVerticalScrollIndicator:(BOOL)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)_parentScrollView;
- (id)_effectiveBoundingPathAndBoundingPathView:(id *)a0;
- (id)init;
- (void)flashScrollIndicatorsIfNeeded;
- (void)_windowDidRotate:(id)a0;

@end
