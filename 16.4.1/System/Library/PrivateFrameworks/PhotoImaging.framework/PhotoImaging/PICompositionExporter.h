@protocol PICompositionExporterMetadataConverter;

@interface PICompositionExporter : NSObject

@property (class, retain) id<PICompositionExporterMetadataConverter> metadataConverter;

+ (id)resetImageProperties:(id)a0 preserveRegions:(BOOL)a1;
+ (BOOL)_lowMemoryModeSupportedForComposition:(id)a0;

- (id)init;
- (void)exportImageToDataWithComposition:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (id)exportVideoToURL:(id)a0 composition:(id)a1 options:(id)a2 completion:(id /* block */)a3;
- (void)_exportVideoToURL:(id)a0 composition:(id)a1 options:(id)a2 properties:(id)a3 progress:(id)a4 completion:(id /* block */)a5;
- (id)addImageProperties:(id)a0 composition:(id)a1 options:(id)a2 error:(id *)a3;
- (id)addVideoProperties:(id)a0 composition:(id)a1 options:(id)a2 error:(id *)a3;
- (id)exportComposition:(id)a0 options:(id)a1 completionQueue:(id)a2 completion:(id /* block */)a3;
- (id)exportComposition:(id)a0 toPrimaryURL:(id)a1 videoComplementURL:(id)a2 videoPosterFrameURL:(id)a3 priority:(id)a4 completionQueue:(id)a5 completion:(id /* block */)a6;
- (void)exportImageToURL:(id)a0 composition:(id)a1 options:(id)a2 completion:(id /* block */)a3;
- (void)prepareAuxiliaryImagesFetchProperties:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (void)prepareImageExportRequest:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (id)variationForFlavor:(id)a0;

@end
