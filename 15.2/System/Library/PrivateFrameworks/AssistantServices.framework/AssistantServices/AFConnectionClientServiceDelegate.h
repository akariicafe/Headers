@class NSString, NSObject, AFConnection;
@protocol OS_dispatch_queue;

@interface AFConnectionClientServiceDelegate : NSObject <AFClientServiceDelegate> {
    AFConnection *_connection;
    NSObject<OS_dispatch_queue> *_targetQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (oneway void)shouldSpeakChanged:(BOOL)a0;
- (oneway void)audioSessionIDChanged:(unsigned int)a0;
- (oneway void)requestHandleCommand:(id)a0 reply:(id /* block */)a1;
- (oneway void)requestRequestedOpenApplicationWithBundleID:(id)a0 URL:(id)a1 reply:(id /* block */)a2;
- (oneway void)requestRequestedOpenURL:(id)a0 reply:(id /* block */)a1;
- (oneway void)requestRequestedDismissAssistant;
- (id)_connectionDelegate;
- (oneway void)quickStopWasHandledWithActions:(unsigned long long)a0;
- (oneway void)acousticIDRequestWillStart;
- (oneway void)musicWasDetected;
- (oneway void)acousticIDRequestDidFinishWithSuccess:(BOOL)a0;
- (oneway void)setUserActivityInfo:(id)a0 webpageURL:(id)a1;
- (oneway void)invalidateCurrentUserActivity;
- (oneway void)getBulletinContext:(id /* block */)a0;
- (oneway void)extensionRequestWillStartForApplication:(id)a0;
- (oneway void)extensionRequestFinishedForApplication:(id)a0 error:(id)a1;
- (oneway void)speechRecordingWillBeginWithInputAudioPowerXPCWrapper:(id)a0 reply:(id /* block */)a1;
- (oneway void)speechRecordingStartpointDetectedWithReply:(id /* block */)a0;
- (oneway void)startUIRequestWithInfo:(id)a0 completion:(id /* block */)a1;
- (oneway void)speechRecordingDidBeginOnAVRecordRoute:(id)a0 audioSessionID:(unsigned int)a1 reply:(id /* block */)a2;
- (oneway void)speechRecordingDidChangeAVRecordRoute:(id)a0 isDucking:(BOOL)a1 isTwoShot:(BOOL)a2 speechEndHostTime:(unsigned long long)a3 reply:(id /* block */)a4;
- (oneway void)speechRecordingPerformTwoShotPromptWithType:(long long)a0 reply:(id /* block */)a1;
- (oneway void)speechRecordingDidEndWithReply:(id /* block */)a0;
- (oneway void)speechRecordingDidCancelWithReply:(id /* block */)a0;
- (oneway void)speechRecordingDidFail:(id)a0 reply:(id /* block */)a1;
- (oneway void)speechRecognized:(id)a0;
- (oneway void)speechRecognizedAdditionalInterpretation:(id)a0 refId:(id)a1;
- (oneway void)speechRecognizedPartialResult:(id)a0;
- (oneway void)speechRecognitionDidFail:(id)a0;
- (oneway void)speechRecordingDidUpdateRecognitionPhrases:(id)a0 utterances:(id)a1 refId:(id)a2;
- (oneway void)speechRecordingWillBeginRecognitionUpdateForTask:(id)a0;
- (oneway void)willStopRecordingWithSignpostID:(unsigned long long)a0;
- (oneway void)aceConnectionWillRetryOnError:(id)a0;
- (oneway void)audioSessionDidBeginInterruptionWithUserInfo:(id)a0;
- (oneway void)audioSessionDidEndInterruption:(BOOL)a0 userInfo:(id)a1;
- (oneway void)audioPlaybackRequestWillStart:(id)a0;
- (oneway void)audioPlaybackRequestDidStart:(id)a0;
- (oneway void)audioPlaybackRequestDidStop:(id)a0 error:(id)a1;
- (oneway void)startPlaybackDidFail:(long long)a0;
- (oneway void)willProcessStartPlayback:(long long)a0 intent:(id)a1 completion:(id /* block */)a2;
- (oneway void)audioSessionWillBecomeActive:(BOOL)a0;
- (oneway void)audioSessionDidBecomeActive:(BOOL)a0;
- (oneway void)willProcessAppLaunchWithBundleIdentifier:(id)a0;
- (oneway void)appLaunchFailedWithBundleIdentifier:(id)a0;
- (oneway void)requestDidReceiveCommand:(id)a0 reply:(id /* block */)a1;
- (void).cxx_destruct;
- (oneway void)cacheImage:(id)a0;
- (id)initWithConnection:(id)a0 targetQueue:(id)a1;
- (oneway void)startUIRequestWithText:(id)a0 completion:(id /* block */)a1;

@end
