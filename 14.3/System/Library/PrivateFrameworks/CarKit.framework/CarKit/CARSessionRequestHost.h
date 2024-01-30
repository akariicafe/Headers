@class NSString, NSArray;

@interface CARSessionRequestHost : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSArray *wiredIPv6Addresses;
@property (copy, nonatomic) NSArray *wirelessIPv6Addresses;
@property (nonatomic) long long port;
@property (copy, nonatomic) NSString *carplayWiFiUUID;
@property (copy, nonatomic) NSString *deviceIdentifier;
@property (copy, nonatomic) NSString *publicKey;
@property (copy, nonatomic) NSString *sourceVersion;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)initWithHostProperties:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
