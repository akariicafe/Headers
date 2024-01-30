@class NSArray, NSURL, NSString;

@interface MLTreeEnsembleXGBoostClassifier : MLClassifier

@property (retain, nonatomic) NSArray *labelsForDataPoints;
@property (retain, nonatomic) NSURL *modelURL;
@property (retain, nonatomic) NSString *objective;
@property (nonatomic) unsigned long long numClasses;
@property (nonatomic) void *booster;

- (id)initWithDescription:(id)a0 configuration:(id)a1 indexToStringLabelArray:(struct vector<std::string, std::allocator<std::string>> { void *x0; void *x1; struct __compressed_pair<std::string *, std::allocator<std::string>> { void *x0; } x2; })a2 indexToIntLabelArray:(struct vector<long long, std::allocator<long long>> { long long *x0; long long *x1; struct __compressed_pair<long long *, std::allocator<long long>> { long long *x0; } x2; })a3 modelURL:(id)a4 error:(id *)a5;
- (struct { struct vector<float, std::allocator<float>> { float *x0; float *x1; struct __compressed_pair<float *, std::allocator<float>> { float *x0; } x2; } x0; struct vector<float, std::allocator<float>> { float *x0; float *x1; struct __compressed_pair<float *, std::allocator<float>> { float *x0; } x2; } x1; unsigned long long x2; unsigned long long x3; })xgBoostDataFormatFromFeatureProvider:(id)a0 error:(id *)a1;
- (struct { struct vector<float, std::allocator<float>> { float *x0; float *x1; struct __compressed_pair<float *, std::allocator<float>> { float *x0; } x2; } x0; struct vector<float, std::allocator<float>> { float *x0; float *x1; struct __compressed_pair<float *, std::allocator<float>> { float *x0; } x2; } x1; unsigned long long x2; unsigned long long x3; })xgBoostDataFormatFromBatchProvider:(id)a0 needLabels:(BOOL)a1 error:(id *)a2;
- (void)populateXGBoostDataFormat:(void *)a0 trainingData:(id)a1 dataIndex:(long long)a2 inputName:(id)a3 needLabels:(BOOL)a4 error:(id *)a5;
- (id)batchProviderFromXGboostResults:(const float *)a0 length:(unsigned long long)a1 error:(id *)a2;
- (id)featureProviderFromXGboostResults:(const float *)a0 length:(unsigned long long)a1 error:(id *)a2;
- (id)featureProviderArrayFromXGBoostResult:(const float *)a0 length:(unsigned long long)a1 error:(id *)a2;
- (id)packageOutputWithPredictedLabel:(id)a0 classProbabilities:(id)a1;
- (BOOL)initializeBoosterIfOneExists;
- (id)loadLabelsWithStringLabels:(struct vector<std::string, std::allocator<std::string>> { void *x0; void *x1; struct __compressed_pair<std::string *, std::allocator<std::string>> { void *x0; } x2; })a0 intLabels:(struct vector<long long, std::allocator<long long>> { long long *x0; long long *x1; struct __compressed_pair<long long *, std::allocator<long long>> { long long *x0; } x2; })a1;
- (BOOL)initializeAndvalidateObjectiveAndNumClassesWithConfiguration:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)predictionFromFeatures:(id)a0 options:(id)a1 error:(id *)a2;
- (id)predictionsFromBatch:(id)a0 error:(id *)a1;
- (void)dealloc;
- (id)predictionsFromBatch:(id)a0 options:(id)a1 error:(id *)a2;
- (id)predictionFromFeatures:(id)a0 error:(id *)a1;

@end
