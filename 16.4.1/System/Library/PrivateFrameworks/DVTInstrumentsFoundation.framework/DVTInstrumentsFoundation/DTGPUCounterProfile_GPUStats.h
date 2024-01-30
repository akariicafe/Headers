@interface DTGPUCounterProfile_GPUStats : DTGPUCounterProfile {
    unsigned long long _currentIORegSamplingInterval;
    struct EMA<unsigned long long> { unsigned long long currentValue; double coefficient; } _deviceUtilization;
}

+ (id)create:(id)a0;

- (BOOL)start:(unsigned long long)a0;
- (id)initWithProfile:(unsigned long long)a0 device:(id)a1;
- (void)sampleCounters:(unsigned long long)a0 callback:(id /* block */)a1;

@end
