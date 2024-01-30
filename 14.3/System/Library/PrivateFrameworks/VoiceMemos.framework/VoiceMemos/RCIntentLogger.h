@interface RCIntentLogger : NSObject

+ (void)_donateInteraction:(id)a0;
+ (id)interactionForPlaybackVoiceMemo;
+ (void)deleteInteractionsWithUUID:(id)a0;
+ (void)donateRecordVoiceMemoIntentWithUUID:(id)a0;
+ (void)deleteInteractionsWithUUIDs:(id)a0;
+ (id)interactionForRecordVoiceMemo;
+ (void)donatePlaybackVoiceMemoIntentWithUUID:(id)a0;

@end
