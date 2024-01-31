@protocol VoiceTriggerNotificationInterface;

@interface AVVoiceTriggerNotificationForwarder : NSObject <VoiceTriggerNotificationInterface>

@property (weak, nonatomic) id<VoiceTriggerNotificationInterface> target;

- (void)siriClientRecordStateChangedNotification:(BOOL)a0 recordingCount:(unsigned long long)a1;
- (void)speakerStateChangedNotification:(id)a0;
- (void)voiceTriggerNotification:(id)a0;
- (void)speakerMuteStateChangedNotification:(BOOL)a0;
- (void)portStateChangedNotification:(id)a0;
- (void).cxx_destruct;

@end
