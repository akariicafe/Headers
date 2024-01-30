@class MLModel;

@interface mac_routine_reg : NSObject

@property (readonly, nonatomic) MLModel *model;

+ (id)URLOfModelInThisBundle;
+ (void)loadContentsOfURL:(id)a0 configuration:(id)a1 completionHandler:(id /* block */)a2;
+ (void)loadWithConfiguration:(id)a0 completionHandler:(id /* block */)a1;

- (id)init;
- (void).cxx_destruct;
- (id)initWithContentsOfURL:(id)a0 error:(id *)a1;
- (id)predictionFromFeatures:(id)a0 error:(id *)a1;
- (id)initWithContentsOfURL:(id)a0 configuration:(id)a1 error:(id *)a2;
- (id)initWithMLModel:(id)a0;
- (id)predictionFromFeatures:(id)a0 options:(id)a1 error:(id *)a2;
- (id)initWithConfiguration:(id)a0 error:(id *)a1;
- (id)predictionsFromInputs:(id)a0 options:(id)a1 error:(id *)a2;
- (id)predictionFromPlugin_battery_level:(double)a0 prev_charge_duration_1:(double)a1 hour:(double)a2 hours_until_use:(double)a3 med_dur_1:(double)a4 med_dur_2:(double)a5 med_dur_4:(double)a6 med_dur_8:(double)a7 med_dur_16:(double)a8 med_dur_24:(double)a9 std_dur_1:(double)a10 std_dur_2:(double)a11 std_dur_4:(double)a12 std_dur_8:(double)a13 std_dur_16:(double)a14 std_dur_24:(double)a15 cnt_dur_24:(double)a16 cnt_dur_2:(double)a17 hour_plus_0:(double)a18 hour_plus_1:(double)a19 hour_plus_2:(double)a20 hour_plus_3:(double)a21 hour_plus_4:(double)a22 hour_plus_5:(double)a23 error:(id *)a24;

@end
