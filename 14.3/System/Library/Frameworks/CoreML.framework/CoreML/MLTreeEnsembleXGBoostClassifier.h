@class NSArray, NSURL, NSString;

@interface MLTreeEnsembleXGBoostClassifier : MLClassifier

@property (retain, nonatomic) NSArray *labelsForDataPoints;
@property (retain, nonatomic) NSURL *modelURL;
@property (retain, nonatomic) NSString *objective;
@property (nonatomic) unsigned long long numClasses;
@property (nonatomic) void *booster;

- (void).cxx_destruct;
- (void)dealloc;
- (id)predictionsFromBatch:(id)a0 error:(id *)a1;
- (id)predictionFromFeatures:(id)a0 error:(id *)a1;
- (id)predictionFromFeatures:(id)a0 options:(id)a1 error:(id *)a2;
- (struct { struct vector<float, std::__1::allocator<float> > { float *x0; float *x1; struct __compressed_pair<float *, std::__1::allocator<float> > { float *x0; } x2; } x0; struct vector<float, std::__1::allocator<float> > { float *x0; float *x1; struct __compressed_pair<float *, std::__1::allocator<float> > { float *x0; } x2; } x1; unsigned long long x2; unsigned long long x3; })xgBoostDataFormatFromFeatureProvider:(id)a0 error:(id *)a1;
- (id)batchProviderFromXGboostResults:(const float *)a0 length:(unsigned long long)a1 error:(id *)a2;
- (id)initWithDescription:(id)a0 configuration:(id)a1 indexToStringLabelArray:(struct vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > > { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x1; struct __compressed_pair<std::__1::basic_string<char> *, std::__1::allocator<std::__1::basic_string<char> > > { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x2; })a2 indexToIntLabelArray:(struct vector<long long, std::__1::allocator<long long> > { long long *x0; long long *x1; struct __compressed_pair<long long *, std::__1::allocator<long long> > { long long *x0; } x2; })a3 modelURL:(id)a4 error:(id *)a5;
- (struct { struct vector<float, std::__1::allocator<float> > { float *x0; float *x1; struct __compressed_pair<float *, std::__1::allocator<float> > { float *x0; } x2; } x0; struct vector<float, std::__1::allocator<float> > { float *x0; float *x1; struct __compressed_pair<float *, std::__1::allocator<float> > { float *x0; } x2; } x1; unsigned long long x2; unsigned long long x3; })xgBoostDataFormatFromBatchProvider:(id)a0 needLabels:(BOOL)a1 error:(id *)a2;
- (id)featureProviderFromXGboostResults:(const float *)a0 length:(unsigned long long)a1 error:(id *)a2;
- (id)featureProviderArrayFromXGBoostResult:(const float *)a0 length:(unsigned long long)a1 error:(id *)a2;
- (id)packageOutputWithPredictedLabel:(id)a0 classProbabilities:(id)a1;
- (BOOL)initializeBoosterIfOneExists;
- (id)loadLabelsWithStringLabels:(struct vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > > { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x1; struct __compressed_pair<std::__1::basic_string<char> *, std::__1::allocator<std::__1::basic_string<char> > > { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x2; })a0 intLabels:(struct vector<long long, std::__1::allocator<long long> > { long long *x0; long long *x1; struct __compressed_pair<long long *, std::__1::allocator<long long> > { long long *x0; } x2; })a1;
- (BOOL)initializeAndvalidateObjectiveAndNumClassesWithConfiguration:(id)a0 error:(id *)a1;
- (id)predictionsFromBatch:(id)a0 options:(id)a1 error:(id *)a2;

@end
