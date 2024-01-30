@interface SiriAnalyticsLogicalClockStatistics : NSObject

@property (nonatomic) unsigned long long startedOn;
@property (nonatomic) unsigned long long endedOn;
@property (nonatomic) unsigned long long lastMessageEmittedOn;
@property (nonatomic) unsigned long long messagesEmitted;
@property (readonly, nonatomic) unsigned long long clockAgeInNanoseconds;
@property (readonly, nonatomic) unsigned long long utilizationLifetimeInNanoseconds;

- (void)noteMessageEmitted;

@end
