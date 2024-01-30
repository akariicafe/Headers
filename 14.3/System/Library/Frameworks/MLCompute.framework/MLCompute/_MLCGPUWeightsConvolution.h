@class MLCActivationDescriptor, MLCConvolutionDescriptor, MLCTensor, MPSCNNConvolutionDescriptor, NSString;

@interface _MLCGPUWeightsConvolution : NSObject <NSCopying, MPSCNNConvolutionDataSource>

@property (readonly, nonatomic) MPSCNNConvolutionDescriptor *descMPS;
@property (readonly, nonatomic) MLCConvolutionDescriptor *desc;
@property (readonly, nonatomic) MLCActivationDescriptor *neuronDesc;
@property (readonly, weak, nonatomic) MLCTensor *biasTerm;
@property (readonly, weak, nonatomic) MLCTensor *weight;
@property (retain, nonatomic) MLCTensor *localWeight;
@property (retain, nonatomic) MLCTensor *localBiasTerm;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)weightWithDescriptor:(id)a0 biasTerms:(id)a1 weights:(id)a2 neuronDescriptor:(id)a3;
+ (id)weightWithDescriptor:(id)a0 biasTerms:(id)a1 weights:(id)a2;

- (void)purge;
- (unsigned int)weightsLayout;
- (BOOL)load;
- (unsigned int)kernelWeightsDataType;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)descriptor;
- (unsigned int)dataType;
- (id)label;
- (void *)weights;
- (float *)biasTerms;
- (id)initWithDescriptor:(id)a0 biasTerms:(id)a1 weights:(id)a2 neuronDescriptor:(id)a3;

@end
