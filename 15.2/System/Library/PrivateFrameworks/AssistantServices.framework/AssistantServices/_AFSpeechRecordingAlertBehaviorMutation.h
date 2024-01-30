@class NSString, AFSpeechRecordingAlertBehavior;

@interface _AFSpeechRecordingAlertBehaviorMutation : NSObject <AFSpeechRecordingAlertBehaviorMutating> {
    AFSpeechRecordingAlertBehavior *_baseModel;
    long long _style;
    long long _beepSoundID;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasStyle : 1; unsigned char hasBeepSoundID : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithBaseModel:(id)a0;
- (id)generate;
- (void)setStyle:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setBeepSoundID:(long long)a0;

@end
