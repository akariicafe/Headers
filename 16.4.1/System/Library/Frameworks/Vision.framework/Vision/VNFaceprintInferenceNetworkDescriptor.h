@class VNTensorDescriptor;

@interface VNFaceprintInferenceNetworkDescriptor : VNInferenceNetworkDescriptor

@property (readonly, nonatomic) VNTensorDescriptor *faceprintOutput;

- (void).cxx_destruct;
- (id)initWithNetworkFileURL:(id)a0 version:(id)a1 networkHeadVersions:(id)a2 inputImage:(id)a3 faceprintOutput:(id)a4 confidencesOutput:(id)a5;

@end
