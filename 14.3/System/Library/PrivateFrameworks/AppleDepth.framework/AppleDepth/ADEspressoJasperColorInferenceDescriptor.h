@class ADEspressoImageDescriptor;

@interface ADEspressoJasperColorInferenceDescriptor : ADEspressoInferenceDescriptor

@property (readonly, nonatomic) ADEspressoImageDescriptor *colorInput;
@property (readonly, nonatomic) ADEspressoImageDescriptor *jasperInput;
@property (readonly, nonatomic) ADEspressoImageDescriptor *depthOutput;
@property (readonly, nonatomic) ADEspressoImageDescriptor *confidenceOutput;
@property (readonly, nonatomic) ADEspressoImageDescriptor *alphaMapOutput;
@property (readonly, nonatomic) ADEspressoImageDescriptor *normalsOutput;

- (void).cxx_destruct;
- (id)initWithNetworkProvider:(id)a0;

@end
