@class NSString, HMCameraStream;
@protocol _HMCameraStreamControlDelegate;

@interface _HMCameraStreamControl : _HMCameraControl <HMFLogging>

@property (nonatomic) unsigned long long streamState;
@property (copy, nonatomic) NSString *streamSessionID;
@property (weak, nonatomic) id<_HMCameraStreamControlDelegate> delegate;
@property (readonly, nonatomic) HMCameraStream *cameraStream;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithCameraProfile:(id)a0 service:(id)a1 profileUniqueIdentifier:(id)a2;
- (void)startStreamWithPreferences:(id)a0;
- (void)stopStream;
- (void)_registerNotificationHandlers;
- (void)setCameraStream:(id)a0;
- (void)_resetState:(id)a0;
- (void)_handleVideoStreamStopped:(id)a0;
- (void)_startStreamWithPreferences:(id)a0;
- (void)_handleNegotiateStreamResponse:(id)a0 streamPreferences:(id)a1 sessionID:(id)a2 error:(id)a3;
- (void)_handleVideoStreamStartResponse:(id)a0 streamPreferences:(id)a1 error:(id)a2 sessionID:(id)a3;
- (void)_stopStream;
- (void)_handleVideoStopResponse:(id)a0 error:(id)a1 sessionID:(id)a2;
- (void)_callVideoStartedDelegate;
- (void)_callVideoStoppedDelegate:(id)a0;

@end
