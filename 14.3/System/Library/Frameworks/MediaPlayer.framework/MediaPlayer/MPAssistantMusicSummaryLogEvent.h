@class NSNumber;

@interface MPAssistantMusicSummaryLogEvent : MPAssistantMusicLogEvent

@property (nonatomic) double blockingSecureKeyLoadDuration;
@property (copy, nonatomic) NSNumber *perceivedTotalStartupTime;
@property (nonatomic) double tracklistLoadDuration;

- (id)eventName;
- (void).cxx_destruct;
- (long long)eventCode;
- (id)eventPayload;

@end
