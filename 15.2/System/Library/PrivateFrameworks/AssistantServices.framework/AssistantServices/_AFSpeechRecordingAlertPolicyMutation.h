@class NSString, AFSpeechRecordingAlertBehavior, AFSpeechRecordingAlertPolicy;

@interface _AFSpeechRecordingAlertPolicyMutation : NSObject <AFSpeechRecordingAlertPolicyMutating> {
    AFSpeechRecordingAlertPolicy *_baseModel;
    AFSpeechRecordingAlertBehavior *_startingAlertBehavior;
    AFSpeechRecordingAlertBehavior *_stoppedAlertBehavior;
    AFSpeechRecordingAlertBehavior *_stoppedWithErrorAlertBehavior;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasStartingAlertBehavior : 1; unsigned char hasStoppedAlertBehavior : 1; unsigned char hasStoppedWithErrorAlertBehavior : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithBaseModel:(id)a0;
- (id)generate;
- (void)setStartingAlertBehavior:(id)a0;
- (void)setStoppedAlertBehavior:(id)a0;
- (void)setStoppedWithErrorAlertBehavior:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
