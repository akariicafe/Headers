@interface CloudPhotoServices : NSObject <CPLDerivativeGenerator>

+ (void)initialize;
+ (void)_generateVideoDerivativeResourcesFromInputResource:(id)a0 withCPLAdjustments:(id)a1 destinationDirectory:(id)a2 derivativesFilter:(id)a3 recordChangeType:(unsigned long long)a4 includePosterFrame:(BOOL)a5 completionHandler:(id /* block */)a6;
+ (id)workQueue;
+ (void)generateDerivativeResourcesFromInputResource:(id)a0 withAdjustments:(id)a1 destinationDirectory:(id)a2 includePosterFrameForVideo:(BOOL)a3 completionHandler:(id /* block */)a4;
+ (id)_filenameForResourceWithItemScopedIdentifier:(id)a0 resourceType:(unsigned long long)a1 extension:(id)a2;
+ (id)_imageServiceClient;
+ (void)_createPosterFrameResourcesFromInputURL:(id)a0 withItemScopedIdentifier:(id)a1 includeDerivative:(id /* block */)a2 destinationDirectory:(id)a3 outputResources:(id)a4;
+ (long long)paMediaConversionColorSpaceForCloudPhotoDerivativeColorOutput:(long long)a0;
+ (BOOL)isMovieUTI:(id)a0;
+ (id)_extractVideoMetadataResourceFrom:(id)a0 destinationDirectory:(id)a1;
+ (BOOL)_shouldGenerateHDRMediumVideoDerivative;
+ (void)generateDerivativeResourcesFromInputResource:(id)a0 withAdjustments:(id)a1 destinationDirectory:(id)a2 derivativesFilter:(id)a3 recordChangeType:(unsigned long long)a4 includePosterFrameForVideo:(BOOL)a5 completionHandler:(id /* block */)a6;
+ (void)resizeImageAtURL:(id)a0 destinationURL:(id)a1 options:(id)a2 completionHandler:(id /* block */)a3;
+ (BOOL)canGenerateImageDerivativesFromUTI:(id)a0;
+ (void)_createDerivativeResourcesFromInputURL:(id)a0 resourceTypes:(id)a1 withItemScopedIdentifier:(id)a2 destinationDirectory:(id)a3 outputResources:(id)a4 convertToSRGB:(BOOL)a5;
+ (id)transcodeVideoAtURL:(id)a0 withAdjustments:(id)a1 destinationURL:(id)a2 options:(id)a3 reason:(id)a4 completionHandler:(id /* block */)a5;
+ (BOOL)isUnsupportedOriginalFormatError:(id)a0;
+ (void)generatePosterFrameForVideoAtURL:(id)a0 maximumPixelCount:(long long)a1 destinationURL:(id)a2 reason:(id)a3 completionHandler:(id /* block */)a4;
+ (id)derivativeImageResourceUniformTypeForResourceType:(unsigned long long)a0;
+ (void)_generateImageDerivativeResourcesFromInputResource:(id)a0 destinationDirectory:(id)a1 isAdjusted:(BOOL)a2 derivativesFilter:(id)a3 recordChangeType:(unsigned long long)a4 completionHandler:(id /* block */)a5;
+ (void)generateFullSizeJPEGIfNecessaryFromInputResource:(id)a0 destinationDirectory:(id)a1 completionHandler:(id /* block */)a2;
+ (id)_createCPLResourceFromURL:(id)a0 withResourceType:(unsigned long long)a1 uniformType:(id)a2 itemScopedIdentifier:(id)a3;
+ (BOOL)shouldGenerateVideoDerivativeForAVAsset:(id)a0 forResourceType:(unsigned long long)a1 adjusted:(BOOL)a2;
+ (unsigned long long)_bestImageResourceTypeForPixelCount:(long long)a0;
+ (void)resizeImageAtURL:(id)a0 destinationURL:(id)a1 maximumPixelCount:(long long)a2 bakeInOrientation:(BOOL)a3 colorOutput:(long long)a4 reason:(id)a5 completionHandler:(id /* block */)a6;
+ (id)generateGIFForVideoAtURL:(id)a0 destinationURL:(id)a1 completionHandler:(id /* block */)a2;
+ (id)_videoServiceClient;
+ (BOOL)_shouldGenerateLargeVideoDerivativeForAVAsset:(id)a0;
+ (BOOL)_createVideoResourcesFromInputURL:(id)a0 withItemScopedIdentifier:(id)a1 videoAdjustments:(id)a2 resourceType:(unsigned long long)a3 forIris:(BOOL)a4 destinationDirectory:(id)a5 outputResources:(id)a6 error:(id *)a7;

@end
