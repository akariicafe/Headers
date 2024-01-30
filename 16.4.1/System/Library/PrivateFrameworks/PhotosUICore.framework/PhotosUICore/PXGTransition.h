@class PXGLayout, NSSet;

@interface PXGTransition : NSObject

@property (readonly, nonatomic) PXGLayout *layout;
@property (readonly, nonatomic) BOOL invalid;
@property (readonly, nonatomic) BOOL animatingTowardsInitialState;
@property (readonly, nonatomic) BOOL animatingTowardsFinalState;
@property (readonly, copy, nonatomic) id /* block */ completionBlock;
@property (nonatomic) BOOL isIntercative;
@property (readonly, nonatomic) NSSet *animations;
@property (nonatomic) float fractionCompleted;

- (void)invalidate;
- (void).cxx_destruct;
- (void)animateToFinalStateWithCompletionBlock:(id /* block */)a0;
- (void)animateToInitialStateWithCompletionBlock:(id /* block */)a0;
- (id)initWithAnimations:(id)a0 layout:(id)a1;

@end
