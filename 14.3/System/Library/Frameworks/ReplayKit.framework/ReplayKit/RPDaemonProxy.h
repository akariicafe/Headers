@class NSURL, NSString, NSXPCConnection;

@interface RPDaemonProxy : NSObject <NSXPCConnectionDelegate, RPDaemonProtocol, RPClientProtocol>

@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) NSURL *broadcastURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)daemonProxy;

- (id)init;
- (void).cxx_destruct;
- (void)connection:(id)a0 handleInvocation:(id)a1 isReply:(BOOL)a2;
- (oneway void)setMicrophoneEnabled:(BOOL)a0;
- (oneway void)saveVideo:(id)a0 handler:(id /* block */)a1;
- (oneway void)setBroadcastPickerPreferredExt:(id)a0 showsMicButton:(BOOL)a1;
- (oneway void)openControlCenterSystemRecordingView;
- (oneway void)stopSystemRecordingWithURLHandler:(id /* block */)a0;
- (oneway void)startInAppRecordingWithContextID:(id)a0 windowSize:(struct CGSize { double x0; double x1; })a1 microphoneEnabled:(BOOL)a2 cameraEnabled:(BOOL)a3 withHandler:(id /* block */)a4;
- (oneway void)stopInAppRecordingWithHandler:(id /* block */)a0;
- (oneway void)stopInAppRecordingWithUrl:(id)a0 handler:(id /* block */)a1;
- (oneway void)discardInAppRecordingWithHandler:(id /* block */)a0;
- (oneway void)pauseInAppRecording;
- (oneway void)recordingDidStopWithError:(id)a0 movieURL:(id)a1;
- (oneway void)resumeInAppRecordingWithWindowLayerContextID:(unsigned int)a0 completionHandler:(id /* block */)a1;
- (oneway void)startInAppCaptureWithContextID:(id)a0 windowSize:(struct CGSize { double x0; double x1; })a1 microphoneEnabled:(BOOL)a2 cameraEnabled:(BOOL)a3 withHandler:(id /* block */)a4;
- (oneway void)stopInAppCaptureWithHandler:(id /* block */)a0;
- (oneway void)pauseInAppCapture;
- (oneway void)resumeInAppCaptureWithWindowLayerContextID:(unsigned int)a0 completionHandler:(id /* block */)a1;
- (oneway void)startInAppBroadcastWithContextID:(id)a0 windowSize:(struct CGSize { double x0; double x1; })a1 microphoneEnabled:(BOOL)a2 cameraEnabled:(BOOL)a3 listenerEndpoint:(id)a4 withHandler:(id /* block */)a5;
- (oneway void)stopInAppBroadcastWithHandler:(id /* block */)a0;
- (oneway void)pauseInAppBroadcast;
- (oneway void)resumeInAppBroadcastWithWindowLayerContextID:(unsigned int)a0 completionHandler:(id /* block */)a1;
- (oneway void)startSystemRecordingWithContextID:(id)a0 windowSize:(struct CGSize { double x0; double x1; })a1 microphoneEnabled:(BOOL)a2 cameraEnabled:(BOOL)a3 withHandler:(id /* block */)a4;
- (oneway void)stopSystemRecordingWithHandler:(id /* block */)a0;
- (oneway void)resumeSystemRecordingWithCompletionHandler:(id /* block */)a0;
- (oneway void)setupSystemBroadcastWithHostBundleID:(id)a0 broadcastExtensionBundleID:(id)a1 broadcastConfigurationData:(id)a2 userInfo:(id)a3 handler:(id /* block */)a4;
- (oneway void)startSystemBroadcastWithContextID:(id)a0 windowSize:(struct CGSize { double x0; double x1; })a1 microphoneEnabled:(BOOL)a2 cameraEnabled:(BOOL)a3 listenerEndpoint:(id)a4 withHandler:(id /* block */)a5;
- (oneway void)stopSystemBroadcastWithHandler:(id /* block */)a0;
- (oneway void)resumeSystemBroadcastWithCompletionHandler:(id /* block */)a0;
- (oneway void)startClipBufferingWithMicrophoneEnabled:(BOOL)a0 windowSize:(struct CGSize { double x0; double x1; })a1 withHandler:(id /* block */)a2;
- (oneway void)stopClipBufferingWithHandler:(id /* block */)a0;
- (oneway void)generateClipWithSeconds:(double)a0 handler:(id /* block */)a1;
- (oneway void)saveVideoToCameraRoll:(id)a0 handler:(id /* block */)a1;
- (oneway void)reportCameraUsage:(long long)a0;
- (oneway void)recordingTimerDidUpdate:(id)a0;
- (oneway void)updateProcessIDForAudioCaptureWithPID:(int)a0;
- (oneway void)captureHandlerWithSample:(id)a0 timingData:(id)a1;
- (oneway void)captureHandlerWithAudioSample:(id)a0 bufferType:(long long)a1;
- (oneway void)recordingLockInterrupted:(id)a0;
- (oneway void)recordingDidPause;
- (oneway void)shouldResumeSessionType:(id)a0;
- (oneway void)updateScreenRecordingStateWithCurrentState:(id)a0;
- (oneway void)updateBroadcastURL:(id)a0;
- (oneway void)updateBroadcastServiceInfo:(id)a0;
- (oneway void)setupBroadcastWithHostBundleID:(id)a0 broadcastExtensionBundleID:(id)a1 broadcastConfigurationData:(id)a2 userInfo:(id)a3 handler:(id /* block */)a4;
- (oneway void)getSystemBroadcastPickerInfo:(id /* block */)a0;
- (oneway void)getSystemBroadcastExtensionInfo:(id /* block */)a0;
- (oneway void)macApplicationDidResignActive;
- (oneway void)macApplicationDidBecomeActiveWithContextID:(unsigned int)a0 completionHandler:(id /* block */)a1;
- (oneway void)consumeSandboxExtension:(id)a0 processNewConnection:(BOOL)a1;
- (oneway void)stopCurrentActiveSessionWithHandler:(id /* block */)a0;
- (oneway void)stopAllActiveClients;
- (void)issueSandboxExtensionForMainBundleRead;
- (id)issueSandboxExtensionForClientFileWrite:(id)a0;

@end
