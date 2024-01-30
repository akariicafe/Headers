@class NSData, NSUUID, NSString;

@interface DACarKeyAdditionalCrossPlatformSharingData : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSData *bindingAttestation;
@property (readonly, nonatomic) NSUUID *sharingSessionUUID;
@property (readonly, nonatomic) long long targetDeviceType;
@property (readonly, nonatomic) NSString *initiatorIdsPseudonym;

+ (id)decodeWithData:(id)a0 error:(id *)a1;

- (id)asDictionary;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)encodeWithError:(id *)a0;
- (id)initWithSharingSessionUUID:(id)a0 bindingAttestation:(id)a1 targetDeviceType:(long long)a2 initiatorIdsPseudonym:(id)a3;

@end
