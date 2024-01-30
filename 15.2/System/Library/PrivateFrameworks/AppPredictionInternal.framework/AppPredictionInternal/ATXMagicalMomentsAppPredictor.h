@class ATXCoreDuetContextHelper, ATXTimeBucketedRateLimiter;

@interface ATXMagicalMomentsAppPredictor : NSObject {
    ATXCoreDuetContextHelper *_contextHelper;
    ATXTimeBucketedRateLimiter *_rateLimiter;
}

+ (id)sharedInstance;

- (void)train;
- (void).cxx_destruct;
- (id)init;
- (id)generateAppLaunchCountedSetFromAppLaunches:(id)a0;
- (id)fetchAppLaunchEventsForTraining;
- (id)addNowPlayingEventsToAppLaunches:(id)a0;

@end
