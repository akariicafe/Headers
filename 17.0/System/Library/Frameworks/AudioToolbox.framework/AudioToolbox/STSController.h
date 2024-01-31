@interface STSController : NSObject {
    struct OpaqueFigSTS { } *_sts;
    struct unordered_map<std::string, STSPerLabelControllerState, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, STSPerLabelControllerState>>> { struct __hash_table<std::__hash_value_type<std::string, STSPerLabelControllerState>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, STSPerLabelControllerState>, std::hash<std::string>, std::equal_to<std::string>>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, STSPerLabelControllerState>, std::equal_to<std::string>, std::hash<std::string>>, std::allocator<std::__hash_value_type<std::string, STSPerLabelControllerState>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, STSPerLabelControllerState>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, STSPerLabelControllerState>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, STSPerLabelControllerState>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, STSPerLabelControllerState>, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, STSPerLabelControllerState>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, STSPerLabelControllerState>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, STSPerLabelControllerState>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, STSPerLabelControllerState>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, STSPerLabelControllerState>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, STSPerLabelControllerState>, std::hash<std::string>, std::equal_to<std::string>>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, STSPerLabelControllerState>, std::equal_to<std::string>, std::hash<std::string>>> { float __value_; } __p3_; } __table_; } _perLabelState;
    struct stack<unsigned long, std::deque<unsigned long>> { struct deque<unsigned long, std::allocator<unsigned long>> { struct __split_buffer<unsigned long *, std::allocator<unsigned long *>> { unsigned long long **__first_; unsigned long long **__begin_; unsigned long long **__end_; struct __compressed_pair<unsigned long **, std::allocator<unsigned long *>> { unsigned long long **__value_; } __end_cap_; } __map_; unsigned long long __start_; struct __compressed_pair<unsigned long, std::allocator<unsigned long>> { unsigned long long __value_; } __size_; } c; } _availableIndicesWithinSharedStorage;
    struct STSActiveIndices { unsigned long long m_activeLabels; } _activeIndices;
    struct STSGlobalState { unsigned long long hostTime; struct { void /* unknown type, empty encoding */ columns[4]; } listenerTransform; } _globalState;
    unsigned long long _globalGeneration;
    void *_sharedStorage;
    struct semaphore { unsigned int mMachSem; BOOL mOwned; } _controlSemaphore;
    unsigned long long _shmemSize;
}

@property (class, readonly) long long maxNumberOfPerLabelStates;
@property (class, readonly) unsigned long long maxLabelLength;

- (void)dealloc;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)_updateGlobalState:(const struct STSGlobalState { unsigned long long x0; struct { void /* unknown type, empty encoding */ x0[4]; } x1; } *)a0 didChange:(BOOL *)a1 error:(id *)a2;
- (void)cleanupAllLabels;
- (void)cleanupLabel:(struct __CFString { } *)a0;
- (struct __hash_map_iterator<std::__hash_iterator<std::__hash_node<std::__hash_value_type<std::string, STSPerLabelControllerState>, void *> *>> { struct __hash_iterator<std::__hash_node<std::__hash_value_type<std::string, STSPerLabelControllerState>, void *> *> { void *x0; } x0; })ensureResourcesAllocatedForLabel:(struct __CFString { } *)a0 error:(id *)a1;
- (id)initWithSTSObject:(struct OpaqueFigSTS { } *)a0 error:(id *)a1;
- (BOOL)signalChangeWithError:(id *)a0;
- (BOOL)updateGlobalState:(struct STSGlobalState { unsigned long long x0; struct { void /* unknown type, empty encoding */ x0[4]; } x1; } *)a0 didChange:(BOOL *)a1 error:(id *)a2;
- (BOOL)updateGlobalState:(const struct STSGlobalState { unsigned long long x0; struct { void /* unknown type, empty encoding */ x0[4]; } x1; } *)a0 labelStates:(const void *)a1 additionalLabelInfo:(id)a2 error:(id *)a3;
- (BOOL)updateGlobalState:(const struct STSGlobalState { unsigned long long x0; struct { void /* unknown type, empty encoding */ x0[4]; } x1; } *)a0 labelStates:(const void *)a1 error:(id *)a2;
- (BOOL)updateLabel:(struct __CFString { } *)a0 state:(const struct STSPerLabelState { struct { void /* unknown type, empty encoding */ x0[4]; } x0; unsigned int x1; float x2; float x3; } *)a1 didChange:(BOOL *)a2 additionalInfo:(id)a3 error:(id *)a4;
- (BOOL)updateLabel:(struct __CFString { } *)a0 state:(struct STSPerLabelState { struct { void /* unknown type, empty encoding */ x0[4]; } x0; unsigned int x1; float x2; float x3; } *)a1 didChange:(BOOL *)a2 error:(id *)a3;

@end
