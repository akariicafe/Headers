@class FigDepthDataCaptureConnectionConfiguration, FigMetadataObjectCaptureConnectionConfiguration, FigVideoCaptureConnectionConfiguration;

@interface FigCapturePreviewSinkPipelineConfiguration : NSObject {
    FigVideoCaptureConnectionConfiguration *_videoPreviewSinkConnectionConfiguration;
    FigVideoCaptureConnectionConfiguration *_videoThumbnailConnectionConfiguration;
    FigDepthDataCaptureConnectionConfiguration *_depthDataConnectionConfiguration;
    FigVideoCaptureConnectionConfiguration *_previewTimeMachineConnectionConfiguration;
    FigVideoCaptureConnectionConfiguration *_sceneClassifierConnectionConfiguration;
    FigMetadataObjectCaptureConnectionConfiguration *_metadataObjectConnectionConfiguration;
    FigVideoCaptureConnectionConfiguration *_stillImageConnectionConfiguration;
    struct { unsigned short major; unsigned short minor; unsigned short patch; } _sceneClassifierPipelineVersion;
    int _sourceColorSpaceProperties;
    BOOL _sourcePixelFormatIsFullRange;
    BOOL _sourceIsBravoDevice;
    BOOL _clientIsCameraOrDerivative;
    struct { unsigned int val[8]; } _clientAuditToken;
    BOOL _vitalityScoringEnabled;
    BOOL _displayPipeRequiresPacked10BitPixelFormatForP3Input;
    BOOL _deferredPrepareEnabled;
    BOOL _remoteVideoPreview;
    BOOL _overCaptureEnabled;
    BOOL _primaryCaptureRectModificationEnabled;
    double _videoStabilizationOverscan;
    BOOL _focusBlurMapForDepthFiltersEnabled;
    BOOL _depthFromMonocularNetworkEnabled;
    BOOL _smartCameraMotionDetectionEnabled;
    BOOL _generatesHistogram;
    BOOL _cinematicVideoEnabled;
    int _maxLossyCompressionLevel;
    BOOL _videoHDRImageStatisticsEnabled;
}

- (void)dealloc;

@end
