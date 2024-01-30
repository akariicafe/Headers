@class FigDepthDataCaptureConnectionConfiguration, NSString, BWFigVideoCaptureDevice, BWDepthRotatorNode, NSDictionary, BWPointCloudDensificationNode, BWVideoPointCloudSynchronizerNode, BWNodeOutput;

@interface FigCaptureLiDARDepthPipeline : FigCapturePipeline {
    BWFigVideoCaptureDevice *_captureDevice;
    NSDictionary *_cameraInfoByPortType;
    NSDictionary *_sensorIDStringsByPortType;
    FigDepthDataCaptureConnectionConfiguration *_depthDataCaptureConnectionConfiguration;
    int _rgbCameraHorizontalSensorBinningFactor;
    int _rgbCameraVerticalSensorBinningFactor;
    unsigned int _depthPixelFormat;
    BOOL _depthDataFilteringEnabled;
    struct { int width; int height; } _depthOutputDimensions;
    BWVideoPointCloudSynchronizerNode *_synchronizerNode;
    BWPointCloudDensificationNode *_pointCloudDensificationNode;
    BWDepthRotatorNode *_depthRotatorNode;
}

@property (readonly, nonatomic) BWNodeOutput *depthDataSinkOutput;
@property (readonly, nonatomic) NSString *rgbCameraSourceID;

+ (void)initialize;

- (void)dealloc;
- (int)_buildLiDARDepthPipelineWithVideoSourceCaptureOutput:(id)a0 pointCloudOutput:(id)a1 graph:(id)a2 videoInputDimensions:(struct { int x0; int x1; })a3;
- (id)initWithCaptureDevice:(id)a0 cameraInfoByPortType:(id)a1 sensorIDStringsByPortType:(id)a2 depthDataCaptureConnectionConfiguration:(id)a3 videoSourceCaptureOutput:(id)a4 pointCloudOutput:(id)a5 graph:(id)a6 name:(id)a7 rgbCameraSourceID:(id)a8 errorOut:(int *)a9;

@end
