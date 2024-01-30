@class ADEspressoImageDescriptor;

@interface ADEspressoJasperToColorTransformCorrectionFrontendInfrerenceDescriptor : ADEspressoInferenceDescriptor

@property (readonly, nonatomic) ADEspressoImageDescriptor *featuresInput;
@property (readonly, nonatomic) ADEspressoImageDescriptor *anglesOutput;
@property (readonly, nonatomic) ADEspressoImageDescriptor *errorsOutput;

- (void).cxx_destruct;
- (id)initWithNetworkProvider:(id)a0;

@end
