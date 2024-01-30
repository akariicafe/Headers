@class NSUUID, NSString, MPImageDescriptor_LegacySupportDoNotChange;

@interface CVMLImageprintObservation_LegacySupportDoNotChange : CVMLObservation_LegacySupportDoNotChange {
    NSUUID *_identifier;
    MPImageDescriptor_LegacySupportDoNotChange *_imageprintDescriptor;
    NSString *_imageprintType;
    NSString *_imageprintVersion;
}

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithData:(id)a0;
- (unsigned long long)serializedLength;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (unsigned long long)serializeStateIntoData:(id)a0 startingAtByteOffset:(unsigned long long)a1 error:(id *)a2;
- (id)serializeAsVNImageprintStateAndReturnError:(id *)a0;

@end
