@interface PIPhotoEditHelper : NSObject

+ (void)initialize;
+ (id)photosSchema;
+ (id)geometryRequestWithComposition:(id)a0;
+ (id)adjustmentConstants;
+ (BOOL)canInterpretDataWithFormatIdentifier:(id)a0 formatVersion:(id)a1;
+ (id)effectNameForFilterName:(id)a0;
+ (id)imageRenderRequestWithComposition:(id)a0 fillInSize:(struct CGSize { double x0; double x1; })a1 wideGamut:(BOOL)a2;
+ (id)imageRenderRequestWithComposition:(id)a0 fitInSize:(struct CGSize { double x0; double x1; })a1 wideGamut:(BOOL)a2;
+ (id)imageSourceWithCIImage:(id)a0 orientation:(long long)a1;
+ (id)imageSourceWithURL:(id)a0 type:(id)a1 proxyImage:(id)a2 orientation:(long long)a3 useEmbeddedPreview:(BOOL)a4;
+ (id)imageSourceWithURL:(id)a0 type:(id)a1 useEmbeddedPreview:(BOOL)a2;
+ (BOOL)is3DEffect:(id)a0;
+ (id)livePhotoSourceWithPhotoSource:(id)a0 videoSource:(id)a1;
+ (struct CGImage { } *)newCGImageFromBufferImage:(id)a0;
+ (id)newComposition;
+ (id)newCompositionControllerWithComposition:(id)a0;
+ (id)newImageRenderClientWithName:(id)a0;
+ (id)pipelineFiltersForCropping;
+ (id)pipelineFiltersForOriginalGeometry;
+ (id)validatedCompositionCopyForComposition:(id)a0 mediaType:(long long)a1;
+ (id)videoPropertiesRequestWithComposition:(id)a0;
+ (id)videoRenderRequestWithComposition:(id)a0 fitInSize:(struct CGSize { double x0; double x1; })a1;
+ (id)videoSourceWithURL:(id)a0;
+ (id)_imageRenderRequestWithComposition:(id)a0 wideGamut:(BOOL)a1;
+ (BOOL)areCPVAssetsEditable;
+ (id)assetIdentifierForURL:(id)a0 type:(id)a1 useEmbeddedPreview:(BOOL)a2;
+ (id)compositionByRemovingVideoAndLivePhotoAdjustments:(id)a0;
+ (id)filterNameForEffectName:(id)a0;
+ (id)geometryBasedAdjustmentIdentifiers;
+ (void)handlePIGlobalSettings:(id)a0;
+ (id)imagePropertiesRequestWithComposition:(id)a0;
+ (BOOL)isAVAssetEditable:(id)a0 reason:(long long *)a1;
+ (BOOL)isPortraitEffect:(id)a0;
+ (BOOL)isPortraitStageEffect:(id)a0;
+ (id)knownFormatsVersionsMap;
+ (id)newAdjustmentWithIdentifier:(id)a0;
+ (id)newAdjustmentWithName:(id)a0;
+ (id)pipelineFiltersForRAWShowingOriginalWithGeometry;
+ (id)pipelineFiltersForShowingOriginal;
+ (id)pipelineFiltersForShowingOriginalWithGeometry;
+ (void)preheatEditDependencies;
+ (id)priorityWithLevel:(long long)a0;
+ (id)rawAdjustmentWithRawImageProperties:(id)a0;
+ (id)updateCropAdjustmentController:(id)a0 after:(id)a1 error:(out id *)a2;

@end
