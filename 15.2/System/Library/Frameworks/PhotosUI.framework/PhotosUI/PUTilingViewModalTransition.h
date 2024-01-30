@class NSString, PUTilingViewTransitionHelper;

@interface PUTilingViewModalTransition : PUModalTransition <PUTilingViewControllerTransition>

@property (readonly, nonatomic) PUTilingViewTransitionHelper *_tilingViewTransitionHelper;
@property (readonly, nonatomic) BOOL hasStarted;
@property (readonly, nonatomic, getter=isTransitionPaused) BOOL transitionPaused;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isInteractive;
- (void)resumeTransition:(BOOL)a0;
- (void)updatePausedTransitionWithProgress:(double)a0 interactionProgress:(double)a1;
- (void)pauseTransitionWithOptions:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)pauseTransition;
- (void)_animateTransitionWithOperation:(long long)a0;
- (void)animatePresentTransition;
- (void)animateDismissTransition;

@end
