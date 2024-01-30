@interface MPAssistantMusicAssetLoadLogEvent : MPAssistantMusicLogEvent

@property (nonatomic) double duration;

- (long long)eventCode;
- (id)eventPayload;
- (id)eventName;

@end
