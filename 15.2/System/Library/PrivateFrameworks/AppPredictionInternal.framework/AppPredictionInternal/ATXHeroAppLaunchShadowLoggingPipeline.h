@class BMAppLaunchStream, ATXBiomeLocationStream;

@interface ATXHeroAppLaunchShadowLoggingPipeline : NSObject {
    BMAppLaunchStream *_appLaunchStream;
    ATXBiomeLocationStream *_locationStream;
}

- (void).cxx_destruct;
- (id)init;
- (void)logDailyAppLaunchesWithXPCActivity:(id)a0;
- (id)initFromAppLaunchStream:(id)a0 locationStream:(id)a1;
- (id)_populateAppLaunchContexts:(id)a0 sortedLocationEvents:(id)a1;
- (void)logDailyAppLaunches;

@end
