@class NSUUID;

@interface NRDeviceIdentifier : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSUUID *nrDeviceIdentifier;
@property (nonatomic) BOOL ephemeral;

+ (id)newDeviceIdentifierWithBluetoothUUID:(id)a0;
+ (id)copyBestTestingDeviceIdentifier;
+ (id)newDeviceIdentifierWithIDSDeviceID:(id)a0;
+ (id)newEphemeralDeviceIdentifier;

- (id)initWithUUID:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEphemeral;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;

@end
