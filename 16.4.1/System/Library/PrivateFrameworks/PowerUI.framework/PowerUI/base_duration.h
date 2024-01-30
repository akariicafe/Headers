@class MLModel;

@interface base_duration : NSObject

@property (readonly, nonatomic) MLModel *model;

+ (void)loadContentsOfURL:(id)a0 configuration:(id)a1 completionHandler:(id /* block */)a2;
+ (id)URLOfModelInThisBundle;
+ (void)loadWithConfiguration:(id)a0 completionHandler:(id /* block */)a1;

- (id)predictionFromFeatures:(id)a0 options:(id)a1 error:(id *)a2;
- (id)predictionFromFeatures:(id)a0 error:(id *)a1;
- (id)init;
- (id)initWithContentsOfURL:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0 error:(id *)a1;
- (id)initWithContentsOfURL:(id)a0 configuration:(id)a1 error:(id *)a2;
- (id)initWithMLModel:(id)a0;
- (id)predictionsFromInputs:(id)a0 options:(id)a1 error:(id *)a2;
- (id)predictionFromClassic_time_between_uses_med_dur_1:(double)a0 classic_time_between_uses_med_dur_2:(double)a1 classic_time_between_uses_med_dur_4:(double)a2 classic_time_between_uses_med_dur_24:(double)a3 classic_time_between_uses_std_dur_1:(double)a4 classic_time_between_uses_std_dur_2:(double)a5 classic_time_between_uses_std_dur_4:(double)a6 classic_time_between_uses_std_dur_24:(double)a7 hour:(double)a8 is_weekend:(double)a9 hour_plus_0:(double)a10 hour_plus_1:(double)a11 hour_plus_2:(double)a12 hour_plus_3:(double)a13 hour_plus_4:(double)a14 hour_plus_5:(double)a15 hours_until_use:(double)a16 meaningful_undercharge_rolling_average:(double)a17 error:(id *)a18;

@end
