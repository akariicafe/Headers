@class CACRecordedUserActionFlow, NSMutableArray;

@interface CACRecordedUserActionManager : NSObject {
    NSMutableArray *_recordedUserActions;
    CACRecordedUserActionFlow *_executingUserActionFlow;
}

@property (readonly) BOOL isRecording;
@property (readonly) BOOL isExecuting;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)init;
- (void)cancelExecution;
- (void)addRecognizedSpokenCommand:(id)a0;
- (void)startRecordingUserActions;
- (void)stopRecordingUserActions;
- (id)recordedUserActionFlow;
- (void)beginExecutingRecordedUserActionFlow:(id)a0 completionBlock:(id /* block */)a1;

@end
