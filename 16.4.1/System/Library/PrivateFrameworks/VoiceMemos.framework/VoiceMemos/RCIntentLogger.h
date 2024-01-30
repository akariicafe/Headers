@interface RCIntentLogger : NSObject

+ (id)interactionForPlaybackVoiceMemo;
+ (void)deleteInteractionsWithUUID:(id)a0;
+ (void)_donateInteraction:(id)a0;
+ (void)donatePlaybackVoiceMemoIntentWithUUID:(id)a0;
+ (id)interactionForRecordVoiceMemo;
+ (void)donateRecordVoiceMemoIntentWithUUID:(id)a0;
+ (void)deleteInteractionsWithUUIDs:(id)a0;

@end
