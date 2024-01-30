@class BWFigVideoCaptureDevice, NSArray, FigCaptureSourceVideoFormat, NSMutableDictionary, NSDictionary, FigCaptureSourceDepthDataFormat, BWMultiStreamCameraSourceNode, BWNodeOutput, NSMutableArray, BWMemoryPool;

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
    NSDictionary *_videoCaptureOutputsArrayBySourceDeviceType;
    unsigned int _nextVideoCaptureOutputIndexBySourceDeviceType[13];
    NSDictionary *_detectedObjectsOutputsBySourceDeviceType;
    NSDictionary *_visionDataOutputsBySourceDeviceType;
    BWNodeOutput *_depthOutput;
    BWFigVideoCaptureDevice *_captureDevice;
    struct OpaqueFigCaptureSource { } *_captureSource;
    FigCaptureSourceVideoFormat *_captureSourceVideoFormat;
    FigCaptureSourceDepthDataFormat *_captureSourceDepthDataFormat;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _overscanRect;
    BOOL _stillImageOutputDerivesFromVideoCaptureOutput;
    BWMemoryPool *_memoryPool;
    BOOL _overCapturePercentage;
    BOOL _hardwareDepthFilteringEnabled;
    int _stillImageOutputRetainedBufferCountOverride;
}

+ (void)initialize;

- (void)dealloc;

@end
