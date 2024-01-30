@class AVAudioFormat, NSMutableDictionary;

@interface ExternalStreamManager : NSObject {
    NSMutableDictionary *_streamGroups;
    void *_taskManager;
    AVAudioFormat *_engineFormat;
    unsigned int _maximumFramesToRender;
    BOOL _enableAudioIssueDetector;
    struct unordered_map<unsigned long long, void (^)(NSUUID *, NSUUID *, bool), std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<std::pair<const unsigned long long, void (^)(NSUUID *, NSUUID *, bool)>>> { struct __hash_table<std::__hash_value_type<unsigned long long, void (^)(NSUUID *, NSUUID *, bool)>, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, void (^)(NSUUID *, NSUUID *, bool)>, std::hash<unsigned long long>, std::equal_to<unsigned long long>, true>, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, void (^)(NSUUID *, NSUUID *, bool)>, std::equal_to<unsigned long long>, std::hash<unsigned long long>, true>, std::allocator<std::__hash_value_type<unsigned long long, void (^)(NSUUID *, NSUUID *, bool)>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, void (^)(NSUUID *, NSUUID *, bool)>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, void (^)(NSUUID *, NSUUID *, bool)>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, void (^)(NSUUID *, NSUUID *, bool)>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, void (^)(NSUUID *, NSUUID *, bool)>, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, void (^)(NSUUID *, NSUUID *, bool)>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, void (^)(NSUUID *, NSUUID *, bool)>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, void (^)(NSUUID *, NSUUID *, bool)>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned long long, void (^)(NSUUID *, NSUUID *, bool)>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, void (^)(NSUUID *, NSUUID *, bool)>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, void (^)(NSUUID *, NSUUID *, bool)>, std::hash<unsigned long long>, std::equal_to<unsigned long long>, true>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, void (^)(NSUUID *, NSUUID *, bool)>, std::equal_to<unsigned long long>, std::hash<unsigned long long>, true>> { float __value_; } __p3_; } __table_; } _controllerPauseStateCallbacks;
    unsigned long long _controllerPauseStateCallbackCounter;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)abandonControlOfExternalStreamGroupID:(id)a0 withCallback:(id /* block */)a1;
- (unsigned long long)addControllerPauseStateDidUpdateCallback:(id /* block */)a0;
- (void)addExternalInputStreamGroupID:(id)a0 streamID:(id)a1 attributedTo:(id)a2 definition:(id)a3 isPaused:(BOOL)a4;
- (void)addExternalOutputStreamGroupID:(id)a0 streamID:(id)a1 attributedTo:(id)a2 definition:(id)a3 startsPaused:(BOOL)a4 renderBlock:(id /* block */)a5 withCallback:(id /* block */)a6;
- (void)claimControlOfExternalStreamGroupID:(id)a0 attributedTo:(id)a1 stateChangeBlock:(id /* block */)a2 withCallback:(id /* block */)a3;
- (struct unique_ptr<Phase::Controller::StreamRenderer, std::default_delete<Phase::Controller::StreamRenderer>> { struct __compressed_pair<Phase::Controller::StreamRenderer *, std::default_delete<Phase::Controller::StreamRenderer>> { struct StreamRenderer *x0; } x0; })createRendererForStream:(id)a0 outputChannelLayout:(unsigned int)a1 normalize:(BOOL)a2 error:(id *)a3;
- (id)formatForStream:(id)a0 error:(id *)a1;
- (void)gatherDebugInformation:(id /* block */)a0;
- (id)initWithTaskManager:(void *)a0 engineMode:(long long)a1 engineFormat:(id)a2 maximumFramesToRender:(unsigned int)a3 enableAudioIssueDetector:(BOOL)a4;
- (void)pauseExternalStreamGroupID:(id)a0 streamID:(id)a1;
- (void)removeAllResourcesAttributedToClientID:(id)a0;
- (void)removeControllerPauseStateDidUpdateCallback:(unsigned long long)a0;
- (void)removeExternalInputStreamGroupID:(id)a0 streamID:(id)a1;
- (void)removeExternalOutputStreamGroupID:(id)a0 streamID:(id)a1 withCallback:(id /* block */)a2;
- (void)resumeExternalStreamGroupID:(id)a0 streamID:(id)a1;
- (unsigned int)sessionIdForStream:(id)a0 error:(id *)a1;
- (void)setMuteExternalInputStreamGroupID:(id)a0 streamID:(id)a1 isMuted:(BOOL)a2;
- (void)setPauseExternalInputStreamGroupID:(id)a0 streamID:(id)a1 isPaused:(BOOL)a2;
- (BOOL)streamIsPaused:(id)a0 error:(id *)a1;
- (long long)typeForStream:(id)a0 error:(id *)a1;
- (void)updateController:(id)a0 pauseState:(BOOL)a1;

@end
