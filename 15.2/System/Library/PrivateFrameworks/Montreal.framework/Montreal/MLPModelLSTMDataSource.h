@class NSString, MPSCNNConvolutionDescriptor;

@interface MLPModelLSTMDataSource : NSObject <MPSCNNConvolutionDataSource> {
    MPSCNNConvolutionDescriptor *_desc;
    struct vector<float, std::allocator<float>> { float *__begin_; float *__end_; struct __compressed_pair<float *, std::allocator<float>> { float *__value_; } __end_cap_; } _weight;
    struct vector<float, std::allocator<float>> { float *__begin_; float *__end_; struct __compressed_pair<float *, std::allocator<float>> { float *__value_; } __end_cap_; } _bias;
}

@property unsigned long long weightID;
@property unsigned long long columns;
@property unsigned long long rows;
@property unsigned long long lstmInputSize;
@property unsigned long long lstmOutputSize;
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
- (id).cxx_construct;
- (unsigned long long)bias_size;
- (id)copyWithZone:(struct _NSZone { } *)a0 device:(id)a1;
- (void)loadWithInitialWeights_0:(float *)a0 initialWeights_1:(float *)a1 bias_0:(float *)a2 bias_1:(float *)a3 weightAttributes:(unsigned long long)a4;
- (void)initializeWeightsAndBiases:(id)a0;
- (id)initWithColumns:(unsigned long long)a0 rows:(unsigned long long)a1 lstmInputSize:(unsigned long long)a2 lstmOutputSize:(unsigned long long)a3 weightID:(unsigned long long)a4 neuronType:(int)a5 neuronA:(float)a6 neuronB:(float)a7 initialWeights_0:(float *)a8 initialWeights_1:(float *)a9 bias_0:(float *)a10 bias_1:(float *)a11 weightAttributes:(unsigned long long)a12 deviceHandler:(id)a13;
- (unsigned long long)weight_size;

@end
