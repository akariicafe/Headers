@class NSArray, NSDictionary, NSData;

@interface MTLComputePipelineReflectionInternal : MTLComputePipelineReflection {
    NSArray *_arguments;
    NSArray *_builtInArguments;
    NSDictionary *_performanceStatistics;
    struct { unsigned char kernelRegisterSpill : 1; unsigned char threadgroupBarrier : 1; unsigned char deviceMemoryAtomics : 1; unsigned char threadgroupMemoryAtomics : 1; unsigned long reserved : 60; } _flags;
    unsigned int _traceBufferIndex;
    NSData *_pluginReturnData;
    NSArray *_constantSamplerUniqueIdentifiers;
    NSArray *_constantSamplerDescriptors;
}

- (id)formattedDescription:(unsigned long long)a0;
- (struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned long x4 : 60; })usageFlags;
- (void)setConstantSamplerUniqueIdentifiers:(id)a0;
- (id)builtInArguments;
- (void)dealloc;
- (void)setConstantSamplerDescriptorsFromBitmasks:(unsigned long long *)a0 count:(unsigned long long)a1;
- (id)arguments;
- (id)description;
- (unsigned int)traceBufferIndex;
- (void)setPerformanceStatistics:(id)a0;
- (id)initWithSerializedData:(id)a0 serializedStageInputDescriptor:(id)a1 device:(id)a2 options:(unsigned long long)a3 flags:(struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned long x4 : 60; })a4;
- (id)initWithSerializedData:(id)a0 device:(id)a1 options:(unsigned long long)a2 flags:(struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned long x4 : 60; })a3;
- (id)pluginReturnData;
- (id)constantSamplerUniqueIdentifiers;
- (id)constantSamplerDescriptors;
- (id)performanceStatistics;

@end
