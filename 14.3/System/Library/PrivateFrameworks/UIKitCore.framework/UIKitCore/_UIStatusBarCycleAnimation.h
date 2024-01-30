@class NSArray, NSString, _UIStatusBarCycleLayerAnimation, NSMutableArray;

@interface _UIStatusBarCycleAnimation : NSObject <CAAnimationDelegate, _UIStatusBarPersistentAnimation>

@property (nonatomic) BOOL visible;
@property (readonly, nonatomic) _UIStatusBarCycleLayerAnimation *mainLayerAnimation;
@property (retain, nonatomic) NSMutableArray *completionHandlers;
@property (readonly, nonatomic) NSArray *layerAnimations;
@property (readonly, nonatomic) long long state;
@property (nonatomic) BOOL stopsAfterReversing;
@property (retain, nonatomic) NSArray *stoppingLayerAnimations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void).cxx_destruct;
- (void)_sendCompletionsWithFinished:(BOOL)a0;
- (void)dealloc;
- (id)initWithLayerAnimations:(id)a0;
- (void)_stopAnimations;
- (void)start;
- (void)pausePersistentAnimation;
- (void)stopWithCompletionHandler:(id /* block */)a0;
- (void)resumePersistentAnimation;
- (void)_stopStoppingAnimations;
- (void)_startAnimations;

@end
