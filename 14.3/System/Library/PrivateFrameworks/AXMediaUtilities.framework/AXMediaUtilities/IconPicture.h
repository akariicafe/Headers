@class MLModel;

@interface IconPicture : NSObject

@property (readonly, nonatomic) MLModel *model;

+ (void)loadContentsOfURL:(id)a0 configuration:(id)a1 completionHandler:(id /* block */)a2;

- (void).cxx_destruct;
- (id)initWithContentsOfURL:(id)a0 error:(id *)a1;
- (id)predictionFromFeatures:(id)a0 error:(id *)a1;
- (id)initWithContentsOfURL:(id)a0 configuration:(id)a1 error:(id *)a2;
- (id)initWithMLModel:(id)a0;
- (id)predictionFromFeatures:(id)a0 options:(id)a1 error:(id *)a2;
- (id)predictionFromUIType:(id)a0 x:(double)a1 y:(double)a2 w:(double)a3 h:(double)a4 error:(id *)a5;
- (id)predictionsFromInputs:(id)a0 options:(id)a1 error:(id *)a2;

@end
