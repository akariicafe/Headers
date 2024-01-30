@class NSXPCListener, NSString, NSXPCInterface, NSError;

@interface AVHapticServer : NSObject <NSXPCListenerDelegate> {
    NSXPCListener *_listener;
    struct map<unsigned int, NSMutableArray<AVServerWrapper *> *, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, NSMutableArray<AVServerWrapper *> *> > > { struct __tree<std::__1::__value_type<unsigned int, NSMutableArray<AVServerWrapper *> *>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, NSMutableArray<AVServerWrapper *> *>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, NSMutableArray<AVServerWrapper *> *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> *__begin_node_; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, NSMutableArray<AVServerWrapper *> *>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, NSMutableArray<AVServerWrapper *> *>, std::__1::less<unsigned int>, true> > { unsigned long long __value_; } __pair3_; } __tree_; } _instanceMap;
    struct recursive_mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _instanceMutex;
    NSXPCInterface *_cachedClientInterface;
    NSXPCInterface *_cachedServerInterface;
    struct map<int, std::__1::bitset<255>, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, std::__1::bitset<255> > > > { struct __tree<std::__1::__value_type<int, std::__1::bitset<255> >, std::__1::__map_value_compare<int, std::__1::__value_type<int, std::__1::bitset<255> >, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, std::__1::bitset<255> > > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> *__begin_node_; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<int, std::__1::bitset<255> >, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<int, std::__1::__value_type<int, std::__1::bitset<255> >, std::__1::less<int>, true> > { unsigned long long __value_; } __pair3_; } __tree_; } _processIndexMap;
    unsigned long long _audioPrewarmCount;
    unsigned long long _hapticsPrewarmCount;
    unsigned long long _audioRunningCount;
    unsigned long long _hapticsRunningCount;
    unsigned long long _runningChannelIDCount;
    unsigned long long _SSSClientID;
    NSError *_savedError;
    struct PowerTimer { id x0; id x1; BOOL x2; } *_powerTimer;
}

@property (readonly) unsigned long long initCount;
@property (readonly) struct ServerManager { struct RTLocked<std::map, unsigned long, std::__1::shared_ptr<ClientEntry> > { struct map<unsigned long, std::__1::shared_ptr<ClientEntry>, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, std::__1::shared_ptr<ClientEntry> > > > { struct __tree<std::__1::__value_type<unsigned long, std::__1::shared_ptr<ClientEntry> >, std::__1::__map_value_compare<unsigned long, std::__1::__value_type<unsigned long, std::__1::shared_ptr<ClientEntry> >, std::__1::less<unsigned long>, true>, std::__1::allocator<std::__1::__value_type<unsigned long, std::__1::shared_ptr<ClientEntry> > > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> *x0; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned long, std::__1::shared_ptr<ClientEntry> >, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> *x0; } x0; } x1; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned long, std::__1::__value_type<unsigned long, std::__1::shared_ptr<ClientEntry> >, std::__1::less<unsigned long>, true> > { unsigned long long x0; } x2; } x0; } x0; struct shared_mutex { struct __shared_mutex_base { struct mutex { struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x0; } x0; struct condition_variable { struct _opaque_pthread_cond_t { long long x0; char x1[40]; } x0; } x1; struct condition_variable { struct _opaque_pthread_cond_t { long long x0; char x1[40]; } x0; } x2; unsigned int x3; } x0; } x1; BOOL x2; char *x3; } x0; struct list<ServerManager::SynthCommand, STLMemAllocator<ServerManager::SynthCommand> > { struct __list_node_base<ServerManager::SynthCommand, void *> { struct __list_node_base<ServerManager::SynthCommand, void *> *x0; struct __list_node_base<ServerManager::SynthCommand, void *> *x1; } x0; struct __compressed_pair<unsigned long, STLMemAllocator<std::__1::__list_node<ServerManager::SynthCommand, void *> > > { unsigned long long x0; struct STLMemAllocator<std::__1::__list_node<ServerManager::SynthCommand, void *> > { struct memory_resource *x0; } x1; } x1; } x1; struct HapticSynth *x2; struct HapticMutex { void /* function */ **x0; char *x1; struct atomic<_opaque_pthread_t *> { struct __cxx_atomic_impl<_opaque_pthread_t *, std::__1::__cxx_atomic_base_impl<_opaque_pthread_t *> > { _Atomic struct _opaque_pthread_t *x0; } x0; } x2; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x3; } x3; struct HapticMutex { void /* function */ **x0; char *x1; struct atomic<_opaque_pthread_t *> { struct __cxx_atomic_impl<_opaque_pthread_t *, std::__1::__cxx_atomic_base_impl<_opaque_pthread_t *> > { _Atomic struct _opaque_pthread_t *x0; } x0; } x2; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x3; } x4; struct VibeConfiguration *x5; double x6; struct unique_ptr<CustomEventManager, std::__1::default_delete<CustomEventManager> > { struct __compressed_pair<CustomEventManager *, std::__1::default_delete<CustomEventManager> > { struct CustomEventManager *x0; } x0; } x7; id x8; int x9; BOOL x10; BOOL x11; BOOL x12; BOOL x13; BOOL x14; BOOL x15; unsigned int x16; id x17; unsigned long long x18; } *manager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)cleanup;
- (void)dealloc;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id).cxx_construct;
- (int)stopPrewarm;
- (struct shared_ptr<ClientEntry> { struct ClientEntry *x0; struct __shared_weak_count *x1; })entryWithID:(unsigned long long)a0;
- (void)incrementChannelID;
- (unsigned long long)getChannelID;
- (int)doStartRunning:(struct shared_ptr<ClientEntry> { struct ClientEntry *x0; struct __shared_weak_count *x1; })a0;
- (void)doStopRunning:(struct shared_ptr<ClientEntry> { struct ClientEntry *x0; struct __shared_weak_count *x1; })a0 audio:(BOOL)a1 haptics:(BOOL)a2;
- (void)doStopPrewarm:(struct shared_ptr<ClientEntry> { struct ClientEntry *x0; struct __shared_weak_count *x1; })a0 audio:(BOOL)a1 haptics:(BOOL)a2;
- (int)doPrewarm:(struct shared_ptr<ClientEntry> { struct ClientEntry *x0; struct __shared_weak_count *x1; })a0;
- (void)doReleaseClientResources:(struct shared_ptr<ClientEntry> { struct ClientEntry *x0; struct __shared_weak_count *x1; })a0;
- (BOOL)incrementInit:(id *)a0;
- (void)addListener:(id)a0 forAudioSessionID:(unsigned int)a1;
- (void)removeProcessEntry:(unsigned long long)a0;
- (void)removeListener:(id)a0 withAudioSessionID:(unsigned int)a1;
- (void)doStopRunningForInterrupt:(struct shared_ptr<ClientEntry> { struct ClientEntry *x0; struct __shared_weak_count *x1; })a0 audio:(BOOL)a1 haptics:(BOOL)a2;
- (BOOL)setupSSSClient;
- (int)loadSynthPreset;
- (void)decrementInit;
- (void)incrementPrewarmCountForAudio:(BOOL)a0 haptics:(BOOL)a1;
- (void)decrementPrewarmCountAndStopAudio:(BOOL)a0 stopHaptics:(BOOL)a1;
- (void)incrementRunningCountForAudio:(BOOL)a0 haptics:(BOOL)a1;
- (void)decrementRunningCountAndStopAudio:(BOOL)a0 stopHaptics:(BOOL)a1;
- (unsigned long long)addProcessEntry:(int)a0;
- (void)HandleInterruptionForSessionID:(unsigned int)a0 command:(unsigned int)a1 dictionary:(const struct __CFDictionary { } *)a2;
- (void)displayRunningProcessEntriesWithOnTime:(unsigned long long)a0;
- (int)startPrewarm;
- (void)dumpProcessEntries:(struct __sFILE { char *x0; int x1; int x2; short x3; short x4; struct __sbuf { char *x0; int x1; } x5; int x6; void *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; struct __sbuf { char *x0; int x1; } x12; struct __sFILEX *x13; int x14; unsigned char x15[3]; unsigned char x16[1]; struct __sbuf { char *x0; int x1; } x17; int x18; long long x19; } *)a0;
- (int)playVibePattern:(struct __CFDictionary { } *)a0 gain:(float)a1 synchronizer:(struct SSPlayerSynchronizer { } *)a2 flags:(unsigned int)a3 atTime:(double)a4 completionHandler:(id /* block */)a5;
- (int)cancelPatternWithOptions:(struct __CFDictionary { } *)a0;

@end
