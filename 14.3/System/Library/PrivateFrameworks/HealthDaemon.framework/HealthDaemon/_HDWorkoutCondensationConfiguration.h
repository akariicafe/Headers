@class HDSQLitePredicate, HDProfile, _HDWorkoutCondenserAnalyticsAccumulator;

@interface _HDWorkoutCondensationConfiguration : NSObject

@property (readonly, weak, nonatomic) HDProfile *profile;
@property (readonly, nonatomic) HDSQLitePredicate *predicate;
@property (readonly, nonatomic) double minimumWorkoutDuration;
@property (readonly, nonatomic) long long minimumSeriesSize;
@property (readonly, nonatomic) long long maximumSeriesSize;
@property (readonly, nonatomic) long long deletedSampleThreshold;
@property (readonly, nonatomic) _HDWorkoutCondenserAnalyticsAccumulator *analyticsAccumulator;

+ (id)configurationWithProfile:(id)a0 minimumSeriesSize:(long long)a1 maximumSeriesSize:(long long)a2 deletedSampleThreshold:(long long)a3 analyticsAccumulator:(id)a4 error:(id *)a5;

- (void).cxx_destruct;
- (id)initWithProfile:(id)a0 predicate:(id)a1 minimumWorkoutDuration:(double)a2 minimumSeriesSize:(long long)a3 maximumSeriesSize:(long long)a4 deletedSampleThreshold:(long long)a5 analyticsAccumulator:(id)a6;

@end
