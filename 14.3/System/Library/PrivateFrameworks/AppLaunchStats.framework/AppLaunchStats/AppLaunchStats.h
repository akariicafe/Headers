@interface AppLaunchStats : NSObject

+ (id)log;

- (void)preWarmHasStarted:(id)a0 withResult:(unsigned long long)a1 withTriggerType:(int)a2 withSequence:(unsigned long long)a3;
- (void)preWarmHasEnded:(id)a0 withResult:(unsigned long long)a1 withTriggerType:(int)a2 withSequence:(unsigned long long)a3;
- (void)okToLaunchMessageFor:(id)a0 forReasons:(id)a1 withHandler:(id /* block */)a2;
- (void)setAppLaunchRecommendationHandler:(id /* block */)a0;
- (void)setPendingWorkQueue:(id)a0;
- (void)setDelayLaunchFor:(id)a0 with:(double)a1;
- (void)okToPassPushMessageForTopic:(id)a0 onQueue:(id)a1 withHandler:(id /* block */)a2;
- (void)setAppLaunchStatsDelegate:(id)a0 queue:(id)a1;
- (void)setAppLaunchStatsPendingHandler:(id /* block */)a0 queue:(id)a1;

@end
