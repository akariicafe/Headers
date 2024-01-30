@class ADEspressoImageDescriptor;

@interface ADEspressoJasperColorV2InferenceDescriptor : ADEspressoInferenceDescriptor

@property (readonly, nonatomic) ADEspressoImageDescriptor *colorInput;
@property (readonly, nonatomic) ADEspressoImageDescriptor *jasperInput;
@property (readonly, nonatomic) ADEspressoImageDescriptor *prevDepthInput;
@property (readonly, nonatomic) ADEspressoImageDescriptor *prevColorInput;
@property (readonly, nonatomic) ADEspressoImageDescriptor *prevUncertaintyInput;
@property (readonly, nonatomic) ADEspressoImageDescriptor *depthOutput;
@property (readonly, nonatomic) ADEspressoImageDescriptor *uncertaintyOutput;

- (void).cxx_destruct;
- (id)initWithNetworkProvider:(id)a0 espressoEngine:(unsigned long long)a1;

@end
