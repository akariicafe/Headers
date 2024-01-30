@class NSSet;

@interface _OSHighBatteryDrainHighChargeDurationModelInput : NSObject <MLFeatureProvider>

@property (nonatomic) double activity;
@property (nonatomic) double n_events_prior;
@property (nonatomic) double batt_weekday_percentile_prior;
@property (nonatomic) double dist_from_total_mean;
@property (nonatomic) double drain_since_last_plugin;
@property (nonatomic) double max_batt_12;
@property (nonatomic) double mean_activity;
@property (nonatomic) double mean_daily_plugins;
@property (nonatomic) double net_drain_since_max;
@property (nonatomic) double recent_drain_1;
@property (nonatomic) double recent_drain_15min;
@property (nonatomic) double recent_drain_3;
@property (nonatomic) double start_time_secs;
@property (nonatomic) double user_mean_drain;
@property (nonatomic) double value;
@property (readonly, nonatomic) NSSet *featureNames;

- (id)featureValueForName:(id)a0;
- (id)initWithActivity:(double)a0 n_events_prior:(double)a1 batt_weekday_percentile_prior:(double)a2 dist_from_total_mean:(double)a3 drain_since_last_plugin:(double)a4 max_batt_12:(double)a5 mean_activity:(double)a6 mean_daily_plugins:(double)a7 net_drain_since_max:(double)a8 recent_drain_1:(double)a9 recent_drain_15min:(double)a10 recent_drain_3:(double)a11 start_time_secs:(double)a12 user_mean_drain:(double)a13 value:(double)a14;

@end
