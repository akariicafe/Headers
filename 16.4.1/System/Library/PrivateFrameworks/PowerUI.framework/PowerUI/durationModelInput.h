@class NSSet;

@interface durationModelInput : NSObject <MLFeatureProvider>

@property (nonatomic) double plugin_battery_level;
@property (nonatomic) double time_from_plugin;
@property (nonatomic) double med_dur_1;
@property (nonatomic) double med_dur_2;
@property (nonatomic) double med_dur_4;
@property (nonatomic) double med_dur_8;
@property (nonatomic) double med_dur_16;
@property (nonatomic) double med_dur_24;
@property (nonatomic) double cnt_dur_1;
@property (nonatomic) double cnt_dur_2;
@property (nonatomic) double cnt_dur_4;
@property (nonatomic) double cnt_dur_8;
@property (nonatomic) double cnt_dur_16;
@property (nonatomic) double cnt_dur_24;
@property (nonatomic) double std_dur_1;
@property (nonatomic) double std_dur_2;
@property (nonatomic) double std_dur_4;
@property (nonatomic) double std_dur_8;
@property (nonatomic) double std_dur_16;
@property (nonatomic) double std_dur_24;
@property (nonatomic) double weekday_med_dur_1;
@property (nonatomic) double weekday_med_dur_2;
@property (nonatomic) double weekday_med_dur_4;
@property (nonatomic) double weekday_med_dur_8;
@property (nonatomic) double weekday_med_dur_24;
@property (nonatomic) double weekday_std_dur_4;
@property (readonly, nonatomic) NSSet *featureNames;

- (id)featureValueForName:(id)a0;
- (id)initWithPlugin_battery_level:(double)a0 time_from_plugin:(double)a1 med_dur_1:(double)a2 med_dur_2:(double)a3 med_dur_4:(double)a4 med_dur_8:(double)a5 med_dur_16:(double)a6 med_dur_24:(double)a7 cnt_dur_1:(double)a8 cnt_dur_2:(double)a9 cnt_dur_4:(double)a10 cnt_dur_8:(double)a11 cnt_dur_16:(double)a12 cnt_dur_24:(double)a13 std_dur_1:(double)a14 std_dur_2:(double)a15 std_dur_4:(double)a16 std_dur_8:(double)a17 std_dur_16:(double)a18 std_dur_24:(double)a19 weekday_med_dur_1:(double)a20 weekday_med_dur_2:(double)a21 weekday_med_dur_4:(double)a22 weekday_med_dur_8:(double)a23 weekday_med_dur_24:(double)a24 weekday_std_dur_4:(double)a25;

@end
