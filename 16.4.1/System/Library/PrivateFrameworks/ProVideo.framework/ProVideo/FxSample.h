@interface FxSample : NSObject {
    struct FxSamplePriv { double x0; id x1; id x2; id x3; } *_priv;
}

+ (id)_requiredSamplesForSamples:(id)a0;

- (void)setStream:(id)a0;
- (double)time;
- (void)setTime:(double)a0;
- (void)setContext:(id)a0;
- (id)context;
- (void)dealloc;
- (id)stream;
- (id)init;
- (id)regionOfInterest;
- (void)setRegionOfInterest:(id)a0;
- (BOOL)isPredetermined;
- (id)requiredSamples;
- (id)domainOfDefinition;
- (id)evaluateWithOptions:(id)a0;
- (unsigned long long)fieldOrder;
- (BOOL)supportsContextType:(int)a0;

@end
