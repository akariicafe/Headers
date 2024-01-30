@class AVCaptureConnection, NSMutableDictionary, AVCaptureVisionDataOutput, AVCaptureDevice, NSObject, ARBufferPopulationMonitor, NSMutableArray, AVCaptureDeviceInput, AVCaptureVideoDataOutput, AVCaptureCameraCalibrationDataOutput, NSString, AVCameraCalibrationData, AVCaptureSession, NSArray, ARImageSensorSettings, AVCapturePhotoOutput, AVCaptureDataOutputSynchronizer;
@protocol ARImageSensorDataSource, ARSensorDelegate, OS_dispatch_queue;

@interface ARImageSensor : NSObject <AVCaptureVideoDataOutputSampleBufferDelegate, AVCaptureDataOutputSynchronizerDelegate, AVCaptureCameraCalibrationDataOutputDelegate, AVCapturePhotoCaptureDelegate, ARSensor> {
    AVCaptureVisionDataOutput *_visionDataOutput;
    NSMutableArray *_captureDeviceKeysObserved;
    AVCameraCalibrationData *_cameraCalibrationData;
    NSMutableDictionary *_extrinsicsMap;
    BOOL _reachedExposureTargetOffsetThreshold;
    unsigned long long _initialImageDatasCounter;
}

@property float defaultLensPosition;
@property long long captureFramesPerSecond;
@property BOOL runningSingleShotAutoFocus;
@property (readonly, nonatomic) AVCaptureCameraCalibrationDataOutput *calibrationOutput;
@property (readonly, nonatomic) ARImageSensorSettings *mutableSettings;
@property (retain, nonatomic) AVCaptureDeviceInput *videoInput;
@property (retain, nonatomic) AVCaptureConnection *videoConnection;
@property (retain, nonatomic) ARBufferPopulationMonitor *bufferPopulationMonitor;
@property (nonatomic) BOOL interrupted;
@property (weak, nonatomic) id<ARSensorDelegate> delegate;
@property (weak, nonatomic) id<ARImageSensorDataSource> dataSource;
@property (readonly, copy, nonatomic) ARImageSensorSettings *settings;
@property (readonly, nonatomic) AVCaptureDevice *captureDevice;
@property (readonly, nonatomic) AVCaptureSession *captureSession;
@property (readonly, nonatomic) AVCaptureVideoDataOutput *videoOutput;
@property (readonly, nonatomic) AVCapturePhotoOutput *photoOutput;
@property (readonly, nonatomic) AVCaptureConnection *calibrationConnection;
@property (readonly, nonatomic) AVCaptureConnection *visionDataConnection;
@property (readonly, nonatomic) NSArray *outputsForSynchronizer;
@property (readonly, nonatomic) AVCaptureDataOutputSynchronizer *outputSynchronizer;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *captureQueue;
@property (nonatomic) unsigned long long powerUsage;
@property (retain) NSMutableArray *connections;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerSignPostForImageData:(id)a0;
+ (float)defaultLensPosition;

- (id)logPrefix;
- (void)teardown;
- (void)captureOutput:(id)a0 didDropSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1 fromConnection:(id)a2;
- (void)start;
- (void).cxx_destruct;
- (id)init;
- (void)triggerVisionDataBurst;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (void)reconfigure:(id)a0;
- (void)captureOutput:(id)a0 didOutputSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1 fromConnection:(id)a2;
- (void)stop;
- (void)cameraCalibrationDataOutput:(id)a0 didOutputCameraCalibrationData:(id)a1 timestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 connection:(id)a3;
- (void)cameraCalibrationDataOutput:(id)a0 didDropCameraCalibrationDataAtTimestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 connection:(id)a2 reason:(long long)a3;
- (void)dataOutputSynchronizer:(id)a0 didOutputSynchronizedDataCollection:(id)a1;
- (id)setActiveFormat;
- (id)configureCaptureSession;
- (void)configureFrameRateForDevice:(id)a0;
- (BOOL)canReconfigure:(id)a0;
- (void)enableSensor:(BOOL)a0;
- (unsigned long long)providedDataTypes;
- (id)prepareToStart;
- (id)initWithSettings:(id)a0 captureSession:(id)a1 captureQueue:(id)a2;
- (void)configureCaptureDevice;
- (void)enableContinuousAutoFocusIfPossible;
- (void)trackExposureTargetOffsetIfNeededForImageData:(id)a0 shouldDrop:(BOOL *)a1;
- (id)configureCaptureSessionCalibration;
- (void)forceUpdatePowerUsage:(unsigned long long)a0;
- (void)_configureCameraFocusForDevice:(id)a0;
- (void)resetExposureTracking;
- (id)_configureVisionDataOutputForSession:(id)a0;
- (void)_configureCameraExposureForDevice:(id)a0;
- (void)_configureCameraWhiteBalanceForDevice:(id)a0;
- (void)_configureImageControlModeForDevice:(id)a0;
- (void)configureGeometricDistortionCorrectionForDevice:(id)a0;
- (void)_configureFrameRateForDevice:(id)a0 frameRate:(double)a1;
- (void)enableAutoFocusForDevice:(id)a0;
- (void)_dispatchImageData:(id)a0;
- (void)updateCaptureDeviceFrameRate:(double)a0;

@end
