@class BWNodeInput, NSString, NSDictionary, CinematicFramingSession, BWNodeOutput, BWDeviceOrientationMonitor, BWFigVideoCaptureDevice;

@interface BWDeskCamNode : BWNode <BWFigVideoCaptureDeviceOverheadCameraModeChangedDelegate> {
    struct opaqueCMFormatDescription { } *_outputFormatDescription;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _bufferServicingLock;
    int _horizontalSensorBinningFactor;
    int _verticalSensorBinningFactor;
    NSDictionary *_cameraInfoByPortType;
    struct { int width; int height; } _outputDimensions;
    struct { struct __CVBuffer *pixelBuffer; struct { long long value; int timescale; unsigned int flags; long long epoch; } pts; } _stillCaptureQueue[2];
    unsigned int _stillCaptureEnqueueIndex;
    CinematicFramingSession *_cinematicFramingSession;
    BWDeviceOrientationMonitor *_deviceOrientationMonitor;
    unsigned int _minLuxLevelNeeded;
    BOOL _stillImageCaptureEnabled;
    struct OpaqueVTPixelTransferSession { } *_stillImagePixelTransferSession;
    int _maxLossyCompressionLevel;
    NSString *_portType;
    NSString *_deviceModelName;
    int _overheadCameraMode;
    BWFigVideoCaptureDevice *_captureDevice;
    unsigned short _numberOfFramesReceivedBeforeFocusUpdate;
    unsigned short _numberOfFramesReceivedSinceLastFocusUpdate;
}

@property (readonly, nonatomic) BWNodeInput *videoCaptureInput;
@property (readonly, nonatomic) BWNodeOutput *videoCaptureOutput;
@property (readonly, nonatomic) BWNodeInput *stillImageInput;
@property (readonly, nonatomic) BWNodeOutput *stillImageOutput;
@property (readonly, nonatomic) BWNodeInput *detectionMetadataInput;
@property (readonly, nonatomic) BWNodeOutput *detectionMetadataOutput;
@property (copy, nonatomic) NSString *clientApplicationID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (id)nodeType;
- (void)configurationWithID:(long long)a0 updatedFormat:(id)a1 didBecomeLiveForInput:(id)a2;
- (void)didReachEndOfDataForInput:(id)a0;
- (id)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)dealloc;
- (void)didChangeOverheadCameraMode:(int)a0;
- (id)initWithOutputDimensions:(struct { int x0; int x1; })a0 cameraInfoByPortType:(id)a1 horizontalSensorBinningFactor:(int)a2 verticalSensorBinningFactor:(int)a3 stillImageCaptureEnabled:(BOOL)a4 objectMetadataIdentifiers:(id)a5 maxLossyCompressionLevel:(int)a6 portType:(id)a7 deviceModelName:(id)a8 overheadCameraMode:(int)a9 captureDevice:(id)a10;

@end
