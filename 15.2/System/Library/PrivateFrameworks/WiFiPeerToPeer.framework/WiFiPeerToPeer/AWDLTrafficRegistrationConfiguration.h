@class NSString, WiFiMACAddress;

@interface AWDLTrafficRegistrationConfiguration : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *uniqueIdentifier;
@property (copy, nonatomic) WiFiMACAddress *peerAddress;
@property (nonatomic) long long options;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithUniqueIdentifier:(id)a0 peerAddress:(id)a1;

@end
