@class MLModel;

@interface gbtClassifier : NSObject

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
- (id)predictionFromPlugin_hour:(double)a0 plugin_battery_level:(double)a1 device_activity:(double)a2 hour:(double)a3 battery_level:(double)a4 heuristic_bin:(double)a5 plugin_location:(double)a6 hour_bin_id:(double)a7 time_from_plugin:(double)a8 avg_dur:(double)a9 cnt_dur:(double)a10 error:(id *)a11;

@end
