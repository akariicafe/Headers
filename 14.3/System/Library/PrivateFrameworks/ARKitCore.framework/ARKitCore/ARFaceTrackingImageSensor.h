@class AVCaptureMetadataOutput, NSString, NSArray, NSObject, AVCaptureConnection, AVCaptureDepthDataOutput, ARFaceData;
@protocol OS_dispatch_semaphore;

@interface ARFaceTrackingImageSensor : ARImageSensor <AVCaptureMetadataOutputObjectsDelegate> {
    AVCaptureMetadataOutput *_metaDataOutput;
    NSArray *_availableMetadataObjectTypes;
    AVCaptureDepthDataOutput *_depthDataOutput;
    ARFaceData *_latestFaceData;
    NSObject<OS_dispatch_semaphore> *_faceDataSemaphore;
    BOOL _signpostFirstFrameDone;
    BOOL _signpostFirstFaceDone;
    double _startTime;
    unsigned long long _droppedFramesPerSec;
    BOOL _previousImageDataValid;
    AVCaptureConnection *_depthConnection;
    AVCaptureConnection *_metadataConnection;
}

@property (nonatomic) BOOL recordingMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)captureOutput:(id)a0 didOutputSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1 fromConnection:(id)a2;
- (void)dataOutputSynchronizer:(id)a0 didOutputSynchronizedDataCollection:(id)a1;
- (void)captureOutput:(id)a0 didOutputMetadataObjects:(id)a1 fromConnection:(id)a2;
- (void).cxx_destruct;
- (void)dealloc;
- (void)stop;
- (void)reconfigure:(id)a0;
- (id)configureCaptureSession;
- (unsigned long long)providedDataTypes;
- (id)prepareToStart;
- (id)initWithSettings:(id)a0 captureSession:(id)a1 captureQueue:(id)a2;
- (id)_configureMetaDataOutput;
- (void)configureCaptureDevice;
- (void)capturedSynchedOutput:(id)a0 didOutputSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1 fromVideoConnection:(id)a2 metaDataOutput:(id)a3 didOutputMetadataObjects:(id)a4 didOutputDepthData:(id)a5 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a6;
- (id)outputsForSynchronizer;

@end
