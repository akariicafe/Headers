@class NSXPCListener, NSString, NSXPCInterface, NSError;

@interface AVHapticServer : NSObject <NSXPCListenerDelegate> {
    NSXPCListener *_listener;
    struct map<unsigned int, NSMutableArray<AVServerWrapper *> *, std::less<unsigned int>, std::allocator<std::pair<const unsigned int, NSMutableArray<AVServerWrapper *> *>>> { struct __tree<std::__value_type<unsigned int, NSMutableArray<AVServerWrapper *> *>, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, NSMutableArray<AVServerWrapper *> *>, std::less<unsigned int>, true>, std::allocator<std::__value_type<unsigned int, NSMutableArray<AVServerWrapper *> *>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned int, NSMutableArray<AVServerWrapper *> *>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, NSMutableArray<AVServerWrapper *> *>, std::less<unsigned int>, true>> { unsigned long long __value_; } __pair3_; } __tree_; } _instanceMap;
    struct recursive_mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _instanceMutex;
    NSXPCInterface *_cachedClientInterface;
    NSXPCInterface *_cachedServerInterface;
    struct map<int, std::bitset<255>, std::less<int>, std::allocator<std::pair<const int, std::bitset<255>>>> { struct __tree<std::__value_type<int, std::bitset<255>>, std::__map_value_compare<int, std::__value_type<int, std::bitset<255>>, std::less<int>, true>, std::allocator<std::__value_type<int, std::bitset<255>>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<int, std::bitset<255>>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<int, std::__value_type<int, std::bitset<255>>, std::less<int>, true>> { unsigned long long __value_; } __pair3_; } __tree_; } _processIndexMap;
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
@property (readonly) void *manager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cleanup;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (int)doPrewarm:(struct shared_ptr<ClientEntry> { struct ClientEntry *x0; struct __shared_weak_count *x1; })a0;
- (struct shared_ptr<ClientEntry> { struct ClientEntry *x0; struct __shared_weak_count *x1; })entryWithID:(unsigned long long)a0;
- (void)incrementChannelID;
- (unsigned long long)getChannelID;
- (void)doStopRunning:(struct shared_ptr<ClientEntry> { struct ClientEntry *x0; struct __shared_weak_count *x1; })a0 audio:(BOOL)a1 haptics:(BOOL)a2;
- (int)doStartRunning:(struct shared_ptr<ClientEntry> { struct ClientEntry *x0; struct __shared_weak_count *x1; })a0 completedBlock:(id /* block */)a1;
- (void)doStopPrewarm:(struct shared_ptr<ClientEntry> { struct ClientEntry *x0; struct __shared_weak_count *x1; })a0 audio:(BOOL)a1 haptics:(BOOL)a2;
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
- (void)dumpProcessEntries:(struct __sFILE { char *x0; int x1; int x2; short x3; short x4; struct __sbuf { char *x0; int x1; } x5; int x6; void *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; struct __sbuf { char *x0; int x1; } x12; struct __sFILEX *x13; int x14; unsigned char x15[3]; unsigned char x16[1]; struct __sbuf { char *x0; int x1; } x17; int x18; long long x19; } *)a0;
- (void)decrementPrewarmCountAndStopAudio:(BOOL)a0 stopHaptics:(BOOL)a1;
- (void)incrementRunningCountForAudio:(BOOL)a0 haptics:(BOOL)a1;
- (unsigned long long)addProcessEntry:(int)a0;
- (void)decrementRunningCountAndStopAudio:(BOOL)a0 stopHaptics:(BOOL)a1;
- (void)HandleInterruptionForSessionID:(unsigned int)a0 command:(unsigned int)a1 dictionary:(const struct __CFDictionary { } *)a2;
- (int)startPrewarm;
- (void)displayRunningProcessEntriesWithOnTime:(unsigned long long)a0;
- (int)cancelPatternWithOptions:(struct __CFDictionary { } *)a0;
- (int)playVibePattern:(struct __CFDictionary { } *)a0 gain:(float)a1 synchronizer:(struct SSPlayerSynchronizer { } *)a2 flags:(unsigned int)a3 atTime:(double)a4 completionHandler:(id /* block */)a5;
- (void).cxx_destruct;
- (id)init;
- (int)stopPrewarm;
- (void)dealloc;
- (id).cxx_construct;

@end
