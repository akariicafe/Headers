@class NSString, MPSCNNConvolutionDescriptor, NSObject, MPSNNNeuronDescriptor;
@protocol MPSCNNConvolutionDataSource;

@interface MPSConvolutionDataSourceWrapper : NSObject <MPSCNNConvolutionDataSource> {
    id<MPSCNNConvolutionDataSource> _dataSource;
    MPSCNNConvolutionDescriptor *_convolution;
    NSObject *_batchNorm;
    MPSNNNeuronDescriptor *_neuron;
    struct atomic<long> { struct __cxx_atomic_impl<long, std::__1::__cxx_atomic_base_impl<long> > { _Atomic long long __a_value; } __a_; } _loadCount;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)wrapperForDataSource:(id)a0;

- (void)initialize;
- (void)purge;
- (id)initWithDataSource:(id)a0;
- (void *)rangesForUInt8Kernel;
- (float *)lookupTableForUInt8Kernel;
- (BOOL)load;
- (unsigned int)weightsQuantizationType;
- (id)updateWithCommandBuffer:(id)a0 gradientState:(id)a1 sourceState:(id)a2;
- (BOOL)updateWithGradientState:(id)a0 sourceState:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)descriptor;
- (BOOL)respondsToSelector:(SEL)a0;
- (struct NeuronInfo { int x0; float x1; float x2; float x3; id x4; })neuronInfo;
- (unsigned int)dataType;
- (id)label;
- (BOOL)appendNeuron:(const struct NeuronInfo { int x0; float x1; float x2; float x3; id x4; } *)a0;
- (BOOL)appendBatchNorm:(id)a0;
- (BOOL)hasBatchNorm;
- (BOOL)appendNeuronDescriptor:(id)a0;
- (void *)weights;
- (float *)biasTerms;

@end
