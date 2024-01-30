@class PXBasicTileAnimationOptions, NSString, _PXWidgetCompositionUIViewElementTileTransitionContext, UIView;
@protocol PXWidget;

@interface PXWidgetCompositionUIViewElementTile : NSObject <PXWidgetContentViewTransitionCoordinator, PXUIViewBasicTile>

@property (readonly, nonatomic) UIView *_containerView;
@property (nonatomic, setter=_setDidEmbedContentView:) BOOL _didEmbedContentView;
@property (retain, nonatomic, setter=_setCurrentTransitionContext:) _PXWidgetCompositionUIViewElementTileTransitionContext *_currentTransitionContext;
@property (readonly, nonatomic) id<PXWidget> widget;
@property (readonly, nonatomic) PXBasicTileAnimationOptions *animationOptions;
@property (readonly, nonatomic) UIView *view;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)animateAlongsideTransition:(id /* block */)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)initWithWidget:(id)a0;
- (void)_embedContentView;
- (id)_willAnimateTileToGeometry:(struct PXTileGeometry { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGPoint { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x3; double x4; double x5; BOOL x6; struct CGSize { double x0; double x1; } x7; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x8; void *x9; })a0 withOptions:(id)a1;
- (void)_didAnimateTileWithContext:(id)a0;
- (void)_didCompleteTileAnimationWithContext:(id)a0;
- (void)didApplyGeometry:(struct PXTileGeometry { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGPoint { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x3; double x4; double x5; BOOL x6; struct CGSize { double x0; double x1; } x7; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x8; void *x9; })a0 withUserData:(id)a1;

@end
