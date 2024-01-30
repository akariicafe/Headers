@class NSString, AFSpeechRecordingAlertBehavior;

@interface _AFSpeechRecordingAlertBehaviorMutation : NSObject <AFSpeechRecordingAlertBehaviorMutating> {
    AFSpeechRecordingAlertBehavior *_base;
    long long _style;
    long long _beepSoundID;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasStyle : 1; unsigned char hasBeepSoundID : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isDirty;
- (id)initWithBase:(id)a0;
- (void).cxx_destruct;
- (void)setStyle:(long long)a0;
- (void)setBeepSoundID:(long long)a0;
- (long long)getBeepSoundID;
- (long long)getStyle;

@end
