@class CAMSnapshotView, UIView;

@interface CFXViewfinderFlipTransition : NSObject

@property (weak, nonatomic) UIView *viewfinderView;
@property (retain, nonatomic, setter=_setFrontSnapshotView:) CAMSnapshotView *_frontSnapshotView;
@property (retain, nonatomic, setter=_setBackSnapshotView:) CAMSnapshotView *_backSnapshotView;
@property (retain, nonatomic, setter=_setTargetSnapshotView:) CAMSnapshotView *_targetSnapshotView;
@property (nonatomic, setter=_setCurrentAnimationID:) unsigned long long _currentAnimationID;

- (void).cxx_destruct;
- (void)performFlipTransitionWithDirection:(long long)a0 completionHandler:(id /* block */)a1;
- (void)_cleanupFromFlipTransition;
- (double)_frontSnapshotTargetRadiansForDirection:(long long)a0 fromRadians:(double)a1;
- (double)_backSnapshotTargetRadiansForDirection:(long long)a0 frontSnapshotRadians:(double)a1;
- (void)_getCurrentRadians:(out double *)a0 targetRadians:(out double *)a1 forDirection:(long long)a2 withAnimation:(id)a3 onFrontSnapshotLayer:(id)a4;
- (void)completeTransitionToLivePreviewWithCompletionHandler:(id /* block */)a0;
- (id)_snapshotFlipAnimationFromValue:(double)a0 toValue:(double)a1;
- (id)initWithViewfinderView:(id)a0;

@end
