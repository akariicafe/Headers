@class NSUUID, NSData, NSDate;

@interface SPOwnedDeviceKeyRecord : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSUUID *identifier;
@property (readonly, copy, nonatomic) NSUUID *deviceIdentifier;
@property (readonly, copy, nonatomic) NSData *advertisement;
@property (readonly, copy, nonatomic) NSData *hashedAdvertisement;
@property (readonly, copy, nonatomic) NSDate *creationDate;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 deviceIdentifier:(id)a1 advertisement:(id)a2 hashedAdvertisement:(id)a3 creationDate:(id)a4;

@end
