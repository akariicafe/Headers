@protocol PUTilingViewControllerTransition;

@interface PUTileAnimator : NSObject

@property (readonly, weak, nonatomic) id<PUTilingViewControllerTransition> currentTransition;

- (void).cxx_destruct;
- (void)prepareTileControllerForAnimation:(id)a0 withInitialLayoutInfo:(id)a1;
- (void)updateAnimationForTileController:(id)a0 withRepositionedTargetLayoutInfo:(id)a1;
- (void)transitionWillBeginAnimation:(id)a0;
- (void)transitionDidBeginAnimation:(id)a0;
- (void)transition:(id)a0 didComplete:(BOOL)a1;
- (id)freezeTileController:(id)a0;
- (void)animateTileController:(id)a0 toLayoutInfo:(id)a1 withOptions:(id)a2 completionHandler:(id /* block */)a3;

@end
