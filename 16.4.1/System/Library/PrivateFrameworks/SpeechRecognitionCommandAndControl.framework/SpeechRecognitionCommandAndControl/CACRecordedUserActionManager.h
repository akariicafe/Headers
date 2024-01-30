@class CACRecordedUserActionFlow, NSMutableArray;

@interface CACRecordedUserActionManager : NSObject {
    NSMutableArray *_recordedUserActions;
    CACRecordedUserActionFlow *_executingUserActionFlow;
}

@property (readonly) BOOL isRecording;
@property (readonly) BOOL isExecuting;

+ (id)sharedManager;

- (id)init;
- (void).cxx_destruct;
- (void)cancelExecution;
- (void)addRecognizedSpokenCommand:(id)a0;
- (void)beginExecutingRecordedUserActionFlow:(id)a0 completionBlock:(id /* block */)a1;
- (id)recordedUserActionFlow;
- (void)startRecordingUserActions;
- (void)stopRecordingUserActions;

@end
