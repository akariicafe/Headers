@class NSObject, NSString, ARBufferPopulationMonitor, AVCaptureSession, AVCaptureAudioDataOutput, NSMutableArray, AVCaptureDeviceInput, AVCaptureConnection, ARParentImageSensorSettings;
@protocol OS_dispatch_queue, ARSensorDelegate;

@interface ARParentImageSensor : NSObject <AVCaptureAudioDataOutputSampleBufferDelegate, ARSensor, ARImageSensorDataSource> {
    ARBufferPopulationMonitor *_bufferPopulationMonitor;
    NSObject<OS_dispatch_queue> *_captureQueue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _stateLock;
    NSObject<OS_dispatch_queue> *_captureSessionNotificationsQueue;
}

@property (retain, nonatomic) NSMutableArray *sensors;
@property (nonatomic) BOOL running;
@property (nonatomic) BOOL interrupted;
@property (nonatomic) BOOL unrecoverable;
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

- (void)captureOutput:(id)a0 didOutputSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1 fromConnection:(id)a2;
- (void)dealloc;
- (void)reconfigure:(id)a0;
- (id)initWithSettings:(id)a0;
- (void)teardown;
- (void)stop;
- (void)start;
- (void).cxx_destruct;
- (BOOL)canReconfigure:(id)a0;
- (BOOL)_addSensorForSettings:(id)a0;
- (void)_addSensors;
- (void)_captureSessionStateChanged:(id)a0;
- (void)_configureAudioCapture;
- (BOOL)_startWithError:(out id *)a0;
- (BOOL)_validateCameraAuthorization;
- (BOOL)_validateMicrophoneAuthorizationWithError:(out id *)a0;
- (id)captureDeviceTypeToExtrinsicsMapForImageSensor:(id)a0;
- (void)captureHighResolutionFrameWithPhotoSettings:(id)a0;
- (void)captureSessionStateChanged:(id)a0;
- (void)forceUpdatePowerUsage:(unsigned long long)a0;
- (unsigned long long)providedDataTypes;
- (void)waitForOutstandingCallbacks;

@end
