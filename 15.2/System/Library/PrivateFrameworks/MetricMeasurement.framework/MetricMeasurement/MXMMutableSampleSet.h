@interface MXMMutableSampleSet : MXMSampleSet

- (void)appendSet:(id)a0;
- (void)appendAttribute:(id)a0;
- (void)appendSample:(id)a0;
- (void)appendIntValue:(int)a0 timestamp:(unsigned long long)a1;
- (void)appendIntegerValue:(long long)a0 timestamp:(unsigned long long)a1;
- (void)appendUnsignedIntValue:(unsigned int)a0 timestamp:(unsigned long long)a1;
- (void)appendUnsignedIntegerValue:(unsigned long long)a0 timestamp:(unsigned long long)a1;
- (void)appendDoubleValue:(double)a0 timestamp:(unsigned long long)a1;
- (void)appendFloatValue:(float)a0 timestamp:(unsigned long long)a1;

@end
