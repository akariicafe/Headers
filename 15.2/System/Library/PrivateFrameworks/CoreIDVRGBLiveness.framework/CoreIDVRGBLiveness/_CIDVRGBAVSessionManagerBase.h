@class NSString, AVCaptureSession, NSObject;
@protocol OS_dispatch_queue, CIDVRGBAVSessionManagerDelegate;

@interface _CIDVRGBAVSessionManagerBase : NSObject <CIDVRGBAVSessionManager>

@property (readonly, nonatomic) AVCaptureSession *session;
@property (readonly, nonatomic) BOOL isRunning;
@property (nonatomic) long long orientation;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (weak, nonatomic) id<CIDVRGBAVSessionManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stopRecording;
- (void)resumeRecording;
- (void)setup;
- (void)pauseRecording;
- (void)start;
- (void).cxx_destruct;
- (id)init;
- (void)invalidate;
- (void)dealloc;
- (void)stop;
- (void)_configureOutput:(id)a0;
- (void)_setupAVSession;
- (void)_requestAccessToAVDeviceWithCompletionHandler:(id /* block */)a0;
- (void)startAVSession;
- (void)stopAVSession;
- (void)pauseFileRecording;
- (void)resumeFileRecording;
- (void)stopFileRecording;
- (void)restartFileRecordingWithCompletionHandler:(id /* block */)a0;
- (void)invalidateAVSession;
- (void)_manageAVSessionNotification:(id)a0;
- (id)_buildAVCaptureInput;
- (void)_addAVSessionInput:(id)a0;
- (id)buildAVSessionCaptureOutputs;
- (void)addAVSessionOutput:(id)a0;
- (void)configureAVSessionCaptureOutputs;
- (void)_startObservingAVSessionNotifications;
- (void)capturePhotoUsingFlash:(BOOL)a0;
- (void)restartRecordingWithCompletionHandler:(id /* block */)a0;

@end
