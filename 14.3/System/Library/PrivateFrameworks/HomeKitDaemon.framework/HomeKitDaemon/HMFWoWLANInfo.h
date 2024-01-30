@class NSData, NSArray;

@interface HMFWoWLANInfo : HMFObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSData *primaryMACAddress;
@property (readonly, nonatomic) NSArray *additionalMACAddresses;

+ (id)shortDescription;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithPrimaryIdentifier:(id)a0 wifiIdentifiers:(id)a1;

@end
