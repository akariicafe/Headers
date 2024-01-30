@class PXZoomablePhotosInteraction, NSString, PXPhotosViewModel, PXPhotosContentController;
@protocol PXPhotosViewInteractionDelegate;

@interface PXPhotosViewInteraction : PXGInteraction <PXZoomablePhotosInteractionDelegate>

@property (readonly, nonatomic) PXPhotosViewModel *viewModel;
@property (weak, nonatomic) id<PXPhotosViewInteractionDelegate> delegate;
@property (weak, nonatomic) PXPhotosContentController *contentController;
@property (retain, nonatomic) PXZoomablePhotosInteraction *zoomablePhotosInteraction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)interactionWithViewModel:(id)a0;

- (id)initWithViewModel:(id)a0;
- (void)zoomablePhotosInteractionWillBegin:(id)a0;
- (id)zoomablePhotosInteraction:(id)a0 assetReferenceAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (id)regionOfInterestForAssetReference:(id)a0 image:(struct CGImage **)a1 fallbackMediaProvider:(id)a2 shouldSnapshot:(BOOL)a3;
- (BOOL)zoomablePhotosInteractionShouldBegin:(id)a0;
- (void).cxx_destruct;
- (id)assetHitTestResultAtPoint:(struct CGPoint { double x0; double x1; })a0 coordinateSpace:(id)a1;
- (id)assetReferenceAtLocation:(struct CGPoint { double x0; double x1; })a0 withPadding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1 inCoordinateSpace:(id)a2;

@end
