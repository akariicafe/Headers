@class NUImageGeometry, NSString, NUImageLayer, CALayer, _NUContainerLayer;

@interface NURenderView : UIView <CAAnimationDelegate> {
    NUImageLayer *_backfillLayer;
    NUImageLayer *_roiLayer;
    _NUContainerLayer *_containerLayer;
    NUImageGeometry *_geometry;
    BOOL _transitionAnimationInFlight;
    BOOL _shouldRemoveAnimation;
    CALayer *_geometryAnimationLayer;
}

@property (nonatomic) BOOL debugMode;
@property (retain, nonatomic) NUImageGeometry *geometry;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)inLiveResize;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void).cxx_destruct;
- (void)willMoveToWindow:(id)a0;
- (id)_containerLayer;
- (void)animationDidStart:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRectToImage:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_backfillLayer;
- (id)_roiLayer;
- (void)renderFrameReachedTargetSize;
- (void)transitionToSize:(struct CGSize { double x0; double x1; })a0 duration:(double)a1 animationCurve:(id)a2 completion:(id /* block */)a3;
- (void)transitionToSize:(struct CGSize { double x0; double x1; })a0 offset:(struct CGPoint { double x0; double x1; })a1 duration:(double)a2 animationCurve:(id)a3 completion:(id /* block */)a4;

@end
