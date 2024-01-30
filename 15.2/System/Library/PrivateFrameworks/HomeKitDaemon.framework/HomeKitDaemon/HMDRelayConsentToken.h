@class HMDUser, NSUUID, NSData, NSDate, HMDHAPAccessory;

@interface HMDRelayConsentToken : HMFObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (weak, nonatomic) HMDHAPAccessory *accessory;
@property (weak, nonatomic) HMDUser *user;
@property (readonly, nonatomic) NSUUID *accessoryIdentifier;
@property (retain, nonatomic) NSUUID *userIdentifier;
@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, copy, nonatomic) NSData *consentToken;
@property (readonly, nonatomic) NSDate *expirationDate;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)configureWithHome:(id)a0;
- (id)initWithConsentToken:(id)a0 expiration:(id)a1 accessory:(id)a2 user:(id)a3;

@end
