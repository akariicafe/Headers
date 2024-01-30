@class MLModel;

@interface ATXNotificationsSuggestionLR : NSObject

@property (readonly, nonatomic) MLModel *model;

+ (id)URLOfModelInThisBundle;
+ (void)loadContentsOfURL:(id)a0 configuration:(id)a1 completionHandler:(id /* block */)a2;
+ (void)loadWithConfiguration:(id)a0 completionHandler:(id /* block */)a1;

- (id)init;
- (void).cxx_destruct;
- (id)initWithContentsOfURL:(id)a0 error:(id *)a1;
- (id)predictionFromFeatures:(id)a0 error:(id *)a1;
- (id)initWithContentsOfURL:(id)a0 configuration:(id)a1 error:(id *)a2;
- (id)predictionFromAppPopularity:(double)a0 totalLaunches:(double)a1 received:(double)a2 ignored:(double)a3 cleared:(double)a4 engaged:(double)a5 defaultActions:(double)a6 orbs:(double)a7 suppActions:(double)a8 tapCoalesce:(double)a9 engage_rate:(double)a10 app_bias:(double)a11 error:(id *)a12;
- (id)initWithMLModel:(id)a0;
- (id)predictionFromFeatures:(id)a0 options:(id)a1 error:(id *)a2;
- (id)initWithConfiguration:(id)a0 error:(id *)a1;
- (id)predictionsFromInputs:(id)a0 options:(id)a1 error:(id *)a2;

@end
