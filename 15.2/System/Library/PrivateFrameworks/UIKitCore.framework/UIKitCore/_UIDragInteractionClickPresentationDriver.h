@class NSSet, UIDelayedAction;

@interface _UIDragInteractionClickPresentationDriver : _UIDragInteractionDriver {
    NSSet *_touches;
    id /* block */ _itemIterator;
    id /* block */ _sessionHandler;
    id /* block */ _liftCompletion;
    UIDelayedAction *_delayedLift;
}

- (void)_performDelayedLift;
- (void)didTransitionToInactiveState;
- (void)didTransitionToBeginState;
- (void)beginLiftAtLocation:(struct CGPoint { double x0; double x1; })a0 useDefaultLiftAnimation:(BOOL)a1 delay:(double)a2 completion:(id /* block */)a3;
- (void)didTransitionToInflightState;
- (BOOL)isLifted;
- (void).cxx_destruct;
- (BOOL)canBeginLiftAtLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)cancel;
- (BOOL)isPreparingToDrag;
- (void)beginDragWithTouches:(id)a0 itemIterator:(id /* block */)a1 beginningSessionHandler:(id /* block */)a2;

@end
