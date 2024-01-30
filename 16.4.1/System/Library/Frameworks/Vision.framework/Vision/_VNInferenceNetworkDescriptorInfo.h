@class NSArray, NSDictionary;

@interface _VNInferenceNetworkDescriptorInfo : NSObject {
    NSArray *_detectorDescriptorIdentifierVersionTuples;
    NSDictionary *_descriptorIdentifierToVersionsArray;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)availableVersionsForIdentifier:(id)a0 error:(id *)a1;
- (Class)detectorClassForDescriptorIdentifier:(id)a0 version:(id)a1;
- (id)initWithDetectorDescriptorIdentifierVersionTuples:(id)a0 descriptorIdentifierToVersionsArray:(id)a1;

@end
