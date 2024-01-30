@interface MXMMutableSampleData : MXMSampleData

- (void)appendData:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copy;
- (void)appendSet:(id)a0;
- (id)appendUnsignedIntegerValue:(unsigned long long)a0 tag:(id)a1 timestamp:(unsigned long long)a2;
- (id)appendUnsignedIntValue:(unsigned int)a0 tag:(id)a1 timestamp:(unsigned long long)a2;
- (id)dataMatchingFilter:(id)a0;
- (void)appendAttribute:(id)a0;
- (id)appendSample:(id)a0;
- (id)appendDoubleValue:(double)a0 tag:(id)a1 timestamp:(unsigned long long)a2;
- (id)appendIntValue:(int)a0 tag:(id)a1 timestamp:(unsigned long long)a2;
- (id)appendIntegerValue:(long long)a0 tag:(id)a1 timestamp:(unsigned long long)a2;
- (void)appendAttributes:(id)a0;
- (id)appendFloatValue:(float)a0 tag:(id)a1 timestamp:(unsigned long long)a2;

@end
