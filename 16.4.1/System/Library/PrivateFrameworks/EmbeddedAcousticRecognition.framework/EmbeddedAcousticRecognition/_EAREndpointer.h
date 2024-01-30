@interface _EAREndpointer : NSObject {
    struct unique_ptr<quasar::HybridEndpointer, std::default_delete<quasar::HybridEndpointer>> { struct __compressed_pair<quasar::HybridEndpointer *, std::default_delete<quasar::HybridEndpointer>> { struct HybridEndpointer *__value_; } __ptr_; } _endpointer;
}

+ (void)initialize;

- (id).cxx_construct;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (BOOL)acceptEagerResultWithFeatures:(id)a0 featuresToLog:(id *)a1;
- (id)defaultServerEndpointFeatures;
- (BOOL)didEndpointWithFeatures:(id)a0 audioTimestamp:(double)a1 featuresToLog:(id *)a2 endpointPosterior:(float *)a3 extraDelayMs:(int *)a4;
- (id)initWithConfiguration:(id)a0 delaysTrigger:(BOOL)a1 modelVersion:(id *)a2;
- (id)initWithConfiguration:(id)a0 modelVersion:(id *)a1;
- (BOOL)requestSupportedWithSamplingRate:(unsigned long long)a0;
- (void)updateEndpointerDelayedTriggerSwitch:(BOOL)a0;
- (void)updateEndpointerThresholdWithValue:(float)a0;

@end
