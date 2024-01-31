@class NSString, ATPhasePlatform;
@protocol PHASESessionVolumeInterface;

@interface PHASESessionInterfaceImpl : NSObject <PHASESessionInterface> {
    ATPhasePlatform *_phasePlatform;
    struct recursive_mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _callbackMutex;
    id /* block */ _muteSessionInputBlock;
    id /* block */ _fadeSessionOutputBlock;
    id /* block */ _activateSessionBlock;
    id _sessionVolumeImpl;
    struct unordered_set<unsigned int, std::hash<unsigned int>, std::equal_to<unsigned int>, std::allocator<unsigned int>> { struct __hash_table<unsigned int, std::hash<unsigned int>, std::equal_to<unsigned int>, std::allocator<unsigned int>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<unsigned int, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<unsigned int, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<unsigned int, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<unsigned int, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<unsigned int, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<unsigned int, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<unsigned int, void *> *>, std::allocator<std::__hash_node<unsigned int, void *>>> { struct __hash_node_base<std::__hash_node<unsigned int, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::hash<unsigned int>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::equal_to<unsigned int>> { float __value_; } __p3_; } __table_; } audioSessionIDs;
}

@property (readonly, nonatomic) id<PHASESessionVolumeInterface> sessionVolumeInterface;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)setClientStateOnSession:(unsigned int)a0 clientToken:(void *)a1 modes:(unsigned int)a2 state:(unsigned int)a3 outDuckingInfo:(struct AudioSessionDuckingInfo { BOOL x0; float x1; float x2; } *)a4;
- (int)muteSessionInput:(unsigned int)a0 mute:(BOOL)a1 fadeTime:(float)a2;
- (void)activateSession:(unsigned int)a0 activate:(BOOL)a1;
- (int)fadeClientsInSession:(unsigned int)a0 activating:(BOOL)a1 fadeLevel:(float)a2 fadeTime:(float)a3;
- (id)initWithPhasePlatform:(id)a0;
- (id)lazyInitSessionVolumeInterface;
- (void)refreshInputMuteOnAllSessions:(float)a0;
- (BOOL)registerActivateAudioSessionBlock:(id /* block */)a0;
- (BOOL)registerFadeClientsInAudioSessionBlock:(id /* block */)a0;
- (BOOL)registerMuteInputClientsInAudioSessionBlock:(id /* block */)a0;
- (BOOL)setClientStateFromCallbackOnSession:(unsigned int)a0 clientToken:(void *)a1 modes:(unsigned int)a2 state:(unsigned int)a3 outDuckingInfo:(struct AudioSessionDuckingInfo { BOOL x0; float x1; float x2; } *)a4;
- (BOOL)setInputMuteStateFromCallbackOnSession:(unsigned int)a0 clientToken:(void *)a1 isMuted:(BOOL)a2;
- (BOOL)setInputMuteStateOnSession:(unsigned int)a0 clientToken:(void *)a1 isMuted:(BOOL)a2;

@end
