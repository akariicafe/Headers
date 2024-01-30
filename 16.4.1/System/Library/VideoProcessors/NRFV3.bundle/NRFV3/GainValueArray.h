@interface GainValueArray : NSObject {
    unsigned long long _nGainValuePairs;
    struct { float x0; float x1; } *_gainValuePairs;
}

- (id)initWithArray:(id)a0;
- (void)dealloc;
- (float)interpolateValueForGain:(float)a0;

@end
