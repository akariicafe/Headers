@class REExportedTable;

@interface REBayesianMLModel : REMLModel <REBayesianMLModelProperties> {
    struct BayesianModel { struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } m_rwlock; struct unordered_map<unsigned long long, Gaussian, BayesianModel::SuperHasher, BayesianModel::SuperHasher, std::__1::allocator<std::__1::pair<const unsigned long long, Gaussian> > > { struct __hash_table<std::__1::__hash_value_type<unsigned long long, Gaussian>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, Gaussian>, BayesianModel::SuperHasher, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, Gaussian>, BayesianModel::SuperHasher, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, Gaussian> > > { struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, Gaussian>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, Gaussian>, void *> *> *> > > { struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, Gaussian>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, Gaussian>, void *> *> *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, Gaussian>, void *> *> **__value_; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, Gaussian>, void *> *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, Gaussian>, void *> *> *> > { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, Gaussian>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, Gaussian>, void *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, Gaussian>, void *> *> { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, Gaussian>, void *> *> *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, Gaussian>, BayesianModel::SuperHasher, true> > { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, Gaussian>, BayesianModel::SuperHasher, true> > { float __value_; } __p3_; } __table_; } m_features; int m_nFeaturesCount; unsigned long long m_nTotalTrue; unsigned long long m_nTotalExamples; double m_dSumPredictions; double m_dLogScore; double m_dNormalizedLogScore; double m_dEpsilon; int m_nModelVersion; unsigned long long m_nCalibrationCurveTrue[10]; unsigned long long m_nCalibrationCurveCount[10]; unsigned long long m_maxFeatureCoordinates; unsigned long long m_nNumberOfTraining; struct Gaussian { double m_dPrecision; double m_dPredicionMean; } m_empty; } _model;
    unsigned long long _numberOfFeatures;
}

@property (readonly, nonatomic) REExportedTable *content;

+ (unsigned long long)featureBitWidth;
+ (unsigned long long)maxFeatureCount;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)logCoreAnalyticsMetrics;
- (id)_predictWithFeatures:(id)a0;
- (id)initWithFeatureSet:(id)a0 priorMean:(float)a1 modelVarianceEpsilon:(float)a2;
- (void)_clearModel;
- (float)_getAveragePrediction;
- (float)_getNormalizedEntropy;
- (long long)_getNumberOfCoordinates;
- (unsigned long long)_getTotalExampleCount;
- (unsigned long long)_getTotalPositiveCount;
- (void)_trainWithFeatures:(id)a0 positiveEvent:(id)a1;
- (BOOL)_saveModelToURL:(id)a0 error:(id *)a1;
- (BOOL)_loadModelFromURL:(id)a0 error:(id *)a1;
- (unsigned long long)_maxFeatureCoordinates;
- (void)_loadFeatureVector:(struct vector<unsigned long long, std::__1::allocator<unsigned long long> > { unsigned long long *x0; unsigned long long *x1; struct __compressed_pair<unsigned long long *, std::__1::allocator<unsigned long long> > { unsigned long long *x0; } x2; } *)a0 fromFeatureMap:(id)a1;
- (BOOL)_saveModelToURL:(id)a0 includeDebugData:(BOOL)a1 error:(id *)a2;
- (BOOL)_saveDebugModelToURL:(id)a0 error:(id *)a1;

@end
