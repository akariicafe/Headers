@interface VNFaceAnalyzerMultiDetectorBase : VNEspressoModelFileBasedDetector {
    struct shared_ptr<vision::mod::FaceprintAndAttributes> { struct FaceprintAndAttributes *__ptr_; struct __shared_weak_count *__cntrl_; } _mMultiHeadedFaceClassifier;
}

@property (class, readonly) unsigned long long numberOfImageChannels;

+ (id)configurationOptionKeysForDetectorKey;
+ (id)keyForDetectorWithConfigurationOptions:(id)a0;
+ (const struct basic_string_view<char, std::__1::char_traits<char> > { char *x0; unsigned long long x1; } *)getModelVersionForOptions:(id)a0;
+ (Class)detectorClassForConfigurationOptions:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (void)_addFaceAnalysisResultsFromMap:(struct map<std::__1::basic_string<char>, float, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, float> > > { struct __tree<std::__1::__value_type<std::__1::basic_string<char>, float>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, float>, std::__1::less<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, float> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> *x0; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, float>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> *x0; } x0; } x1; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, float>, std::__1::less<std::__1::basic_string<char> >, true> > { unsigned long long x0; } x2; } x0; } *)a0 toFaceAttributeObject:(id)a1 withRequestRevision:(unsigned long long)a2;
- (BOOL)_isFaceprintJunk:(struct shared_ptr<vision::mod::ImageDescriptorBufferAbstract> { struct ImageDescriptorBufferAbstract *x0; struct __shared_weak_count *x1; })a0;
- (BOOL)_saveFaceprint:(struct shared_ptr<vision::mod::ImageDescriptorBufferAbstract> { struct ImageDescriptorBufferAbstract *x0; struct __shared_weak_count *x1; })a0 toFaceObservation:(id)a1 options:(id)a2 error:(id *)a3;
- (BOOL)_saveFaceAttributes:(struct map<std::__1::basic_string<char>, float, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, float> > > { struct __tree<std::__1::__value_type<std::__1::basic_string<char>, float>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, float>, std::__1::less<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, float> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> *x0; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, float>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> *x0; } x0; } x1; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, float>, std::__1::less<std::__1::basic_string<char> >, true> > { unsigned long long x0; } x2; } x0; } *)a0 toFaceObservation:(id)a1 options:(id)a2 error:(id *)a3;
- (id).cxx_construct;
- (BOOL)completeInitializationForSession:(id)a0 error:(id *)a1;
- (BOOL)supportsProcessingDevice:(id)a0;

@end
