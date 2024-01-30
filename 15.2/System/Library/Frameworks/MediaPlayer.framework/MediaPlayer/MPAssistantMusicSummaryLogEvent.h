@class NSNumber;

@interface MPAssistantMusicSummaryLogEvent : MPAssistantMusicLogEvent

@property (nonatomic) double blockingSecureKeyLoadDuration;
@property (copy, nonatomic) NSNumber *perceivedTotalStartupTime;
@property (nonatomic) double tracklistLoadDuration;

- (long long)eventCode;
- (id)eventPayload;
- (void).cxx_destruct;
- (id)eventName;

@end
