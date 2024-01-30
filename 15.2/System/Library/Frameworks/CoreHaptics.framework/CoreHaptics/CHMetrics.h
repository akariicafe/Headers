@class NSString, NSMutableDictionary, NSObject, CAReporter;
@protocol OS_dispatch_queue;

@interface CHMetrics : NSObject {
    CAReporter *_reporter;
    NSString *_engineID;
    unsigned int _audioSessionID;
    BOOL _sessionIsShared;
    BOOL _isSPI;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    float _CHMetricsIntensityBin1To2Value;
    float _CHMetricsIntensityBin2To3Value;
    struct vector<unsigned long, std::allocator<unsigned long>> { unsigned long long *__begin_; unsigned long long *__end_; struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { unsigned long long *__value_; } __end_cap_; } _hapticTransientIDs;
    struct vector<unsigned long, std::allocator<unsigned long>> { unsigned long long *__begin_; unsigned long long *__end_; struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { unsigned long long *__value_; } __end_cap_; } _hapticContinuousSustainedIDs;
    struct vector<unsigned long, std::allocator<unsigned long>> { unsigned long long *__begin_; unsigned long long *__end_; struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { unsigned long long *__value_; } __end_cap_; } _hapticContinuousNonsustainedIDs;
    struct unordered_map<AVHapticPlayerEventType, NSString *, std::hash<AVHapticPlayerEventType>, std::equal_to<AVHapticPlayerEventType>, std::allocator<std::pair<const AVHapticPlayerEventType, NSString *>>> { struct __hash_table<std::__hash_value_type<AVHapticPlayerEventType, NSString *>, std::__unordered_map_hasher<AVHapticPlayerEventType, std::__hash_value_type<AVHapticPlayerEventType, NSString *>, std::hash<AVHapticPlayerEventType>, std::equal_to<AVHapticPlayerEventType>, true>, std::__unordered_map_equal<AVHapticPlayerEventType, std::__hash_value_type<AVHapticPlayerEventType, NSString *>, std::equal_to<AVHapticPlayerEventType>, std::hash<AVHapticPlayerEventType>, true>, std::allocator<std::__hash_value_type<AVHapticPlayerEventType, NSString *>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<AVHapticPlayerEventType, NSString *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<AVHapticPlayerEventType, NSString *>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<AVHapticPlayerEventType, NSString *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<AVHapticPlayerEventType, NSString *>, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<AVHapticPlayerEventType, NSString *>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<AVHapticPlayerEventType, NSString *>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<AVHapticPlayerEventType, NSString *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<AVHapticPlayerEventType, NSString *>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<AVHapticPlayerEventType, NSString *>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<AVHapticPlayerEventType, std::__hash_value_type<AVHapticPlayerEventType, NSString *>, std::hash<AVHapticPlayerEventType>, std::equal_to<AVHapticPlayerEventType>, true>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<AVHapticPlayerEventType, std::__hash_value_type<AVHapticPlayerEventType, NSString *>, std::equal_to<AVHapticPlayerEventType>, std::hash<AVHapticPlayerEventType>, true>> { float __value_; } __p3_; } __table_; } _legacyHapticTransientEventTypeMap;
    NSMutableDictionary *_playerData;
    BOOL _testMode;
    NSMutableDictionary *_testPlayerData;
}

+ (double)currentTime;

- (BOOL)isEnabled;
- (void).cxx_destruct;
- (void)handleInitForPlayer:(id)a0 events:(id)a1 isAdvanced:(BOOL)a2;
- (void)handleParamCurveEncountered;
- (void)handleStartForPlayer:(id)a0 time:(double)a1 isAdvanced:(BOOL)a2 patternID:(id)a3;
- (void)handleActionForPlayer:(id)a0 action:(long long)a1 time:(double)a2 isAdvanced:(BOOL)a3;
- (void)dispatchOnLocal:(id /* block */)a0;
- (void)setReporter;
- (void)startReporter;
- (void)logPowerLogMetric:(id)a0;
- (void)logMetric:(id)a0 value:(id)a1;
- (void)stopReporter;
- (id)getIDForPlayer:(id)a0;
- (void)prepareAdvancedPlaybackData:(id)a0 events:(id)a1;
- (void)preparePlaybackData:(id)a0 events:(id)a1;
- (void)logPatternLibraryMetric:(id)a0;
- (id)copyDataForDictionary:(id)a0;
- (void)markAdvancedPlaybackAction:(id)a0 action:(long long)a1 time:(float)a2;
- (void)markPlaybackAction:(id)a0 action:(long long)a1 time:(float)a2;
- (void)logPlaybackMetricForPlayerID:(id)a0 endTime:(float)a1;
- (void)multiplyPlaybackMetricsDictionary:(id)a0 transientData:(id)a1 continuousData:(id)a2 endTime:(double)a3;
- (void)resetPlaybackData:(id)a0;
- (BOOL)isEventType:(unsigned long long)a0 inList:(struct vector<unsigned long, std::allocator<unsigned long>> { unsigned long long *x0; unsigned long long *x1; struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { unsigned long long *x0; } x2; })a1;
- (void)multiplyAdvancedPlaybackMetricsDictionary:(id)a0 transientData:(id)a1 continuousData:(id)a2 endTime:(double)a3;
- (void)resetAdvancedPlaybackData:(id)a0;
- (void)addToTestDataForPlayer:(id)a0 transientData:(id)a1 continuousData:(id)a2;
- (id)continousDictionary:(id)a0 slot:(unsigned long long)a1 intensity:(float)a2;
- (void)prepareData:(id)a0 events:(id)a1;
- (id)transientDictionary:(id)a0 index:(unsigned long long)a1 intensity:(float)a2;
- (id)legacyTransientDictionary:(id)a0 eventType:(unsigned long long)a1 intensity:(float)a2;
- (void)multiplyTransientData:(id)a0 by:(float)a1;
- (void)multiplyContinuousData:(id)a0 by:(float)a1;
- (id)continuousSharpnessSlotKeyFromSlotValue:(unsigned long long)a0;
- (id)intensityBinKeyFromValue:(float)a0;
- (void)handleEngineStop;
- (id)transientSharpnessIndexKeyFromIndexValue:(unsigned long long)a0;
- (id)initWithEngine:(id)a0 audioSessionID:(unsigned int)a1 sessionIsShared:(BOOL)a2 isSPI:(BOOL)a3;
- (void)handleEngineStart;
- (void)handleServerRecovery;
- (void)handleFinishedForPlayersAtTime:(double)a0;
- (void)removePlaybackData:(id)a0;
- (void)setMetricsTestModeEnabled;
- (id)getMetricsForPlayer:(id)a0;
- (void)dealloc;
- (id).cxx_construct;

@end
