@interface _UIKeyboardAsyncTextSelectionController : _UIKeyboardTextSelectionController {
    BOOL _shouldDelayShowSelectionCommands;
}

- (void)showSelectionCommands;
- (void)beginFloatingCursorAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)selectTextWithGranularity:(long long)a0 atPoint:(struct CGPoint { double x0; double x1; })a1 completionHandler:(id /* block */)a2;
- (void)updateFloatingCursorAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)selectPositionAtPoint:(struct CGPoint { double x0; double x1; })a0 completionHandler:(id /* block */)a1;
- (void)endFloatingCursor;
- (void)updateSelectionWithExtentPoint:(struct CGPoint { double x0; double x1; })a0 withBoundary:(long long)a1 executionContext:(id)a2;
- (void)updateSelectionWithExtentAtBoundary:(long long)a0 inDirection:(long long)a1 executionContext:(id)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })caretRectForLeftmostSelectedPosition;
- (BOOL)shouldAllowSelectionGestureWithTouchType:(long long)a0 atPoint:(struct CGPoint { double x0; double x1; })a1 toProgressToState:(long long)a2;
- (void)showSelectionView;
- (void)setRangedSelectionShouldShowGrabbers:(BOOL)a0;
- (void)updateSelectionWithExtentPoint:(struct CGPoint { double x0; double x1; })a0 executionContext:(id)a1;
- (void)selectPositionAtPoint:(struct CGPoint { double x0; double x1; })a0 executionContext:(id)a1;
- (void)beginSelectionWithBaseAtSelectionBoundaryInDirection:(long long)a0 initialExtentPoint:(struct CGPoint { double x0; double x1; })a1 executionContext:(id)a2;
- (void)selectPositionAtPoint:(struct CGPoint { double x0; double x1; })a0 granularity:(long long)a1 completionHandler:(id /* block */)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })caretRectForRightmostSelectedPosition;
- (void)selectTextWithGranularity:(long long)a0 atPoint:(struct CGPoint { double x0; double x1; })a1 executionContext:(id)a2;
- (void)selectPositionAtBoundary:(long long)a0 inDirection:(long long)a1 relativeToSelection:(id)a2 executionContext:(id)a3;
- (BOOL)cursorPositionIsContainedByRange:(id)a0;
- (void)modifySelectionWithExtentPoint:(struct CGPoint { double x0; double x1; })a0 executionContext:(id)a1;

@end
