@class NSString, MPSCNNConvolutionDescriptor;

@interface MPSCNNWeight : NSObject <MPSCNNConvolutionDataSource> {
    MPSCNNConvolutionDescriptor *_desc;
    struct vector<float, std::allocator<float>> { float *__begin_; float *__end_; struct __compressed_pair<float *, std::allocator<float>> { float *__value_; } __end_cap_; } _weight;
    struct vector<float, std::allocator<float>> { float *__begin_; float *__end_; struct __compressed_pair<float *, std::allocator<float>> { float *__value_; } __end_cap_; } _bias;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void *)weights;
- (void)checkpoint;
- (void)purge;
- (unsigned int)dataType;
- (float *)biasTerms;
- (id)label;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)descriptor;
- (BOOL)load;
- (void)dealloc;
- (id).cxx_construct;
- (id)copyWithZone:(struct _NSZone { } *)a0 device:(id)a1;
- (unsigned long long)weightSize;
- (id)initWithKernelWidth:(unsigned long long)a0 kernelHeight:(unsigned long long)a1 inputFeatureChannels:(unsigned long long)a2 outputFeatureChannels:(unsigned long long)a3 strideInPixelsX:(unsigned long long)a4 strideInPixelsY:(unsigned long long)a5 neuronType:(int)a6 neuronA:(float)a7 neuronB:(float)a8;
- (unsigned long long)biasSize;

@end
