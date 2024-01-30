@class NSSet;

@interface easy_engageInput : NSObject <MLFeatureProvider>

@property (nonatomic) double classic_time_between_uses_med_dur_1;
@property (nonatomic) double classic_time_between_uses_med_dur_2;
@property (nonatomic) double classic_time_between_uses_med_dur_4;
@property (nonatomic) double classic_time_between_uses_med_dur_24;
@property (nonatomic) double classic_time_between_uses_std_dur_1;
@property (nonatomic) double classic_time_between_uses_std_dur_2;
@property (nonatomic) double classic_time_between_uses_std_dur_4;
@property (nonatomic) double classic_time_between_uses_std_dur_24;
@property (nonatomic) double hour;
@property (nonatomic) double is_weekend;
@property (nonatomic) double hour_plus_0;
@property (nonatomic) double hour_plus_1;
@property (nonatomic) double hour_plus_2;
@property (nonatomic) double hour_plus_3;
@property (nonatomic) double hour_plus_4;
@property (nonatomic) double hour_plus_5;
@property (nonatomic) double hours_until_use;
@property (nonatomic) double meaningful_undercharge_rolling_average;
@property (readonly, nonatomic) NSSet *featureNames;

- (id)featureValueForName:(id)a0;
- (id)initWithClassic_time_between_uses_med_dur_1:(double)a0 classic_time_between_uses_med_dur_2:(double)a1 classic_time_between_uses_med_dur_4:(double)a2 classic_time_between_uses_med_dur_24:(double)a3 classic_time_between_uses_std_dur_1:(double)a4 classic_time_between_uses_std_dur_2:(double)a5 classic_time_between_uses_std_dur_4:(double)a6 classic_time_between_uses_std_dur_24:(double)a7 hour:(double)a8 is_weekend:(double)a9 hour_plus_0:(double)a10 hour_plus_1:(double)a11 hour_plus_2:(double)a12 hour_plus_3:(double)a13 hour_plus_4:(double)a14 hour_plus_5:(double)a15 hours_until_use:(double)a16 meaningful_undercharge_rolling_average:(double)a17;

@end
