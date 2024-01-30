@interface RCIntentLogger : NSObject

+ (void)_donateInteraction:(id)a0;
+ (void)deleteInteractionsWithUUID:(id)a0;
+ (id)interactionForRecordVoiceMemo;
+ (id)interactionForPlaybackVoiceMemo;
+ (void)donateRecordVoiceMemoIntentWithUUID:(id)a0;
+ (void)donatePlaybackVoiceMemoIntentWithUUID:(id)a0;
+ (void)deleteInteractionsWithUUIDs:(id)a0;

@end
