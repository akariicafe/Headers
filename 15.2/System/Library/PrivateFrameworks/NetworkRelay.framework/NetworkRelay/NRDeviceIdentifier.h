@class NSUUID;

@interface NRDeviceIdentifier : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSUUID *nrDeviceIdentifier;

+ (id)newDeviceIdentifierWithBluetoothUUID:(id)a0;
+ (id)copyBestTestingDeviceIdentifier;

- (id)initWithUUID:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
