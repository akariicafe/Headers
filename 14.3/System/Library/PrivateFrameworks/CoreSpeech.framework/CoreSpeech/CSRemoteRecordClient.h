@class NSObject;
@protocol CSRemoteRecordClientDelegate, OS_dispatch_queue;

@interface CSRemoteRecordClient : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (weak, nonatomic) id<CSRemoteRecordClientDelegate> delegate;

- (BOOL)isRecording;
- (BOOL)stopRecording:(id *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)isConnected;
- (id)voiceTriggerEventInfo;
- (BOOL)waitingForConnection:(double)a0 error:(id *)a1;
- (BOOL)startRecordingWithOptions:(id)a0 error:(id *)a1;
- (BOOL)didPlayEndpointBeep;
- (BOOL)hasPendingTwoShotBeep;

@end
