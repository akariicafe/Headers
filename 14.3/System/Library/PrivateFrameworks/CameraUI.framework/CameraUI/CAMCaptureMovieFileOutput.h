@class CAMCaptureEngine, NSMutableDictionary, NSDictionary, NSString, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, AVCaptureFileOutputRecordingDelegate;

@interface CAMCaptureMovieFileOutput : AVCaptureMovieFileOutput <AVCaptureFileOutputRecordingDelegate>

@property (readonly, weak, nonatomic) CAMCaptureEngine *_captureEngine;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_userInfoQueue;
@property (readonly, nonatomic) NSMutableDictionary *_userInfoBySettingsID;
@property (readonly, nonatomic) NSMutableArray *_removeOnCompletionSettingsIDs;
@property (copy, nonatomic) NSDictionary *currentUserInfo;
@property (copy, nonatomic) NSDictionary *userInfoForNextCapture;
@property (weak, nonatomic) id<AVCaptureFileOutputRecordingDelegate> wrappedDelegate;
@property (copy, nonatomic) NSDictionary *userInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stopRecording;
- (void).cxx_destruct;
- (void)startRecordingToOutputFileURL:(id)a0 recordingDelegate:(id)a1;
- (void)captureOutput:(id)a0 didFinishRecordingToOutputFileAtURL:(id)a1 fromConnections:(id)a2 error:(id)a3;
- (id)initWithEngine:(id)a0;
- (void)handleNotification:(id)a0 payload:(id)a1;
- (void)captureOutput:(id)a0 didStartRecordingToOutputFileAtURL:(id)a1 fromConnections:(id)a2;

@end
