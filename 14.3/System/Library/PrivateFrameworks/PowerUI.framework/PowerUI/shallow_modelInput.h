@class NSSet;

@interface shallow_modelInput : NSObject <MLFeatureProvider>

@property (nonatomic) double plugin_battery_level;
@property (nonatomic) double battery_duration_1;
@property (nonatomic) double battery_duration_2;
@property (nonatomic) double battery_duration_3;
@property (nonatomic) double battery_duration_4;
@property (readonly, nonatomic) NSSet *featureNames;

- (id)featureValueForName:(id)a0;
- (id)initWithPlugin_battery_level:(double)a0 battery_duration_1:(double)a1 battery_duration_2:(double)a2 battery_duration_3:(double)a3 battery_duration_4:(double)a4;

@end
