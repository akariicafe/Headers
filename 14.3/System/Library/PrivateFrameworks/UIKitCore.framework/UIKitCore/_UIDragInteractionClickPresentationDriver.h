@class NSSet, UIDelayedAction;

@interface _UIDragInteractionClickPresentationDriver : _UIDragInteractionDriver {
    NSSet *_touches;
    id /* block */ _itemIterator;
    id /* block */ _sessionHandler;
    id /* block */ _liftCompletion;
    UIDelayedAction *_delayedLift;
}

- (void)cancel;
- (void)didTransitionToInactiveState;
- (void)didTransitionToBeginState;
- (void)didTransitionToInflightState;
- (void).cxx_destruct;
- (BOOL)isPreparingToDrag;
- (void)beginLiftAtLocation:(struct CGPoint { double x0; double x1; })a0 useDefaultLiftAnimation:(BOOL)a1 delay:(double)a2 completion:(id /* block */)a3;
- (BOOL)canBeginLiftAtLocation:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)isLifted;
- (void)_performDelayedLift;
- (void)beginDragWithTouches:(id)a0 itemIterator:(id /* block */)a1 beginningSessionHandler:(id /* block */)a2;

@end
