@interface ATXNowPlayingDuetDataProvider : ATXDuetDataProvider

+ (Class)supportedDuetEventClass;
+ (long long)supportedCoreDuetStream;

- (id)convertNowPlayingEventsToAppLaunchEvents:(id)a0;
- (id)mostRecentPlayingNowPlayingEventWithMaxAgeInSeconds:(double)a0;
- (id)playbackEventsAfterSecondsOfInactivity:(double)a0 betweenStartDate:(id)a1 endDate:(id)a2;

@end
