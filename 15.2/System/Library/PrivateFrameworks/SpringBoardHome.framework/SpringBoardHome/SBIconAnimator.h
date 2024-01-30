@class SBFolderControllerAnimationContext, UIView, NSMutableArray, SBHIconAnimationSettings;
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
@property (retain, nonatomic) UIView *backgroundDarkeningView;
@property (readonly, nonatomic, getter=isAnimating) BOOL animating;
@property (readonly, nonatomic, getter=isPastPointOfNoReturn) BOOL pastPointOfNoReturn;

- (void)_animateToFraction:(double)a0 afterDelay:(double)a1 withSharedCompletion:(id /* block */)a2;
- (void)cleanup;
- (void)prepare;
- (void)_cleanupAnimation;
- (void).cxx_destruct;
- (unsigned long long)_numberOfSignificantAnimations;
- (id)initWithAnimationContainer:(id)a0;
- (void)dealloc;
- (void)_prepareAnimation;
- (void)_setAnimationFraction:(double)a0;
- (BOOL)_isDelayedForRotation;
- (id)centralAnimationFactory;
- (void)animateToFraction:(double)a0 afterDelay:(double)a1 withCompletion:(id /* block */)a2;
- (void)_windowFinishedRotating;
- (void)_invalidateCompletions;
- (void)_animateToFractionFromContext:(id)a0;
- (void)_animateToFractionFromPendingContexts;

@end
