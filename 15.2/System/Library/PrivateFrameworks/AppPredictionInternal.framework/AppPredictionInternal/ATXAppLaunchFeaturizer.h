@class NSArray, ATXFreeMomentDataSource, NSDictionary;

@interface ATXAppLaunchFeaturizer : NSObject {
    ATXFreeMomentDataSource *_freeMomentDataSource;
    NSArray *_rankedApps;
    NSDictionary *_appCategories;
}

- (void).cxx_destruct;
- (id)initWithFreeMomentDataSource:(id)a0;
- (void)updateFeatureVectorWithAppLaunchEvents:(id)a0;
- (id)initWithFreeMomentDataSource:(id)a0 rankedApps:(id)a1 appCategories:(id)a2;
- (BOOL)isWorkMode;
- (BOOL)isAppAntiCorrelatedWithWorkMode:(id)a0;
- (id)topNPercentileApps:(unsigned long long)a0 rankedApps:(id)a1;
- (id)currentTimeAtLocalTimeZone;

@end
