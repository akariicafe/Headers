@class AVCaptureResolvedPhotoSettingsInternal;

@interface AVCaptureResolvedPhotoSettings : NSObject {
    AVCaptureResolvedPhotoSettingsInternal *_internal;
}

@property (readonly) long long uniqueID;
@property (readonly) struct { int x0; int x1; } photoDimensions;
@property (readonly) struct { int x0; int x1; } rawPhotoDimensions;
@property (readonly) struct { int x0; int x1; } previewDimensions;
@property (readonly) struct { int x0; int x1; } embeddedThumbnailDimensions;
@property (readonly) struct { int x0; int x1; } rawEmbeddedThumbnailDimensions;
@property (readonly) struct { int x0; int x1; } portraitEffectsMatteDimensions;
@property (readonly) struct { int x0; int x1; } livePhotoMovieDimensions;
@property (readonly, getter=isFlashEnabled) BOOL flashEnabled;
@property (readonly, getter=isRedEyeReductionEnabled) BOOL redEyeReductionEnabled;
@property (readonly, getter=isStillImageStabilizationEnabled) BOOL stillImageStabilizationEnabled;
@property (readonly, getter=isVirtualDeviceFusionEnabled) BOOL virtualDeviceFusionEnabled;
@property (readonly, getter=isDualCameraFusionEnabled) BOOL dualCameraFusionEnabled;
@property (readonly) unsigned long long expectedPhotoCount;
@property (readonly) struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } photoProcessingTimeRange;
@property (readonly, getter=isContentAwareDistortionCorrectionEnabled) BOOL contentAwareDistortionCorrectionEnabled;

+ (void)initialize;
+ (id)resolvedSettingsWithUniqueID:(long long)a0 photoDimensions:(struct { int x0; int x1; })a1 rawPhotoDimensions:(struct { int x0; int x1; })a2 previewDimensions:(struct { int x0; int x1; })a3 embeddedThumbnailDimensions:(struct { int x0; int x1; })a4 rawEmbeddedThumbnailDimensions:(struct { int x0; int x1; })a5 livePhotoMovieEnabled:(BOOL)a6 livePhotoMovieDimensions:(struct { int x0; int x1; })a7 portraitEffectsMatteDimensions:(struct { int x0; int x1; })a8 hairSegmentationMatteDimensions:(struct { int x0; int x1; })a9 skinSegmentationMatteDimensions:(struct { int x0; int x1; })a10 teethSegmentationMatteDimensions:(struct { int x0; int x1; })a11 glassesSegmentationMatteDimensions:(struct { int x0; int x1; })a12 spatialOverCapturePhotoDimensions:(struct { int x0; int x1; })a13 turboModeEnabled:(BOOL)a14 flashEnabled:(BOOL)a15 redEyeReductionEnabled:(BOOL)a16 HDREnabled:(BOOL)a17 adjustedPhotoFiltersEnabled:(BOOL)a18 EV0PhotoDeliveryEnabled:(BOOL)a19 stillImageStabilizationEnabled:(BOOL)a20 virtualDeviceFusionEnabled:(BOOL)a21 squareCropEnabled:(BOOL)a22 deferredPhotoProxyDimensions:(struct { int x0; int x1; })a23 photoProcessingTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a24 contentAwareDistortionCorrectionEnabled:(BOOL)a25 photoManifest:(id)a26 digitalFlashUserInterfaceHints:(unsigned long long)a27 digitalFlashUserInterfaceRGBEstimate:(id)a28 captureBeforeResolvingSettingsEnabled:(BOOL)a29;

- (BOOL)isCaptureBeforeResolvingSettingsEnabled;
- (BOOL)isHDREnabled;
- (struct { int x0; int x1; })deferredPhotoProxyDimensions;
- (id)photoManifest;
- (id)debugDescription;
- (void)dealloc;
- (id)description;
- (id)_initWithUniqueID:(long long)a0 photoDimensions:(struct { int x0; int x1; })a1 rawPhotoDimensions:(struct { int x0; int x1; })a2 previewDimensions:(struct { int x0; int x1; })a3 embeddedThumbnailDimensions:(struct { int x0; int x1; })a4 rawEmbeddedThumbnailDimensions:(struct { int x0; int x1; })a5 livePhotoMovieEnabled:(BOOL)a6 livePhotoMovieDimensions:(struct { int x0; int x1; })a7 portraitEffectsMatteDimensions:(struct { int x0; int x1; })a8 hairSegmentationMatteDimensions:(struct { int x0; int x1; })a9 skinSegmentationMatteDimensions:(struct { int x0; int x1; })a10 teethSegmentationMatteDimensions:(struct { int x0; int x1; })a11 glassesSegmentationMatteDimensions:(struct { int x0; int x1; })a12 spatialOverCapturePhotoDimensions:(struct { int x0; int x1; })a13 turboModeEnabled:(BOOL)a14 flashEnabled:(BOOL)a15 redEyeReductionEnabled:(BOOL)a16 HDREnabled:(BOOL)a17 adjustedPhotoFiltersEnabled:(BOOL)a18 EV0PhotoDeliveryEnabled:(BOOL)a19 stillImageStabilizationEnabled:(BOOL)a20 virtualDeviceFusionEnabled:(BOOL)a21 squareCropEnabled:(BOOL)a22 deferredPhotoProxyDimensions:(struct { int x0; int x1; })a23 photoProcessingTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a24 contentAwareDistortionCorrectionEnabled:(BOOL)a25 photoManifest:(id)a26 digitalFlashUserInterfaceHints:(unsigned long long)a27 digitalFlashUserInterfaceRGBEstimate:(id)a28 captureBeforeResolvingSettingsEnabled:(BOOL)a29;
- (id)digitalFlashRGBEstimate;
- (unsigned long long)digitalFlashUserInterfaceHints;
- (id)digitalFlashUserInterfaceRGBEstimate;
- (struct { int x0; int x1; })dimensionsForSemanticSegmentationMatteOfType:(id)a0;
- (BOOL)isAdjustedPhotoFilterRenderingEnabled;
- (BOOL)isEV0PhotoDeliveryEnabled;
- (BOOL)isSquareCropEnabled;
- (BOOL)isTurboModeEnabled;
- (BOOL)livePhotoMovieEnabled;
- (struct { int x0; int x1; })spatialOverCapturePhotoDimensions;

@end
