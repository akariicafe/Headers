@class NSMutableSet;

@interface AVUserInteractionObserverGestureRecognizer : UIGestureRecognizer {
    NSMutableSet *_trackedTouches;
}

- (BOOL)canBePreventedByGestureRecognizer:(id)a0;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void).cxx_destruct;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (BOOL)shouldRequireFailureOfGestureRecognizer:(id)a0;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (BOOL)canPreventGestureRecognizer:(id)a0;
- (void)touchesEstimatedPropertiesUpdated:(id)a0;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)_touchesEndedOrCancelled:(id)a0;
- (BOOL)shouldBeRequiredToFailByGestureRecognizer:(id)a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;

@end
