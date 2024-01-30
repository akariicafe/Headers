@interface PIPhotoEditHelper : NSObject

+ (void)initialize;
+ (id)adjustmentConstants;
+ (id)imageSourceWithURL:(id)a0 type:(id)a1 useEmbeddedPreview:(BOOL)a2;
+ (id)imageSourceWithCIImage:(id)a0 orientation:(long long)a1;
+ (id)imageSourceWithURL:(id)a0 type:(id)a1 proxyImage:(id)a2 orientation:(long long)a3 useEmbeddedPreview:(BOOL)a4;
+ (id)videoSourceWithURL:(id)a0;
+ (id)livePhotoSourceWithPhotoSource:(id)a0 videoSource:(id)a1;
+ (BOOL)canInterpretDataWithFormatIdentifier:(id)a0 formatVersion:(id)a1;
+ (id)photosSchema;
+ (BOOL)is3DEffect:(id)a0;
+ (BOOL)isAVAssetEditable:(id)a0;
+ (id)videoRenderRequestWithComposition:(id)a0 fitInSize:(struct CGSize { double x0; double x1; })a1;
+ (struct CGImage { } *)newCGImageFromBufferImage:(id)a0;
+ (id)effectNameForFilterName:(id)a0;
+ (id)pipelineFiltersForOriginalGeometry;
+ (id)geometryRequestWithComposition:(id)a0;
+ (id)pipelineFiltersForCropping;
+ (id)imageRenderRequestWithComposition:(id)a0 fitInSize:(struct CGSize { double x0; double x1; })a1 wideGamut:(BOOL)a2;
+ (id)imageRenderRequestWithComposition:(id)a0 fillInSize:(struct CGSize { double x0; double x1; })a1 wideGamut:(BOOL)a2;
+ (id)newImageRenderClientWithName:(id)a0;
+ (id)videoPropertiesRequestWithComposition:(id)a0;
+ (id)newCompositionControllerWithComposition:(id)a0;
+ (id)newComposition;
+ (id)validatedCompositionCopyForComposition:(id)a0 mediaType:(long long)a1;
+ (id)rawAdjustmentWithRawImageProperties:(id)a0;
+ (id)imagePropertiesRequestWithComposition:(id)a0;
+ (id)pipelineFiltersForShowingOriginalWithGeometry;
+ (id)pipelineFiltersForRAWShowingOriginalWithGeometry;
+ (void)preheatEditDependencies;
+ (id)updateCropAdjustmentController:(id)a0 after:(id)a1 error:(out id *)a2;
+ (id)assetIdentifierForURL:(id)a0 type:(id)a1 useEmbeddedPreview:(BOOL)a2;
+ (id)compositionByRemovingVideoAndLivePhotoAdjustments:(id)a0;
+ (id)newAdjustmentWithName:(id)a0;
+ (id)newAdjustmentWithIdentifier:(id)a0;
+ (id)_imageRenderRequestWithComposition:(id)a0 wideGamut:(BOOL)a1;
+ (id)priorityWithLevel:(long long)a0;
+ (BOOL)isPortraitEffect:(id)a0;
+ (BOOL)isPortraitStageEffect:(id)a0;
+ (BOOL)areCPVAssetsEditable;
+ (id)filterNameForEffectName:(id)a0;
+ (id)pipelineFiltersForShowingOriginal;
+ (void)handlePIGlobalSettings:(id)a0;
+ (id)knownFormatsVersionsMap;

@end
