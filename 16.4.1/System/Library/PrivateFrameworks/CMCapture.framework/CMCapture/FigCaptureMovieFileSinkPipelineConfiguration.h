@class FigCaptureSourceConfiguration, FigMetadataItemCaptureConnectionConfiguration, NSArray, FigDepthDataCaptureConnectionConfiguration, FigAudioCaptureConnectionConfiguration, NSString, FigVideoCaptureConnectionConfiguration;

@interface FigCaptureMovieFileSinkPipelineConfiguration : NSObject {
    FigCaptureSourceConfiguration *_cameraConfiguration;
    FigVideoCaptureConnectionConfiguration *_videoConnectionConfiguration;
    FigAudioCaptureConnectionConfiguration *_audioConnectionConfiguration;
    FigMetadataItemCaptureConnectionConfiguration *_cameraDebugInfoMetadataConnectionConfiguration;
    NSArray *_detectedObjectMetadataConnectionConfigurations;
    FigDepthDataCaptureConnectionConfiguration *_depthDataConnectionConfiguration;
    struct { int width; int height; } _depthOutputDimensions;
    FigVideoCaptureConnectionConfiguration *_stillImageConnectionConfiguration;
    FigVideoCaptureConnectionConfiguration *_sceneClassifierConnectionConfiguration;
    struct FigCaptureVideoTransform { BOOL mirrored; int rotationDegrees; struct { int width; int height; } dimensions; } _videoSourceCaptureTransform;
    struct { int width; int height; } _visOutputDimensions;
    int _videoStabilizationType;
    BOOL _boxedMetadataPostVISEnabled;
    int _motionAttachmentsSource;
    struct { unsigned short major; unsigned short minor; unsigned short patch; } _smartCameraPipelineVersion;
    BOOL _offlineVISEnabled;
    BOOL _vitalityScoringEnabled;
    BOOL _captureDeviceHasOverCaptureEnabled;
    BOOL _overCaptureEnabled;
    BOOL _frameReconstructionEnabled;
    BOOL _semanticStyleRenderingEnabled;
    BOOL _P3ToBT2020ConversionEnabled;
    int _maxLossyCompressionLevel;
    BOOL _videoSTFEnabled;
    BOOL _videoGreenGhostMitigationEnabled;
    float _videoStabilizationOverscanOverride;
    int _videoStabilizationStrength;
    NSString *_clientApplicationID;
    long long _maximumAllowedInFlightCompressedBytes;
}

- (void)dealloc;

@end
