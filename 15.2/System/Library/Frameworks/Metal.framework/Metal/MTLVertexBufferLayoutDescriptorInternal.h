@interface MTLVertexBufferLayoutDescriptorInternal : MTLVertexBufferLayoutDescriptor {
    unsigned long long _stride;
    unsigned long long _stepFunction;
    unsigned long long _instanceStepRate;
}

- (void)setStride:(unsigned long long)a0;
- (unsigned long long)stride;
- (void)setStepFunction:(unsigned long long)a0;
- (void)setStepRate:(unsigned long long)a0;
- (unsigned long long)stepRate;
- (id)init;
- (unsigned long long)stepFunction;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
