@class SBValueConvergenceAnimator, SBFolderControllerAnimationContext, UIView, NSMutableArray, SBHIconAnimationSettings;
@protocol SBIconAnimatorDelegate, SBIconAnimationContaining;

@interface SBIconAnimator : NSObject {
    double _fraction;
    BOOL _startAnimationAfterRotationEnds;
    BOOL _windowIsRotating;
    BOOL _cleanedUp;
    unsigned long long _animationCount;
    NSMutableArray *_pendedAnimationContexts;
    SBFolderControllerAnimationContext *_animationContext;
}

@property (readonly, nonatomic) id<SBIconAnimationContaining> animationContainer;
@property (readonly, nonatomic) UIView *referenceView;
@property (nonatomic) BOOL invalidated;
@property (weak, nonatomic) id<SBIconAnimatorDelegate> delegate;
@property (retain, nonatomic) SBHIconAnimationSettings *settings;
@property (nonatomic) double fraction;
@property (nonatomic) double hintFraction;
@property (retain, nonatomic) SBValueConvergenceAnimator *hintAnimator;
@property (retain, nonatomic) UIView *backgroundDarkeningView;
@property (readonly, nonatomic, getter=isAnimating) BOOL animating;
@property (readonly, nonatomic, getter=isPastPointOfNoReturn) BOOL pastPointOfNoReturn;

- (void)_prepareAnimation;
- (void)prepare;
- (void)_invalidateCompletions;
- (void)_cleanupAnimation;
- (void).cxx_destruct;
- (void)cleanup;
- (void)animateToFraction:(double)a0 afterDelay:(double)a1 withCompletion:(id /* block */)a2;
- (void)dealloc;
- (void)_animateToFraction:(double)a0 afterDelay:(double)a1 withSharedCompletion:(id /* block */)a2;
- (void)_windowFinishedRotating;
- (void)_setAnimationFraction:(double)a0;
- (void)hintToFraction:(double)a0;
- (BOOL)_isDelayedForRotation;
- (id)initWithAnimationContainer:(id)a0;
- (void)_animateToFractionFromPendingContexts;
- (void)_animateToFractionFromContext:(id)a0;
- (id)centralAnimationFactory;
- (unsigned long long)_numberOfSignificantAnimations;

@end
