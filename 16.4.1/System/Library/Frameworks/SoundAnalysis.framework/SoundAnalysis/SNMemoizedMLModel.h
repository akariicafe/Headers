@class NSString, MLModelDescription;
@protocol SNMLModel;

@interface SNMemoizedMLModel : NSObject <MLCustomModel, SNMLModel> {
    unsigned long long _maxCacheSize;
    struct unordered_map<SoundAnalysis::MD5Hash, id<MLFeatureProvider>, std::hash<SoundAnalysis::MD5Hash>, std::equal_to<SoundAnalysis::MD5Hash>, std::allocator<std::pair<const SoundAnalysis::MD5Hash, id<MLFeatureProvider>>>> { struct __hash_table<std::__hash_value_type<SoundAnalysis::MD5Hash, id<MLFeatureProvider>>, std::__unordered_map_hasher<SoundAnalysis::MD5Hash, std::__hash_value_type<SoundAnalysis::MD5Hash, id<MLFeatureProvider>>, std::hash<SoundAnalysis::MD5Hash>, std::equal_to<SoundAnalysis::MD5Hash>, true>, std::__unordered_map_equal<SoundAnalysis::MD5Hash, std::__hash_value_type<SoundAnalysis::MD5Hash, id<MLFeatureProvider>>, std::equal_to<SoundAnalysis::MD5Hash>, std::hash<SoundAnalysis::MD5Hash>, true>, std::allocator<std::__hash_value_type<SoundAnalysis::MD5Hash, id<MLFeatureProvider>>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<SoundAnalysis::MD5Hash, id<MLFeatureProvider>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<SoundAnalysis::MD5Hash, id<MLFeatureProvider>>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<SoundAnalysis::MD5Hash, id<MLFeatureProvider>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<SoundAnalysis::MD5Hash, id<MLFeatureProvider>>, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<SoundAnalysis::MD5Hash, id<MLFeatureProvider>>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<SoundAnalysis::MD5Hash, id<MLFeatureProvider>>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<SoundAnalysis::MD5Hash, id<MLFeatureProvider>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<SoundAnalysis::MD5Hash, id<MLFeatureProvider>>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<SoundAnalysis::MD5Hash, id<MLFeatureProvider>>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<SoundAnalysis::MD5Hash, std::__hash_value_type<SoundAnalysis::MD5Hash, id<MLFeatureProvider>>, std::hash<SoundAnalysis::MD5Hash>, std::equal_to<SoundAnalysis::MD5Hash>, true>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<SoundAnalysis::MD5Hash, std::__hash_value_type<SoundAnalysis::MD5Hash, id<MLFeatureProvider>>, std::equal_to<SoundAnalysis::MD5Hash>, std::hash<SoundAnalysis::MD5Hash>, true>> { float __value_; } __p3_; } __table_; } _cacheStorage;
    struct list<SoundAnalysis::MD5Hash, std::allocator<SoundAnalysis::MD5Hash>> { struct __list_node_base<SoundAnalysis::MD5Hash, void *> { void *__prev_; void *__next_; } __end_; struct __compressed_pair<unsigned long, std::allocator<std::__list_node<SoundAnalysis::MD5Hash, void *>>> { unsigned long long __value_; } __size_alloc_; } _cacheAccessRecency;
    id<SNMLModel> _wrappedModel;
}

@property (readonly) MLModelDescription *modelDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;

- (id).cxx_construct;
- (id)predictionFromFeatures:(id)a0 options:(id)a1 error:(id *)a2;
- (id)init;
- (void).cxx_destruct;
- (id)initWithModelDescription:(id)a0 parameterDictionary:(id)a1 error:(id *)a2;

@end
