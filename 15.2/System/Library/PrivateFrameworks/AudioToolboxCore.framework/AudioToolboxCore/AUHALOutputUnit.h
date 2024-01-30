@interface AUHALOutputUnit : AUAudioUnitV2Bridge {
    id /* block */ _outputProvider;
    id /* block */ _inputHandler;
    BOOL _inputWasEnabled;
    BOOL _outputWasEnabled;
    BOOL _inputBusEnabled;
    int _renderObserverToken;
    struct unordered_map<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long), std::hash<long>, std::equal_to<long>, std::allocator<std::pair<const long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>>> { struct __hash_table<std::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, std::__unordered_map_hasher<long, std::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, std::hash<long>, std::equal_to<long>, true>, std::__unordered_map_equal<long, std::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, std::equal_to<long>, std::hash<long>, true>, std::allocator<std::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<long, std::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, std::hash<long>, std::equal_to<long>, true>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<long, std::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, std::equal_to<long>, std::hash<long>, true>> { float __value_; } __p3_; } __table_; } _renderObservers;
}

@property (nonatomic, getter=isInputEnabled) BOOL inputEnabled;
@property (nonatomic, getter=isOutputEnabled) BOOL outputEnabled;

- (void)stopHardware;
- (void)initAUHALOutputUnit;
- (int)enableBus:(unsigned int)a0 scope:(unsigned int)a1 enable:(BOOL)a2;
- (BOOL)startHardwareAndReturnError:(id *)a0;
- (BOOL)isRunning;
- (void)removeRenderObserver:(void /* function */ *)a0 userData:(void *)a1;
- (id /* block */)outputProvider;
- (id)initWithAudioUnit:(struct OpaqueAudioComponentInstance { } *)a0 description:(struct AudioComponentDescription { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; })a1;
- (void)setInputHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (BOOL)canPerformInput;
- (void)addRenderObserver:(void /* function */ *)a0 userData:(void *)a1;
- (id /* block */)_inputHandler;
- (long long)tokenByAddingRenderObserver:(id /* block */)a0;
- (void)dealloc;
- (void)removeRenderObserver:(long long)a0;
- (id).cxx_construct;
- (id)initWithComponentDescription:(struct AudioComponentDescription { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; })a0 options:(unsigned int)a1 error:(id *)a2;
- (BOOL)canPerformOutput;
- (void)setOutputProvider:(id /* block */)a0;

@end
