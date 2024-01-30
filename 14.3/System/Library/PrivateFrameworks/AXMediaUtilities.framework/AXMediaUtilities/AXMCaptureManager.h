@class NSHashTable, NSString, _AXMCaptureManagerDetectionEngine, AVCaptureSession, NSObject, AVCaptureDevice, AVCaptureDeviceInput, AVCaptureVideoDataOutput;
@protocol OS_dispatch_queue;

@interface AXMCaptureManager : NSObject <AVCaptureVideoDataOutputSampleBufferDelegate> {
    AVCaptureDevice *_captureDevice;
    AVCaptureSession *_captureSession;
    AVCaptureDeviceInput *_captureDeviceInput;
    AVCaptureVideoDataOutput *_videoDataOutput;
    NSObject<OS_dispatch_queue> *_videoFrameReceiveQueue;
    NSHashTable *_videoFrameObservers;
    _AXMCaptureManagerDetectionEngine *_detectionEngine;
    NSHashTable *_featureDetectionObservers;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _observerLock;
}

@property (readonly, nonatomic) AVCaptureSession *session;
@property (readonly, nonatomic) long long activeScenario;
@property (nonatomic) long long deviceOrientation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)captureSessionReport:(id)a0;

- (void)captureOutput:(id)a0 didOutputSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1 fromConnection:(id)a2;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCaptureSession:(id)a0;
- (id)idealCaptureSettingsForScenario:(long long)a0;
- (BOOL)_configureSessionWithBlock:(id /* block */)a0 error:(id *)a1;
- (void)startSessionIfNeeded;
- (BOOL)configureForScenario:(long long)a0 error:(id *)a1;
- (void)addVideoFrameObserver:(id)a0;
- (void)removeVideoFrameObserver:(id)a0;
- (void)addFeatureDetectionObserver:(id)a0;
- (void)removeFeatureDetectionObserver:(id)a0;
- (int)_minimumAcceptableFramerateForScenario:(long long)a0;
- (int)_maximumAcceptableFramerateForScenario:(long long)a0;
- (int)_minimumAcceptableResolutionForScenario:(long long)a0;
- (unsigned int)_pixelFormatForScenario:(long long)a0;
- (int)_maximumAcceptableResolutionForScenario:(long long)a0;
- (id)_filteredDevicesAndFormatsForScenario:(long long)a0;
- (id)_preferredFormatForFormats:(id)a0;
- (void)printAllVideoDevices;
- (void)beginLiveDetectionWithOptions:(id)a0;
- (void)endLiveDetection;
- (void)stopSession;

@end
