@interface AUHALOutputUnit : AUAudioUnitV2Bridge {
    id /* block */ _outputProvider;
    id /* block */ _inputHandler;
    BOOL _inputWasEnabled;
    BOOL _outputWasEnabled;
    BOOL _inputBusEnabled;
    int _renderObserverToken;
    struct unordered_map<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long), std::__1::hash<long>, std::__1::equal_to<long>, std::__1::allocator<std::__1::pair<const long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)> > > { struct __hash_table<std::__1::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)> > > { struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, void *> *> *> > > { struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, void *> *> *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, void *> *> **__value_; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, void *> *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, void *> *> *> > { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, void *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, void *> *> { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, void *> *> *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, std::__1::hash<long>, true> > { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, std::__1::equal_to<long>, true> > { float __value_; } __p3_; } __table_; } _renderObservers;
}

@property (nonatomic, getter=isInputEnabled) BOOL inputEnabled;
@property (nonatomic, getter=isOutputEnabled) BOOL outputEnabled;

- (BOOL)isRunning;
- (void)removeRenderObserver:(void /* function */ *)a0 userData:(void *)a1;
- (void)setInputHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (BOOL)canPerformOutput;
- (void)dealloc;
- (void)setOutputProvider:(id /* block */)a0;
- (id /* block */)_inputHandler;
- (void)removeRenderObserver:(long long)a0;
- (long long)tokenByAddingRenderObserver:(id /* block */)a0;
- (id)initWithAudioUnit:(struct OpaqueAudioComponentInstance { } *)a0 description:(struct AudioComponentDescription { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; })a1;
- (void)initAUHALOutputUnit;
- (BOOL)startHardwareAndReturnError:(id *)a0;
- (id).cxx_construct;
- (id)initWithComponentDescription:(struct AudioComponentDescription { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; })a0 options:(unsigned int)a1 error:(id *)a2;
- (void)addRenderObserver:(void /* function */ *)a0 userData:(void *)a1;
- (void)stopHardware;
- (id /* block */)outputProvider;
- (int)enableBus:(unsigned int)a0 scope:(unsigned int)a1 enable:(BOOL)a2;
- (BOOL)canPerformInput;

@end
