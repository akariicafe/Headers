@class BMAppLaunchStream, ATXBiomeLocationStream;

@interface ATXHeroAppLaunchShadowLoggingPipeline : NSObject {
    BMAppLaunchStream *_appLaunchStream;
    ATXBiomeLocationStream *_locationStream;
}

- (id)init;
- (void).cxx_destruct;
- (id)_populateAppLaunchContexts:(id)a0 sortedLocationEvents:(id)a1;
- (id)initFromAppLaunchStream:(id)a0 locationStream:(id)a1;
- (void)logDailyAppLaunches;
- (void)logDailyAppLaunchesWithXPCActivity:(id)a0;

@end
