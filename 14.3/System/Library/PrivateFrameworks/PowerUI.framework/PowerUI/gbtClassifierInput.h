@class NSSet;

@interface gbtClassifierInput : NSObject <MLFeatureProvider>

@property (nonatomic) double plugin_hour;
@property (nonatomic) double plugin_battery_level;
@property (nonatomic) double device_activity;
@property (nonatomic) double hour;
@property (nonatomic) double battery_level;
@property (nonatomic) double heuristic_bin;
@property (nonatomic) double plugin_location;
@property (nonatomic) double hour_bin_id;
@property (nonatomic) double time_from_plugin;
@property (nonatomic) double avg_dur;
@property (nonatomic) double cnt_dur;
@property (readonly, nonatomic) NSSet *featureNames;

- (id)featureValueForName:(id)a0;
- (id)initWithPlugin_hour:(double)a0 plugin_battery_level:(double)a1 device_activity:(double)a2 hour:(double)a3 battery_level:(double)a4 heuristic_bin:(double)a5 plugin_location:(double)a6 hour_bin_id:(double)a7 time_from_plugin:(double)a8 avg_dur:(double)a9 cnt_dur:(double)a10;

@end
