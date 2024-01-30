@class MLModel;

@interface watch_engage : NSObject

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
- (id)predictionFromPlugin_hour:(double)a0 plugin_battery_level:(double)a1 time_from_plugin:(double)a2 med_dur_1:(double)a3 med_dur_2:(double)a4 med_dur_4:(double)a5 med_dur_8:(double)a6 med_dur_16:(double)a7 med_dur_24:(double)a8 cnt_dur_1:(double)a9 cnt_dur_2:(double)a10 cnt_dur_4:(double)a11 cnt_dur_8:(double)a12 cnt_dur_16:(double)a13 cnt_dur_24:(double)a14 std_dur_1:(double)a15 std_dur_2:(double)a16 std_dur_4:(double)a17 std_dur_8:(double)a18 std_dur_16:(double)a19 std_dur_24:(double)a20 error:(id *)a21;

@end
