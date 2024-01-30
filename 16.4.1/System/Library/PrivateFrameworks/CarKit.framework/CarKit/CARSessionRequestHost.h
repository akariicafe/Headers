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
@property (nonatomic, getter=isWiredCarPlaySimulator) BOOL wiredCarPlaySimulator;
@property (readonly, nonatomic) BOOL supportsMutualAuthentication;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithDisplayName:(id)a0 wiredIPv6Addresses:(id)a1 wirelessIPv6Addresses:(id)a2 port:(long long)a3 carplayWiFiUUID:(id)a4 deviceIdentifier:(id)a5 publicKey:(id)a6 sourceVersion:(id)a7 wiredCarPlaySimulator:(BOOL)a8;
- (id)initWithHostProperties:(id)a0;

@end
