@class PFParallaxLayerStack, PFPosterConfiguration, PHAsset, NSURL, PFPosterDescriptor;
@protocol PISegmentationItem;

@interface PUParallaxLayerStackRadarController : NSObject <PXTapToRadarDiagnosticProvider>

@property (retain, nonatomic) PHAsset *asset;
@property (retain, nonatomic) PFParallaxLayerStack *layerStack;
@property (retain, nonatomic) id<PISegmentationItem> segmentationItem;
@property (readonly, nonatomic) PFPosterDescriptor *posterDescriptor;
@property (readonly, nonatomic) PFPosterConfiguration *posterConfiguration;
@property (readonly, nonatomic) NSURL *baseTemporaryURL;
@property (retain, nonatomic) NSURL *screenshotURL;

+ (void)loadLayerStackForAsset:(id)a0 completion:(id /* block */)a1;
+ (id)visualDiagnosticsActionForAsset:(id)a0 layerStack:(id)a1 segmentationItem:(id)a2 fromViewController:(id)a3 actionBeingHandler:(id /* block */)a4 actionEndHandler:(id /* block */)a5;
+ (id)visualDiagnosticsConfigurationForAsset:(id)a0 layerStack:(id)a1 segmentationItem:(id)a2;

- (void).cxx_destruct;
- (void)collectTapToRadarDiagnosticsIntoContainer:(id)a0;
- (id)initWithAsset:(id)a0 layerStack:(id)a1 segmentationItem:(id)a2 posterDescriptor:(id)a3 posterConfiguration:(id)a4;
- (void)saveDebugLayerStack:(id)a0 toFileName:(id)a1 item:(id)a2 completion:(id /* block */)a3;

@end
