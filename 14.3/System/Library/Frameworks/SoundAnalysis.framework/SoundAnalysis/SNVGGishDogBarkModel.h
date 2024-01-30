@class MLModel;

@interface SNVGGishDogBarkModel : NSObject

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
- (id)predictionFromInput1:(id)a0 stateIn:(id)a1 detectedHistoryIn:(id)a2 error:(id *)a3;

@end
