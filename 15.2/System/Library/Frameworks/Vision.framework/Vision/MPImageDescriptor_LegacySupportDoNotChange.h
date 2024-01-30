@class NSString, NSData;

@interface MPImageDescriptor_LegacySupportDoNotChange : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) long long descriptorId;
@property (readonly) NSString *externalImageId;
@property (readonly) long long exifTimestamp;
@property (readonly) float quality;
@property (readonly) void *colorGaborDescriptor;
@property (readonly) void *sceneClassifierDescriptor;
@property (readonly) void *imageRegistrationDescriptor;
@property long long previousLeafId;
@property long long nextLeafId;
@property float nextLeafDescriptorDistance;
@property float previousLeafDescriptorDistance;
@property long long nextLeafTimestampDistance;
@property long long previousLeafTimestampDistance;
@property float nextLeafTotalDistance;
@property float previousLeafTotalDistance;
@property (readonly) NSData *rawColorGaborDescriptor;
@property (readonly) NSString *imageFilePath;

- (void)encodeWithCoder:(id)a0;
- (unsigned long long)serializedLength;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (unsigned long long)serializeStateIntoData:(id)a0 startingAtByteOffset:(unsigned long long)a1 error:(id *)a2;

@end
