@protocol VoiceTriggerNotificationInterface;

@interface AVVoiceTriggerNotificationForwarder : NSObject <VoiceTriggerNotificationInterface>

@property (nonatomic) id<VoiceTriggerNotificationInterface> target;

- (void)voiceTriggerNotification:(id)a0;
- (void)siriClientRecordStateChangedNotification:(BOOL)a0 recordingCount:(unsigned long long)a1;
- (void)speakerMuteStateChangedNotification:(BOOL)a0;
- (void)speakerStateChangedNotification:(id)a0;

@end
