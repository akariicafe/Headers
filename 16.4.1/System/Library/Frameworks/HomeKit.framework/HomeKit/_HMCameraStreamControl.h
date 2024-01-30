@class NSString, HMCameraStream;
@protocol _HMCameraStreamControlDelegate;

@interface _HMCameraStreamControl : _HMCameraControl <HMFLogging>

@property unsigned long long streamState;
@property (copy) NSString *streamSessionID;
@property (weak) id<_HMCameraStreamControlDelegate> delegate;
@property (readonly) HMCameraStream *cameraStream;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_callVideoStartedDelegate;
- (void)_callVideoStoppedDelegate:(id)a0;
- (void)_handleStreamStartedWithResponse:(id)a0 sessionID:(id)a1 error:(id)a2;
- (void)_handleVideoStopResponse:(id)a0 error:(id)a1 sessionID:(id)a2;
- (void)_handleVideoStreamStopped:(id)a0;
- (void)_registerNotificationHandlers;
- (void)_resetStateWithError:(id)a0;
- (id)initWithCameraProfile:(id)a0 profileUniqueIdentifier:(id)a1;
- (void)setCameraStream:(id)a0;
- (void)startStreamWithPreferences:(id)a0;
- (void)stopStream;

@end
