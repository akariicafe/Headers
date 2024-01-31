@class NSMutableSet;

@interface AVUserInteractionObserverGestureRecognizer : UIGestureRecognizer {
    NSMutableSet *_trackedTouches;
}

- (BOOL)canPreventGestureRecognizer:(id)a0;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (BOOL)canBePreventedByGestureRecognizer:(id)a0;
- (void)_touchesEndedOrCancelled:(id)a0;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (BOOL)shouldRequireFailureOfGestureRecognizer:(id)a0;
- (void)touchesEstimatedPropertiesUpdated:(id)a0;
- (void).cxx_destruct;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (BOOL)shouldBeRequiredToFailByGestureRecognizer:(id)a0;

@end
