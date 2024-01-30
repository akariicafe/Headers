@class NSSet;

@interface CCUIDismissalGestureRecognizer : UIPanGestureRecognizer {
    BOOL _triggered;
    NSSet *_currentTouches;
}

- (BOOL)canPreventGestureRecognizer:(id)a0;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (BOOL)canBePreventedByGestureRecognizer:(id)a0;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)_cancelOtherGestureRecognizersForTouches:(id)a0;
- (void).cxx_destruct;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)_tryToCancelTouches;
- (void)reset;

@end
