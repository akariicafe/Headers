@interface MPAssistantMusicAssetLoadLogEvent : MPAssistantMusicLogEvent

@property (nonatomic) double duration;

- (id)eventName;
- (long long)eventCode;
- (id)eventPayload;

@end
