@class VNResourceVersion, NSArray, VNImageTensorDescriptor, NSURL, VNTensorDescriptor, NSDictionary;

@interface VNInferenceNetworkDescriptor : VNProcessingDescriptor {
    NSDictionary *_networkHeadVersions;
    NSDictionary *_inputs;
    NSDictionary *_outputs;
    NSDictionary *_inputImages;
}

@property (readonly, nonatomic) NSURL *networkFileURL;
@property (readonly, nonatomic) VNResourceVersion *networkVersion;
@property (readonly, copy, nonatomic) NSArray *allInputs;
@property (readonly, copy, nonatomic) NSArray *allOutputs;
@property (readonly, copy, nonatomic) NSArray *allInputImages;
@property (readonly, nonatomic) VNImageTensorDescriptor *onlyInputImage;
@property (readonly, nonatomic) VNTensorDescriptor *confidencesOutput;

+ (BOOL)supportsSecureCoding;
+ (void)_configureVNProcessingDescriptorIdentifierSceneNetV3DetectorConfigurationOptions:(id)a0;
+ (void)_configureVNProcessingDescriptorIdentifierSceneNetV3_ObjDetNet_SliderNetDetectorConfigurationOptions:(id)a0;
+ (id)_detectorTypesForIdentifier:(id)a0;
+ (id)availableIdentifiers;
+ (id)availableVersionsForIdentifier:(id)a0 error:(id *)a1;
+ (id)descriptorForIdentifier:(id)a0 version:(id)a1 error:(id *)a2;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithNetworkFileURL:(id)a0 version:(id)a1 networkHeadVersions:(id)a2 inputImage:(id)a3 outputs:(id)a4 confidencesOutput:(id)a5;
- (id)initWithNetworkFileURL:(id)a0 version:(id)a1 networkHeadVersions:(id)a2 inputs:(id)a3 outputs:(id)a4 inputImages:(id)a5 confidencesOutput:(id)a6;
- (id)inputNamed:(id)a0 error:(id *)a1;
- (id)outputNamed:(id)a0 error:(id *)a1;
- (id)versionOfNetworkHead:(id)a0 error:(id *)a1;

@end
