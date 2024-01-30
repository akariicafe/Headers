@class NSObject, NSString, ARBufferPopulationMonitor, AVCaptureSession, AVCaptureAudioDataOutput, NSMutableArray, AVCaptureDeviceInput, AVCaptureConnection, ARParentImageSensorSettings;
@protocol OS_dispatch_queue, ARSensorDelegate;

@interface ARParentImageSensor : NSObject <AVCaptureAudioDataOutputSampleBufferDelegate, ARSensor, ARImageSensorDataSource> {
    ARBufferPopulationMonitor *_bufferPopulationMonitor;
    NSObject<OS_dispatch_queue> *_captureQueue;
    BOOL _startingCaptureSession;
}

@property (retain, nonatomic) NSMutableArray *sensors;
@property BOOL running;
@property (nonatomic) BOOL interrupted;
@property BOOL unrecoverable;
@property (weak, nonatomic) id<ARSensorDelegate> delegate;
@property (readonly, copy, nonatomic) ARParentImageSensorSettings *settings;
@property (nonatomic) unsigned long long powerUsage;
@property (readonly, nonatomic) AVCaptureSession *captureSession;
@property (readonly, nonatomic) AVCaptureDeviceInput *audioInput;
@property (readonly, nonatomic) AVCaptureAudioDataOutput *audioOutput;
@property (readonly, nonatomic) AVCaptureConnection *audioConnection;
@property (nonatomic) BOOL recordingMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)teardown;
- (id)initWithSettings:(id)a0;
- (void)start;
- (void).cxx_destruct;
- (void)dealloc;
- (void)reconfigure:(id)a0;
- (void)captureOutput:(id)a0 didOutputSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1 fromConnection:(id)a2;
- (void)stop;
- (BOOL)canReconfigure:(id)a0;
- (id)captureDeviceTypeToExtrinsicsMapForImageSensor:(id)a0;
- (unsigned long long)providedDataTypes;
- (void)forceUpdatePowerUsage:(unsigned long long)a0;
- (void)addSensorForSettings:(id)a0;
- (BOOL)_validateMicrophoneAuthorization;
- (void)_configureAudioCapture;
- (BOOL)_validateCameraAuthorization;
- (void)captureSessionStateChanged:(id)a0;

@end
