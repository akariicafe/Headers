@interface _UIDynamicItemObservingBehavior : UIDynamicItemBehavior

@property (nonatomic) BOOL enabled;
@property (nonatomic) long long frameCount;
@property (nonatomic) struct CGVector { double dx; double dy; } targetVelocity;
@property (nonatomic) double completionHandlerInvocationDelay;
@property (copy, nonatomic) id /* block */ completionHandler;

- (void)cancel;
- (void).cxx_destruct;
- (void)willMoveToAnimator:(id)a0;

@end
