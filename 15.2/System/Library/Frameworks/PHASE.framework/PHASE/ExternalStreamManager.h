@class AVAudioFormat, NSMutableDictionary;

@interface ExternalStreamManager : NSObject {
    NSMutableDictionary *_streamGroups;
    NSMutableDictionary *_inputStreams;
    void *_taskManager;
    AVAudioFormat *_engineFormat;
    unsigned int _maximumFramesToRender;
    struct unordered_map<unsigned long long, void (^)(NSUUID *, NSUUID *, bool), std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<std::pair<const unsigned long long, void (^)(NSUUID *, NSUUID *, bool)>>> { struct __hash_table<std::__hash_value_type<unsigned long long, void (^)(NSUUID *, NSUUID *, bool)>, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, void (^)(NSUUID *, NSUUID *, bool)>, std::hash<unsigned long long>, std::equal_to<unsigned long long>, true>, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, void (^)(NSUUID *, NSUUID *, bool)>, std::equal_to<unsigned long long>, std::hash<unsigned long long>, true>, std::allocator<std::__hash_value_type<unsigned long long, void (^)(NSUUID *, NSUUID *, bool)>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, void (^)(NSUUID *, NSUUID *, bool)>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, void (^)(NSUUID *, NSUUID *, bool)>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, void (^)(NSUUID *, NSUUID *, bool)>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, void (^)(NSUUID *, NSUUID *, bool)>, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, void (^)(NSUUID *, NSUUID *, bool)>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, void (^)(NSUUID *, NSUUID *, bool)>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, void (^)(NSUUID *, NSUUID *, bool)>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned long long, void (^)(NSUUID *, NSUUID *, bool)>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, void (^)(NSUUID *, NSUUID *, bool)>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, void (^)(NSUUID *, NSUUID *, bool)>, std::hash<unsigned long long>, std::equal_to<unsigned long long>, true>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, void (^)(NSUUID *, NSUUID *, bool)>, std::equal_to<unsigned long long>, std::hash<unsigned long long>, true>> { float __value_; } __p3_; } __table_; } _controllerPauseStateCallbacks;
    unsigned long long _controllerPauseStateCallbackCounter;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)setPauseExternalInputStreamID:(id)a0 isPaused:(BOOL)a1;
- (id)initWithTaskManager:(void *)a0 engineMode:(long long)a1 engineFormat:(id)a2 maximumFramesToRender:(unsigned int)a3;
- (void)addExternalOutputStreamGroupID:(id)a0 streamID:(id)a1 definition:(id)a2 startsPaused:(BOOL)a3 renderBlock:(id /* block */)a4 withCallback:(id /* block */)a5;
- (void)addExternalInputStreamID:(id)a0 definition:(id)a1 isPaused:(BOOL)a2;
- (void)removeExternalInputStreamID:(id)a0;
- (void)setMuteExternalInputStreamID:(id)a0 isMuted:(BOOL)a1;
- (void)claimControlOfExternalStreamGroupID:(id)a0 stateChangeBlock:(id /* block */)a1 withCallback:(id /* block */)a2;
- (void)abandonControlOfExternalStreamGroupID:(id)a0 withCallback:(id /* block */)a1;
- (void)removeExternalOutputStreamGroupID:(id)a0 streamID:(id)a1 withCallback:(id /* block */)a2;
- (void)pauseExternalStreamGroupID:(id)a0 streamID:(id)a1;
- (void)resumeExternalStreamGroupID:(id)a0 streamID:(id)a1;
- (BOOL)streamIsPaused:(id)a0 error:(id *)a1;
- (id)formatForStream:(id)a0 error:(id *)a1;
- (unsigned int)sessionIdForStream:(id)a0 error:(id *)a1;
- (struct unique_ptr<Phase::Controller::StreamRenderer, std::default_delete<Phase::Controller::StreamRenderer>> { struct __compressed_pair<Phase::Controller::StreamRenderer *, std::default_delete<Phase::Controller::StreamRenderer>> { struct StreamRenderer *x0; } x0; })createRendererForStream:(id)a0 outputChannelLayout:(unsigned int)a1 normalize:(BOOL)a2 error:(id *)a3;
- (unsigned long long)addControllerPauseStateDidUpdateCallback:(id /* block */)a0;
- (void)removeControllerPauseStateDidUpdateCallback:(unsigned long long)a0;
- (void)updateController:(id)a0 pauseState:(BOOL)a1;

@end
