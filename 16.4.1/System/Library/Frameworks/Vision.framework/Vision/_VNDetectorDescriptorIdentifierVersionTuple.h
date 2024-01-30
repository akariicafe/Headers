@class NSString, VNResourceVersion;

@interface _VNDetectorDescriptorIdentifierVersionTuple : NSObject {
    NSString *_descriptorIdentifier;
    Class _detectorClass;
    VNResourceVersion *_descriptorVersion;
}

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;

@end
