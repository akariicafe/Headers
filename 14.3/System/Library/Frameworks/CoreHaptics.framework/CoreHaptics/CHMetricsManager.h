@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, CHHapticDeviceCapability;

@interface CHMetricsManager : NSObject {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSMutableDictionary *_enginePlayerData;
    NSMutableDictionary *_engineSPI;
    NSMutableDictionary *_engineReporter;
    BOOL _metricsDisabled;
    id<CHHapticDeviceCapability> _defaultDeviceCaps;
    BOOL _testMode;
    NSMutableDictionary *_testData;
    float _CHMetricsIntensityBin1To2Value;
    float _CHMetricsIntensityBin2To3Value;
    struct unordered_map<AVHapticPlayerEventType, NSString *, std::__1::hash<AVHapticPlayerEventType>, std::__1::equal_to<AVHapticPlayerEventType>, std::__1::allocator<std::__1::pair<const AVHapticPlayerEventType, NSString *> > > { struct __hash_table<std::__1::__hash_value_type<AVHapticPlayerEventType, NSString *>, std::__1::__unordered_map_hasher<AVHapticPlayerEventType, std::__1::__hash_value_type<AVHapticPlayerEventType, NSString *>, std::__1::hash<AVHapticPlayerEventType>, true>, std::__1::__unordered_map_equal<AVHapticPlayerEventType, std::__1::__hash_value_type<AVHapticPlayerEventType, NSString *>, std::__1::equal_to<AVHapticPlayerEventType>, true>, std::__1::allocator<std::__1::__hash_value_type<AVHapticPlayerEventType, NSString *> > > { struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<AVHapticPlayerEventType, NSString *>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<AVHapticPlayerEventType, NSString *>, void *> *> *> > > { struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<AVHapticPlayerEventType, NSString *>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<AVHapticPlayerEventType, NSString *>, void *> *> *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<AVHapticPlayerEventType, NSString *>, void *> *> **__value_; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<AVHapticPlayerEventType, NSString *>, void *> *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<AVHapticPlayerEventType, NSString *>, void *> *> *> > { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<AVHapticPlayerEventType, NSString *>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<AVHapticPlayerEventType, NSString *>, void *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<AVHapticPlayerEventType, NSString *>, void *> *> { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<AVHapticPlayerEventType, NSString *>, void *> *> *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<AVHapticPlayerEventType, std::__1::__hash_value_type<AVHapticPlayerEventType, NSString *>, std::__1::hash<AVHapticPlayerEventType>, true> > { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__1::__unordered_map_equal<AVHapticPlayerEventType, std::__1::__hash_value_type<AVHapticPlayerEventType, NSString *>, std::__1::equal_to<AVHapticPlayerEventType>, true> > { float __value_; } __p3_; } __table_; } _CHMetricTransientEventTypeStringMap;
}

+ (struct CAMutex { void /* function */ **x0; char *x1; struct _opaque_pthread_t *x2; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x3; } *)getLock;
+ (double)currentTime;
+ (id)sharedManager;
+ (void)createSharedManagerWithEngine:(id)a0 audioSessionID:(unsigned int)a1 SPI:(BOOL)a2 sessionIsShared:(BOOL)a3;
+ (void)destroySharedManagerWithEngine:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id).cxx_construct;
- (void)stopReporter:(id)a0;
- (void)destroyForEngine:(id)a0;
- (void)addForEngine:(id)a0 audioSessionID:(unsigned int)a1 sessionIsShared:(BOOL)a2 SPI:(BOOL)a3;
- (void)disableOnDefaultsWrite;
- (void)disableOnCapabilitiesForEngine:(id)a0;
- (id)getKeyForEngine:(id)a0;
- (id)setReporterForEngine:(id)a0 audioSessionID:(unsigned int)a1 sessionIsShared:(BOOL)a2;
- (void)dispatchOnLocal:(id /* block */)a0;
- (void)startReporter:(id)a0;
- (void)logMetricForEngine:(id)a0 metric:(id)a1 value:(id)a2;
- (id)getKeyForPlayer:(id)a0;
- (void)prepareAdvancedPlaybackData:(id)a0 player:(id)a1 events:(id)a2;
- (void)preparePlaybackData:(id)a0 player:(id)a1 events:(id)a2;
- (void)removePlaybackData:(id)a0 player:(id)a1;
- (void)markPlaybackAction:(id)a0 player:(id)a1 action:(long long)a2 time:(float)a3;
- (void)markAdvancedPlaybackAction:(id)a0 player:(id)a1 action:(long long)a2 time:(float)a3;
- (void)logPlaybackMetricForEngine:(id)a0 playerKey:(id)a1 endTime:(float)a2;
- (id)copyDataForDictionary:(id)a0;
- (void)multiplyPlaybackMetricsDictionary:(id)a0 transientData:(id)a1 continuousData:(id)a2 endTime:(double)a3;
- (void)resetPlaybackData:(id)a0;
- (void)multiplyAdvancedPlaybackMetricsDictionary:(id)a0 transientData:(id)a1 continuousData:(id)a2 endTime:(double)a3;
- (void)resetAdvancedPlaybackData:(id)a0;
- (void)addToTestDataForPlayer:(id)a0 transientData:(id)a1 continuousData:(id)a2;
- (void)prepareData:(id)a0 events:(id)a1;
- (id)continousDictionary:(id)a0 slot:(unsigned long long)a1 intensity:(float)a2;
- (id)transientDictionary:(id)a0 eventType:(unsigned long long)a1 intensity:(float)a2;
- (void)multiplyTransientData:(id)a0 by:(float)a1;
- (void)multiplyContinuousData:(id)a0 by:(float)a1;
- (id)continuousSharpnessSlotKeyFromSlotValue:(unsigned long long)a0;
- (id)intensityBinKeyFromValue:(float)a0;
- (id)transientEventTypeKeyWithEventType:(unsigned long long)a0;
- (void)handleServerRecovery:(id)a0 audioSessionID:(unsigned int)a1 sessionIsShared:(BOOL)a2;
- (void)handleEngineStart:(id)a0;
- (void)handleEngineStop:(id)a0;
- (void)handlePlayerInit:(id)a0 player:(id)a1 events:(id)a2 isAdvanced:(BOOL)a3;
- (void)handlePlayerDealloc:(id)a0 player:(id)a1;
- (void)handleParamCurveEncountered:(id)a0;
- (void)handlePlayerAction:(id)a0 player:(id)a1 action:(long long)a2 time:(float)a3 isAdvanced:(BOOL)a4;
- (void)setMetricsTestModeEnabled;
- (void)handlePlayerFinish:(id)a0 endTime:(float)a1;
- (id)getMetricsForPlayer:(id)a0;

@end
