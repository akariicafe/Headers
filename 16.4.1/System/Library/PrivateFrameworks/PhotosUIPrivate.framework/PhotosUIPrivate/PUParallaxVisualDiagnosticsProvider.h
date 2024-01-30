@class PHAsset, PFParallaxLayerStack;
@protocol PISegmentationItem;

@interface PUParallaxVisualDiagnosticsProvider : NSObject <PXVisualDiagnosticsProvider>

@property (retain, nonatomic) PHAsset *asset;
@property (retain, nonatomic) PFParallaxLayerStack *layerStack;
@property (retain, nonatomic) id<PISegmentationItem> segmentationItem;

- (void).cxx_destruct;
- (void)_addCoverPage:(id)a0;
- (void)addVisualDiagnosticsToContext:(id)a0 completionHandler:(id /* block */)a1;
- (void)_addSegmentationItemProperties:(id)a0;
- (void)_addLayerStack:(id)a0;
- (void)_addImagingGatingScores:(id)a0;
- (void)_addLayerStackProperties:(id)a0;
- (void)_addLayersTable:(id)a0;
- (void)_drawLayer:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 context:(id)a2;

@end
