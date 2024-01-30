@class MLModel;

@interface _OSHighBatteryDrainLowChargeDurationModel : NSObject

@property (readonly, nonatomic) MLModel *model;

+ (id)urlOfModelInThisBundle;

- (id)predictionFromFeatures:(id)a0 options:(id)a1 error:(id *)a2;
- (id)predictionFromFeatures:(id)a0 error:(id *)a1;
- (id)init;
- (id)initWithContentsOfURL:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0 error:(id *)a1;
- (id)initWithContentsOfURL:(id)a0 configuration:(id)a1 error:(id *)a2;
- (id)predictionsFromInputs:(id)a0 options:(id)a1 error:(id *)a2;
- (id)predictionFromActivity:(double)a0 n_events_prior:(double)a1 batt_weekday_percentile_prior:(double)a2 dist_from_total_mean:(double)a3 drain_since_last_plugin:(double)a4 max_batt_12:(double)a5 mean_activity:(double)a6 mean_daily_plugins:(double)a7 net_drain_since_max:(double)a8 recent_drain_1:(double)a9 recent_drain_15min:(double)a10 recent_drain_3:(double)a11 start_time_secs:(double)a12 user_mean_drain:(double)a13 value:(double)a14 error:(id *)a15;

@end
