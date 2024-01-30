@class ADEspressoImageDescriptor;

@interface ADEspressoPCEDisparityColorInferenceDescriptor : ADEspressoInferenceDescriptor

@property (readonly, nonatomic) ADEspressoImageDescriptor *colorInput;
@property (readonly, nonatomic) ADEspressoImageDescriptor *disparityInput;
@property (readonly, nonatomic) ADEspressoImageDescriptor *prevDisparityInput;
@property (readonly, nonatomic) ADEspressoImageDescriptor *prevFeaturesInput;
@property (readonly, nonatomic) ADEspressoImageDescriptor *disparityOutput;
@property (readonly, nonatomic) ADEspressoImageDescriptor *featuresOutput;

- (void).cxx_destruct;
- (id)initWithNetworkProvider:(id)a0 inputColorFormat:(unsigned int)a1 disparityFormat:(unsigned int)a2;

@end
