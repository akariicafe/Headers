@interface ATXHeroAppLaunchShadowLoggingPipeline : NSObject

- (void)logDailyAppLaunches;
- (id)_populateAppLaunchContexts:(id)a0 sortedContextEvents:(id)a1;

@end
