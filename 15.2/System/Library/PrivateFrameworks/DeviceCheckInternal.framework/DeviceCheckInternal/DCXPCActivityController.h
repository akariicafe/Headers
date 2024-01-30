@interface DCXPCActivityController : NSObject

+ (id)sharedInstance;

- (void)start;
- (void)_registerActivityWithInterval:(double)a0;
- (void)_performMetadataRefreshForActivity:(id)a0;
- (id)_activityCriteriaWithFrequency:(double)a0;
- (void)updateActivityScheduleWithAsset:(id)a0;

@end
