@class NSObject;
@protocol OS_dispatch_queue;

@interface CUIRuntimeStatistics : NSObject {
    _Atomic long long _wasted_size;
    _Atomic long long _total_size;
    _Atomic long long _shortCircuitImageLookup;
    _Atomic long long _total_lookup;
    _Atomic long long _total_probes;
    _Atomic long long _total_initial_lookups;
    _Atomic long long _missed_lookup;
    NSObject<OS_dispatch_queue> *_queue;
    int _notify_token;
}

+ (void)generateLog;
+ (id)sharedRuntimeStatistics;

- (void)incrementStatisticLookup;
- (void)incrementMissedLookup;
- (void)incrementStaticsInitialLookup;
- (void)incrementStatisticDidShortCircuitImageLookup;
- (void)addStatisticAllocatedImageSize:(unsigned long long)a0 roundedSize:(unsigned long long)a1;
- (id)init;
- (long long)shortCircuitImageLookup;
- (void)incrementStaticsProbe;
- (void)dealloc;

@end
