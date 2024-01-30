@class _UIPageCurlState, NSMutableSet, UIView, NSNumber, NSMutableArray;

@interface _UIPageCurl : NSObject {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _contentRect;
    UIView *_contentView;
    _UIPageCurlState *_manualPageCurlState;
    NSMutableArray *_pendingStateQueue;
    NSMutableArray *_activeStateQueue;
    NSMutableSet *_completedStates;
    double _delayBetweenSuccessiveAnimations;
    double _pageDiagonalAngle;
    double _pageDiagonalLength;
}

@property (readonly, nonatomic) long long _spineLocation;
@property (readonly, nonatomic, getter=_isManualPageCurlInProgressAndUncommitted) BOOL _manualPageCurlInProgressAndUncommitted;
@property (readonly, nonatomic) NSNumber *_wrappedManualPageCurlDirection;
@property (nonatomic, setter=_setManualPageCurlMaxDAngle:) double _manualPageCurlMaxDAngle;

- (void)_enqueueCurlOfType:(long long)a0 fromLocation:(struct CGPoint { double x0; double x1; })a1 inDirection:(long long)a2 withView:(id)a3 revealingView:(id)a4 completion:(id /* block */)a5 finally:(id /* block */)a6;
- (double)_inputTimeForProgress:(double)a0 distanceToTravel:(double)a1 radius:(double *)a2 minRadius:(double)a3 angle:(double)a4 dAngle:(double)a5 touchLocation:(struct CGPoint { double x0; double x1; })a6 state:(id)a7;
- (double)_durationForManualCurlEndAnimationWithSuggestedVelocity:(double)a0 shouldComplete:(BOOL)a1;
- (void)_endManualCurlAtLocation:(struct CGPoint { double x0; double x1; })a0 withSuggestedVelocity:(double)a1 shouldComplete:(BOOL)a2;
- (void)_updateCurlFromState:(id)a0 withTime:(double)a1 radius:(double)a2 angle:(double)a3 addingAnimations:(id)a4;
- (void)_updatedInputsFromState:(id)a0 forLocation:(struct CGPoint { double x0; double x1; })a1 time:(double *)a2 radius:(double *)a3 angle:(double *)a4;
- (BOOL)_populateFromValue:(double *)a0 toValue:(double *)a1 fromState:(id)a2 forAnimationWithKeyPath:(id)a3;
- (void)_fromValue:(double *)a0 toValue:(double *)a1 fromState:(id)a2 forAnimationWithKeyPath:(id)a3;
- (id)_newAnimationForState:(id)a0 withKeyPath:(id)a1 duration:(double)a2 fromValue:(id)a3;
- (id)initWithSpineLocation:(long long)a0 andContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 inContentView:(id)a2;
- (BOOL)_isPreviousCurlCompatibleWithCurlOfType:(long long)a0 inDirection:(long long)a1;
- (void)_completeManualCurlAtLocation:(struct CGPoint { double x0; double x1; })a0 withSuggestedVelocity:(double)a1;
- (void)_abortManualCurlAtLocation:(struct CGPoint { double x0; double x1; })a0 withSuggestedVelocity:(double)a1;
- (void)_cancelTransitionWithState:(id)a0 invalidatingPageCurl:(BOOL)a1;
- (long long)_validatedPageCurlTypeForPageCurlType:(long long)a0 inDirection:(long long)a1;
- (void)_cancelAllActiveTransitionsAndAbandonCallbacks:(BOOL)a0;
- (struct CGPoint { double x0; double x1; })_referenceLocationForInitialLocation:(struct CGPoint { double x0; double x1; })a0 direction:(long long)a1;
- (void).cxx_destruct;
- (void)_setContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)_areAnimationsInFlightOrPending;
- (void)_updateManualCurlToLocation:(struct CGPoint { double x0; double x1; })a0;
- (id)_newCurlFilter;
- (void)_cleanupState:(id)a0;
- (void)_ensureCurlFilterOnLayer:(id)a0;
- (void)_pageCurlAnimationDidStop:(id)a0 withState:(id)a1;
- (id)_animationKeyPaths;
- (double)_distanceToTravelWithCurrentSpineLocation;
- (double)_baseAngleOffsetForState:(id)a0;
- (void)_beginCurlWithState:(id)a0 previousState:(id)a1;
- (void)_forceCleanupState:(id)a0 finished:(BOOL)a1 completed:(BOOL)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_pageViewFrame:(BOOL)a0;
- (void)dealloc;

@end
