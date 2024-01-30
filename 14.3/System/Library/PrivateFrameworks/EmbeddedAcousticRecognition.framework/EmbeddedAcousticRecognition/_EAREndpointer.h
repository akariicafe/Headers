@interface _EAREndpointer : NSObject {
    struct unique_ptr<quasar::HybridEndpointer, std::__1::default_delete<quasar::HybridEndpointer> > { struct __compressed_pair<quasar::HybridEndpointer *, std::__1::default_delete<quasar::HybridEndpointer> > { struct HybridEndpointer *__value_; } __ptr_; } _endpointer;
}

+ (void)initialize;

- (void).cxx_destruct;
- (id)defaultServerEndpointFeatures;
- (BOOL)requestSupportedWithSamplingRate:(unsigned long long)a0;
- (void)updateEndpointerThresholdWithValue:(float)a0;
- (BOOL)didEndpointWithFeatures:(id)a0 audioTimestamp:(double)a1 featuresToLog:(id *)a2 endpointPosterior:(float *)a3 extraDelayMs:(int *)a4;
- (id)initWithConfiguration:(id)a0;
- (id).cxx_construct;
- (id)initWithConfiguration:(id)a0 modelVersion:(id *)a1;
- (void)updateEndpointerDelayedTriggerSwitch:(BOOL)a0;
- (BOOL)acceptEagerResultWithFeatures:(id)a0 featuresToLog:(id *)a1;
- (id)initWithConfiguration:(id)a0 delaysTrigger:(BOOL)a1 modelVersion:(id *)a2;

@end
