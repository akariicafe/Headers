@class WiFiAwareDiscoveryResult, NSString, WiFiAwarePublishDatapathServiceSpecificInfo, NSData;

@interface WiFiAwareDatapathConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) WiFiAwareDiscoveryResult *discoveryResult;
@property (readonly, nonatomic) long long serviceType;
@property (readonly, nonatomic) NSString *passphrase;
@property (readonly, nonatomic) NSData *pmk;
@property (readonly, nonatomic) WiFiAwarePublishDatapathServiceSpecificInfo *serviceSpecificInfo;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDiscoveryResult:(id)a0 serviceType:(long long)a1 passphrase:(id)a2 pmk:(id)a3 serviceSpecificInfo:(id)a4;
- (BOOL)passphraseEqual:(id)a0;
- (BOOL)pmkEqual:(id)a0;

@end
