@protocol MTLBuffer;

@interface MPSParallelRandomPhilox : MPSParallelRandom {
    id<MTLBuffer> _counters;
    float _bernoulliParameter;
    float _uniformMin;
    float _uniformMax;
    float _normalMean;
    float _normalStandardDeviation;
    unsigned long long _seed;
}

- (id)initWithDevice:(id)a0;
- (void)dealloc;
- (id)initWithDevice:(id)a0 destinationDataType:(unsigned int)a1 seed:(unsigned long long)a2;
- (void)encodeToCommandBuffer:(id)a0 computeEncoder:(id)a1 destinationBuffer:(id)a2 destinationOffset:(unsigned long long)a3 numEntries:(unsigned long long)a4;
- (id)initWithCoder:(id)a0 device:(id)a1;
- (void)encodeToCommandBuffer:(id)a0 destinationBuffer:(id)a1 destinationOffset:(unsigned long long)a2 numEntries:(unsigned long long)a3 stride:(unsigned int)a4;
- (void)encodeToCommandBuffer:(id)a0 destinationBuffer:(id)a1 destinationOffset:(unsigned long long)a2 numEntries:(unsigned long long)a3;
- (id)initWithDevice:(id)a0 destinationDataType:(unsigned int)a1 seed:(unsigned long long)a2 distributionDescriptor:(id)a3;
- (void)encodeWithCoder:(id)a0;

@end
