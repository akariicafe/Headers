@class ADEspressoImageDescriptor;

@interface ADEspressoStereoInferenceDescriptor : ADEspressoInferenceDescriptor

@property (readonly, nonatomic) ADEspressoImageDescriptor *referenceInput;
@property (readonly, nonatomic) ADEspressoImageDescriptor *auxiliaryInput;
@property (readonly, nonatomic) ADEspressoImageDescriptor *referenceNoiseSigmaInput;
@property (readonly, nonatomic) ADEspressoImageDescriptor *auxiliaryNoiseSigmaInput;
@property (readonly, nonatomic) ADEspressoImageDescriptor *disparityOutput;

- (void).cxx_destruct;
- (id)initWithNetworkProvider:(id)a0 inputColorFormat:(unsigned int)a1 outputDisparityFormat:(unsigned int)a2;

@end
