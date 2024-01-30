@class NSSet;

@interface mac_routine_engInput : NSObject <MLFeatureProvider>

@property (nonatomic) double plugin_battery_level;
@property (nonatomic) double prev_charge_duration_1;
@property (nonatomic) double hour;
@property (nonatomic) double hours_until_use;
@property (nonatomic) double med_dur_1;
@property (nonatomic) double med_dur_2;
@property (nonatomic) double med_dur_4;
@property (nonatomic) double med_dur_8;
@property (nonatomic) double med_dur_16;
@property (nonatomic) double med_dur_24;
@property (nonatomic) double std_dur_1;
@property (nonatomic) double std_dur_2;
@property (nonatomic) double std_dur_4;
@property (nonatomic) double std_dur_8;
@property (nonatomic) double std_dur_16;
@property (nonatomic) double std_dur_24;
@property (nonatomic) double cnt_dur_24;
@property (nonatomic) double cnt_dur_2;
@property (nonatomic) double hour_plus_0;
@property (nonatomic) double hour_plus_1;
@property (nonatomic) double hour_plus_2;
@property (nonatomic) double hour_plus_3;
@property (nonatomic) double hour_plus_4;
@property (nonatomic) double hour_plus_5;
@property (readonly, nonatomic) NSSet *featureNames;

- (id)featureValueForName:(id)a0;
- (id)initWithPlugin_battery_level:(double)a0 prev_charge_duration_1:(double)a1 hour:(double)a2 hours_until_use:(double)a3 med_dur_1:(double)a4 med_dur_2:(double)a5 med_dur_4:(double)a6 med_dur_8:(double)a7 med_dur_16:(double)a8 med_dur_24:(double)a9 std_dur_1:(double)a10 std_dur_2:(double)a11 std_dur_4:(double)a12 std_dur_8:(double)a13 std_dur_16:(double)a14 std_dur_24:(double)a15 cnt_dur_24:(double)a16 cnt_dur_2:(double)a17 hour_plus_0:(double)a18 hour_plus_1:(double)a19 hour_plus_2:(double)a20 hour_plus_3:(double)a21 hour_plus_4:(double)a22 hour_plus_5:(double)a23;

@end
