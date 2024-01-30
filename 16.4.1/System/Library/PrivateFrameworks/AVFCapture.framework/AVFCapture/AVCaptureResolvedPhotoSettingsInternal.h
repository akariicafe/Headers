@class NSArray, AVSemanticStyle;

@interface AVCaptureResolvedPhotoSettingsInternal : NSObject {
    long long uniqueID;
    struct { int width; int height; } photoDimensions;
    struct { int width; int height; } rawPhotoDimensions;
    struct { int width; int height; } previewDimensions;
    struct { int width; int height; } embeddedThumbnailDimensions;
    struct { int width; int height; } rawEmbeddedThumbnailDimensions;
    BOOL livePhotoMovieEnabled;
    struct { int width; int height; } livePhotoMovieDimensions;
    struct { int width; int height; } portraitEffectsMatteDimensions;
    struct { int width; int height; } hairSegmentationMatteDimensions;
    struct { int width; int height; } skinSegmentationMatteDimensions;
    struct { int width; int height; } teethSegmentationMatteDimensions;
    struct { int width; int height; } glassesSegmentationMatteDimensions;
    struct { int width; int height; } spatialOverCapturePhotoDimensions;
    BOOL turboModeEnabled;
    BOOL flashEnabled;
    BOOL redEyeReductionEnabled;
    BOOL HDREnabled;
    BOOL adjustedPhotoFiltersEnabled;
    BOOL EV0PhotoDeliveryEnabled;
    BOOL stillImageStabilizationEnabled;
    BOOL virtualDeviceFusionEnabled;
    BOOL squareCropEnabled;
    struct { int width; int height; } deferredPhotoProxyDimensions;
    struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } photoProcessingTimeRange;
    BOOL contentAwareDistortionCorrectionEnabled;
    NSArray *photoManifest;
    unsigned long long digitalFlashUserInterfaceHints;
    NSArray *digitalFlashUserInterfaceRGBEstimate;
    BOOL captureBeforeResolvingSettingsEnabled;
    AVSemanticStyle *semanticStyle;
}

- (void)dealloc;

@end
