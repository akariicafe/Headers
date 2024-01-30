@protocol VoiceTriggerNotificationInterface;

@interface AVVoiceTriggerNotificationForwarder : NSObject <VoiceTriggerNotificationInterface>

@property (weak, nonatomic) id<VoiceTriggerNotificationInterface> target;

- (void)speakerMuteStateChangedNotification:(BOOL)a0;
- (void)siriClientRecordStateChangedNotification:(BOOL)a0 recordingCount:(unsigned long long)a1;
- (void)voiceTriggerNotification:(id)a0;
- (void)speakerStateChangedNotification:(id)a0;
- (void).cxx_destruct;

@end
