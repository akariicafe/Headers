@interface FxSample : NSObject {
    struct FxSamplePriv { double x0; id x1; id x2; id x3; } *_priv;
}

+ (id)_requiredSamplesForSamples:(id)a0;

- (void)setStream:(id)a0;
- (id)stream;
- (double)time;
- (id)context;
- (void)setTime:(double)a0;
- (id)init;
- (void)setContext:(id)a0;
- (void)dealloc;
- (id)regionOfInterest;
- (void)setRegionOfInterest:(id)a0;
- (unsigned long long)fieldOrder;
- (id)evaluateWithOptions:(id)a0;
- (id)domainOfDefinition;
- (BOOL)supportsContextType:(int)a0;
- (BOOL)isPredetermined;
- (id)requiredSamples;

@end
