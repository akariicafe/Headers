@interface FxSample : NSObject {
    struct FxSamplePriv { double x0; id x1; id x2; id x3; } *_priv;
}

+ (id)_requiredSamplesForSamples:(id)a0;

- (id)stream;
- (id)context;
- (double)time;
- (id)init;
- (void)setStream:(id)a0;
- (void)dealloc;
- (void)setContext:(id)a0;
- (void)setTime:(double)a0;
- (id)regionOfInterest;
- (void)setRegionOfInterest:(id)a0;
- (unsigned long long)fieldOrder;
- (id)evaluateWithOptions:(id)a0;
- (id)domainOfDefinition;
- (BOOL)supportsContextType:(int)a0;
- (BOOL)isPredetermined;
- (id)requiredSamples;

@end
