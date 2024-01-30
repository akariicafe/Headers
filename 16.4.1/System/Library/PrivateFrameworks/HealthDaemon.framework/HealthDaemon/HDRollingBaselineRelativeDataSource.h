@class HDProfile, _HDRollingBaselineRelativeDataSourceBaselineCompatibilityMap, NSDate, HDRollingBaselineRelativeQuantityCalculator, HKQuantityType;

@interface HDRollingBaselineRelativeDataSource : NSObject {
    HKQuantityType *_quantityType;
    HDRollingBaselineRelativeQuantityCalculator *_baselineCalculator;
    _HDRollingBaselineRelativeDataSourceBaselineCompatibilityMap *_canonicalSourceMap;
    double _queryPrefetchWindow;
    NSDate *_currentDate;
    struct unordered_map<NSString *, std::deque<HDRawQuantitySample>, HDStringHash, HDStringEqual, std::allocator<std::pair<NSString *const, std::deque<HDRawQuantitySample>>>> { struct __hash_table<std::__hash_value_type<NSString *, std::deque<HDRawQuantitySample>>, std::__unordered_map_hasher<NSString *, std::__hash_value_type<NSString *, std::deque<HDRawQuantitySample>>, HDStringHash, HDStringEqual, true>, std::__unordered_map_equal<NSString *, std::__hash_value_type<NSString *, std::deque<HDRawQuantitySample>>, HDStringEqual, HDStringHash, true>, std::allocator<std::__hash_value_type<NSString *, std::deque<HDRawQuantitySample>>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, std::deque<HDRawQuantitySample>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, std::deque<HDRawQuantitySample>>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, std::deque<HDRawQuantitySample>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, std::deque<HDRawQuantitySample>>, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, std::deque<HDRawQuantitySample>>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, std::deque<HDRawQuantitySample>>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, std::deque<HDRawQuantitySample>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<NSString *, std::deque<HDRawQuantitySample>>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, std::deque<HDRawQuantitySample>>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<NSString *, std::__hash_value_type<NSString *, std::deque<HDRawQuantitySample>>, HDStringHash, HDStringEqual, true>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<NSString *, std::__hash_value_type<NSString *, std::deque<HDRawQuantitySample>>, HDStringEqual, HDStringHash, true>> { float __value_; } __p3_; } __table_; } _prefetchedSamplesByBaselineCompatibilityID;
}

@property (readonly, weak, nonatomic) HDProfile *profile;
@property (copy, nonatomic) id /* block */ shouldContinueHandler;

- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)_couldSampleEverResolveToDeterminateValue:(struct HDRawQuantitySample { double x0; double x1; double x2; long long x3; BOOL x4; BOOL x5; })a0;
- (id)_predicateForSamplesStartingWithinDateInterval:(id)a0 sourceID:(long long)a1 isIntervalStartDateInclusive:(BOOL)a2;
- (BOOL)_primeBaselineCalculatorWithPriorSamplesForSample:(struct HDRawQuantitySample { double x0; double x1; double x2; long long x3; BOOL x4; BOOL x5; })a0 baselineCompatibilityID:(id)a1 error:(id *)a2;
- (BOOL)_shouldContinueWithError:(id *)a0;
- (BOOL)_supplementCalculatorWithSubsequentSamplesForSample:(struct HDRawQuantitySample { double x0; double x1; double x2; long long x3; BOOL x4; BOOL x5; })a0 baselineCompatibilityID:(id)a1 error:(id *)a2;
- (id)computeRelativeValueForSample:(struct HDRawQuantitySample { double x0; double x1; double x2; long long x3; BOOL x4; BOOL x5; })a0 error:(id *)a1;
- (id)initWithProfile:(id)a0 quantityType:(id)a1 configuration:(id)a2 queryPrefetchWindow:(double)a3 currentDate:(id)a4;

@end
