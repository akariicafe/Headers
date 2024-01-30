@class UIScrollView;

@interface TSKHorizontalDragRecognizer : UIGestureRecognizer {
    struct CGPoint { double x; double y; } mStartPoint;
}

@property (nonatomic) UIScrollView *containingScrollView;

- (BOOL)canBePreventedByGestureRecognizer:(id)a0;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;

@end
