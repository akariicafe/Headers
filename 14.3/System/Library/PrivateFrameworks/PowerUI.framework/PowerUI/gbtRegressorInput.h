@class NSSet;

@interface gbtRegressorInput : NSObject <MLFeatureProvider>

@property (nonatomic) double plugin_hour;
@property (nonatomic) double plugin_battery_level;
@property (nonatomic) double hour;
@property (nonatomic) double time_from_plugin;
@property (nonatomic) double cnt_dur_1;
@property (nonatomic) double avg_dur_1;
@property (readonly, nonatomic) NSSet *featureNames;

- (id)featureValueForName:(id)a0;
- (id)initWithPlugin_hour:(double)a0 plugin_battery_level:(double)a1 hour:(double)a2 time_from_plugin:(double)a3 cnt_dur_1:(double)a4 avg_dur_1:(double)a5;

@end
