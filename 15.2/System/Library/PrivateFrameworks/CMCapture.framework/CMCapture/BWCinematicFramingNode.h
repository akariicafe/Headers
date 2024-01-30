@class BWNodeInput, NSString, NSDictionary, CinematicFramingSession, BWNodeOutput, BWDeviceOrientationMonitor;

@interface BWCinematicFramingNode : BWNode {
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
    unsigned int _maxPeopleDetected;
    unsigned int _minLuxLevelNeeded;
    BOOL _stillImageCaptureEnabled;
    struct OpaqueVTPixelTransferSession { } *_stillImagePixelTransferSession;
    int _maxLossyCompressionLevel;
}

@property (readonly, nonatomic) BWNodeInput *videoCaptureInput;
@property (readonly, nonatomic) BWNodeOutput *videoCaptureOutput;
@property (readonly, nonatomic) BWNodeInput *stillImageInput;
@property (readonly, nonatomic) BWNodeOutput *stillImageOutput;
@property (readonly, nonatomic) BWNodeInput *detectionMetadataInput;
@property (readonly, nonatomic) BWNodeOutput *detectionMetadataOutput;
@property (copy, nonatomic) NSString *clientApplicationID;
@property (nonatomic) unsigned int cinematicFramingControlMode;

+ (void)initialize;

- (void)configurationWithID:(long long)a0 updatedFormat:(id)a1 didBecomeLiveForInput:(id)a2;
- (id)nodeSubType;
- (void)didReachEndOfDataForInput:(id)a0;
- (id)nodeType;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (void)dealloc;
- (void)_updateOutputRequirements;
- (id)_supportedInputPixelFormats;
- (id)_supportedOutputPixelFormats;
- (void)_initCinematicFramingSession;
- (void)_reportCinematicFramingSessionCoreAnalyticsData;
- (void)_savePixelBufferForStillImageCaptureRequests:(struct __CVBuffer { } *)a0 withPts:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (struct __CVBuffer { } *)_createMatchingPixelBufferFromSavedVideoBuffersWithTargetPts:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)_updateSampleBufferMetadata:(struct opaqueCMSampleBuffer { } *)a0;
- (struct __CVBuffer { } *)_newStillImageOutputPixelBufferFromVideoPixelBuffer:(struct __CVBuffer { } *)a0;
- (id)initWithOutputDimensions:(struct { int x0; int x1; })a0 cameraInfoByPortType:(id)a1 horizontalSensorBinningFactor:(int)a2 verticalSensorBinningFactor:(int)a3 stillImageCaptureEnabled:(BOOL)a4 objectMetadataIdentifiers:(id)a5 maxLossyCompressionLevel:(int)a6;

@end
