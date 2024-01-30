@class NSData, NSUUID, NSString;

@interface NTKFaceInstanceDescriptor : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSData *faceJSONRepresentation;
@property (readonly, nonatomic) NSUUID *nrDeviceUUID;
@property (readonly, nonatomic) NSString *resourceDirectory;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithJSONRepresentation:(id)a0 nrDeviceUUID:(id)a1 resourceDirectory:(id)a2;

@end
