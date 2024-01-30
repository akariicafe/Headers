@class PUAssetTransitionInfo, PXAction, UIView;

@interface PUOneUpAssetTransitionContext : NSObject

@property (retain, nonatomic, setter=_setContainerView:) UIView *containerView;
@property (retain, nonatomic, setter=_setFromView:) UIView *fromView;
@property (retain, nonatomic, setter=_setSnapshotView:) UIView *snapshotView;
@property (nonatomic, setter=_setShouldHideBackground:) BOOL shouldHideBackground;
@property (retain, nonatomic, setter=_setTransitionInfo:) PUAssetTransitionInfo *transitionInfo;
@property (retain, nonatomic, setter=_setTrailingAssetTransitionInfo:) PUAssetTransitionInfo *trailingAssetTransitionInfo;
@property (retain, nonatomic, setter=_setLeadingAssetTransitionInfo:) PUAssetTransitionInfo *leadingAssetTransitionInfo;
@property (copy, nonatomic, setter=_setAnimationBlock:) id /* block */ animationBlock;
@property (retain, nonatomic) PXAction *executedAction;

+ (id)oneUpAssetTransitionContextWithContainerView:(id)a0 fromView:(id)a1 snapshotView:(id)a2 transitionInfo:(id)a3;
+ (id)oneUpAssetTransitionContextWithContainerView:(id)a0 fromView:(id)a1 snapshotView:(id)a2 transitionInfo:(id)a3 trailingAssetTransitionInfo:(id)a4 leadingAssetTransitionInfo:(id)a5;

- (void).cxx_destruct;
- (id)oneUpTransitionContextWithAnimationBlock:(id /* block */)a0;
- (id)oneUpTransitionContextWithContextShouldHideBackground:(BOOL)a0;
- (id)oneUpTransitionContextWithContextWithContainerView:(id)a0;

@end
