@class NURenderContext, NUPriority, NSDictionary, NUBufferRenderClient, PICompositionController, NUComposition, PLEditSource;

@interface PLPhotoEditRenderer : NSObject {
    NSDictionary *__smartToneAdjustments;
    double _smartToneLevelInCachedAdjustments;
    NSDictionary *_smartToneStatisticsInCachedAdjustments;
    NSDictionary *__smartColorAdjustments;
    double _smartColorLevelInCachedAdjustments;
    NSDictionary *_smartColorStatisticsInCachedAdjustments;
    NSDictionary *__smartBWAdjustments;
    double _smartBWLevelInCachedAdjustments;
    NUPriority *_priority;
    NUBufferRenderClient *_renderClient;
    NURenderContext *_videoRenderContext;
    NURenderContext *_geometryContext;
    NURenderContext *_smartToneAutoCalculatorContext;
}

@property (readonly, retain, nonatomic) NUComposition *composition;
@property (readonly, retain, nonatomic) PLEditSource *editSource;
@property (retain, nonatomic) PLEditSource *overcaptureEditSource;
@property (retain, nonatomic) PICompositionController *compositionController;
@property (nonatomic) long long smartFiltersCubeSize;
@property (readonly, nonatomic) double smartToneBaseBrightness;
@property (readonly, nonatomic) double smartToneBaseContrast;
@property (readonly, nonatomic) double smartToneBaseExposure;
@property (readonly, nonatomic) double smartToneBaseHighlights;
@property (readonly, nonatomic) double smartToneBaseShadows;
@property (readonly, nonatomic) double smartToneBaseBlackPoint;
@property (readonly, nonatomic) double smartToneBaseLocalLight;
@property (readonly, nonatomic) double smartColorBaseContrast;
@property (readonly, nonatomic) double smartColorBaseSaturation;
@property (readonly, nonatomic) double smartColorBaseCast;
@property (readonly, nonatomic) double smartBWBaseStrength;
@property (readonly, nonatomic) double smartBWBaseNeutralGamma;
@property (readonly, nonatomic) double smartBWBaseTone;
@property (readonly, nonatomic) double smartBWBaseHue;
@property (readonly, nonatomic) double smartBWBaseGrain;

+ (id)rendererForVideoURL:(id)a0 overcaptureVideoURL:(id)a1 livePhotoStillURL:(id)a2 adjustmentData:(id)a3 formatIdentifier:(id)a4 formatVersion:(id)a5;
+ (id)compositionWithController:(id)a0 source:(id)a1;
+ (id)compositionWithController:(id)a0 source:(id)a1 overcaptureSource:(id)a2;
+ (void)configureNeutrinoCacheDirectoryIfNeeded;
+ (BOOL)currentDeviceShouldAllowLocalLight;
+ (id)newImageDataFromCGImage:(struct CGImage { } *)a0 withCompressionQuality:(double)a1 metadataSourceImageURL:(id)a2 preserveRegionsInMetadata:(BOOL)a3;
+ (void)updateComposition:(id)a0 fromPortraitMetadata:(id)a1;
+ (void)updateCompositionController:(id)a0 fromPortraitMetadata:(id)a1;

- (void).cxx_destruct;
- (void)cancelAllRenders;
- (void)renderVideoWithTargetSize:(struct CGSize { double x0; double x1; })a0 name:(id)a1 completion:(id /* block */)a2;
- (id)_smartBWAdjustments;
- (double)_smartBWLevelWithAttributeKey:(id)a0 settingKey:(id)a1;
- (id)_smartColorAdjustments;
- (double)_smartColorLevelWithAttributeKey:(id)a0 settingKey:(id)a1;
- (id)_smartToneAdjustments;
- (double)_smartToneLevelWithAttributeKey:(id)a0 settingKey:(id)a1;
- (void)applySourceChangesToComposition:(id)a0 source:(id)a1 withBlock:(id /* block */)a2 executeSynchronously:(BOOL)a3 completionBlock:(id /* block */)a4;
- (void)applySourceChangesToCompositionAsynchronously:(id)a0 source:(id)a1 withBlock:(id /* block */)a2 completionBlock:(id /* block */)a3;
- (void)applySourceChangesToCompositionSynchronously:(id)a0 source:(id)a1 withBlock:(id /* block */)a2;
- (void)calculateLongExposureFusionParametersWithCompletionHandler:(id /* block */)a0;
- (id)exportVideoToURL:(id)a0 preset:(id)a1 livePhotoPairingIdentifier:(id)a2 completion:(id /* block */)a3;
- (void)generateJPEGImageDataWithCompressionQuality:(double)a0 livePhotoPairingIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (id)getGeometryForComposition:(id)a0;
- (id)getGeometryForComposition:(id)a0 pipelineFilters:(id)a1;
- (id)initWithEditSource:(id)a0 overcaptureEditSource:(id)a1;
- (id)initWithEditSource:(id)a0 overcaptureEditSource:(id)a1 renderPriority:(long long)a2;
- (id)newExporter;
- (id)newImageExporterOptions;
- (id)newVideoExporterOptions;
- (void)renderImageWithTargetSize:(struct CGSize { double x0; double x1; })a0 contentMode:(long long)a1 name:(id)a2 completion:(id /* block */)a3;
- (void)renderImageWithTargetSize:(struct CGSize { double x0; double x1; })a0 contentMode:(long long)a1 renderMode:(long long)a2 name:(id)a3 completion:(id /* block */)a4;
- (void)renderImageWithTargetSize:(struct CGSize { double x0; double x1; })a0 contentMode:(long long)a1 renderMode:(long long)a2 renderTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3 name:(id)a4 completion:(id /* block */)a5;
- (void)renderVideoWithTargetSize:(struct CGSize { double x0; double x1; })a0 contentMode:(long long)a1 name:(id)a2 completion:(id /* block */)a3;

@end
