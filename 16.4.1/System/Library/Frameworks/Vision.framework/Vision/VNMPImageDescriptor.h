@class NSData, NSString;

@interface VNMPImageDescriptor : NSObject <NSSecureCoding, VNSerializingInternal>

@property (class, readonly) BOOL supportsSecureCoding;

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
@property (readonly) long long descriptorId;
@property (readonly) NSString *externalImageId;
@property (readonly) long long exifTimestamp;
@property (readonly) float quality;
@property (readonly) void *colorGaborDescriptor;
@property (readonly) void *sceneClassifierDescriptor;
@property (readonly) void *imageRegistrationDescriptor;
@property (readonly, nonatomic) unsigned long long serializedLength;

+ (unsigned long long)currentVersion;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithState:(id)a0 byteOffset:(unsigned long long *)a1 error:(id *)a2;
- (BOOL)computeConvnetDescriptorForImageData:(id)a0 context:(id)a1 error:(id *)a2;
- (BOOL)computeDescriptorForImageData:(id)a0 context:(id)a1 error:(id *)a2;
- (float)computeFinalDescriptorBasedDistanceForColorDistance:(float)a0 andSceneClassifierDistance:(float)a1;
- (BOOL)computeRegistrationFeaturesForImageData:(id)a0 context:(id)a1 error:(id *)a2;
- (float)distanceFromDescriptor:(id)a0;
- (id)initWithImageData:(id)a0 andCustomQualityScore:(float)a1 context:(id)a2 error:(id *)a3;
- (id)initWithImageData:(id)a0 context:(id)a1 error:(id *)a2;
- (id)initWithRawColorGaborDescriptor:(id)a0;
- (unsigned long long)serializeStateIntoData:(id)a0 startingAtByteOffset:(unsigned long long)a1 error:(id *)a2;

@end
