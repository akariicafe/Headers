@class BWFigVideoCaptureDevice, NSArray, FigCaptureSourceVideoFormat, NSMutableDictionary, NSDictionary, FigCaptureSourceDepthDataFormat, BWMultiStreamCameraSourceNode, BWNodeOutput, NSMutableArray, BWDeskCamNode, BWMemoryPool;

@interface FigCaptureCameraSourcePipeline : FigCaptureSourcePipeline {
    BOOL _useCaptureOutputForPreview;
    int _deviceType;
    int _devicePosition;
    NSMutableArray *_sourceNodes;
    BWMultiStreamCameraSourceNode *_sourceNode;
    BWMultiStreamCameraSourceNode *_telephotoSourceNode;
    BWMultiStreamCameraSourceNode *_superWideSourceNode;
    BWMultiStreamCameraSourceNode *_infraredSourceNode;
    BWNodeOutput *_sourceFormatReferenceOutput;
    NSMutableArray *_synchronizerNodes;
    NSArray *_previewFilters;
    NSMutableDictionary *_cinematicFramingNodesBySourceDeviceType;
    NSMutableDictionary *_backgroundBlurNodesBySourceDeviceType;
    NSDictionary *_previewOutputsBySourceDeviceType;
    NSDictionary *_stillImageOutputsByPortType;
    NSDictionary *_stillImageSensorRawOutputsByPortType;
    NSDictionary *_videoCaptureOutputsArrayBySourceDeviceType;
    unsigned int _nextVideoCaptureOutputIndexBySourceDeviceType[15];
    NSArray *_pointCloudOutputs;
    unsigned int _nextPointCloudOutputIndex;
    NSDictionary *_detectedObjectsOutputsBySourceDeviceType;
    NSDictionary *_visionDataOutputsBySourceDeviceType;
    BWNodeOutput *_depthOutput;
    BWFigVideoCaptureDevice *_captureDevice;
    struct OpaqueFigCaptureSource { } *_captureSource;
    FigCaptureSourceVideoFormat *_captureSourceVideoFormat;
    FigCaptureSourceDepthDataFormat *_captureSourceDepthDataFormat;
    BOOL _stillImageOutputDerivesFromVideoCaptureOutput;
    BWMemoryPool *_memoryPool;
    BOOL _overCapturePercentage;
    int _depthType;
    BOOL _hardwareDepthFilteringEnabled;
    BOOL _videoHDRImageStatisticsEnabled;
    BWDeskCamNode *_deskCamNode;
    int _stillImageOutputRetainedBufferCountOverride;
}

+ (void)initialize;

- (void)dealloc;

@end
