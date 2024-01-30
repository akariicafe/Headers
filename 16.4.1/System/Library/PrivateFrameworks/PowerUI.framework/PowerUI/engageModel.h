@class MLModel;

@interface engageModel : NSObject

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
- (id)predictionFromPlugin_battery_level:(double)a0 time_from_plugin:(double)a1 med_dur_1:(double)a2 med_dur_2:(double)a3 med_dur_4:(double)a4 med_dur_8:(double)a5 med_dur_16:(double)a6 med_dur_24:(double)a7 cnt_dur_1:(double)a8 cnt_dur_2:(double)a9 cnt_dur_4:(double)a10 cnt_dur_8:(double)a11 cnt_dur_16:(double)a12 cnt_dur_24:(double)a13 std_dur_1:(double)a14 std_dur_2:(double)a15 std_dur_4:(double)a16 std_dur_8:(double)a17 std_dur_16:(double)a18 std_dur_24:(double)a19 weekday_med_dur_1:(double)a20 weekday_med_dur_2:(double)a21 weekday_med_dur_4:(double)a22 weekday_med_dur_8:(double)a23 weekday_med_dur_24:(double)a24 weekday_std_dur_4:(double)a25 error:(id *)a26;

@end
