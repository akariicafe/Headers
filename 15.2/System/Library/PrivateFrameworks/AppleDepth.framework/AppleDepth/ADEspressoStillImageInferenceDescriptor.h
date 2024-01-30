@class ADEspressoImageDescriptor;

@interface ADEspressoStillImageInferenceDescriptor : ADEspressoInferenceDescriptor

@property (readonly, nonatomic) ADEspressoImageDescriptor *colorInput;
@property (readonly, nonatomic) ADEspressoImageDescriptor *jasperInput;
@property (readonly, nonatomic) ADEspressoImageDescriptor *depthOutput;

- (void).cxx_destruct;
- (id)initWithNetworkProvider:(id)a0;

@end
