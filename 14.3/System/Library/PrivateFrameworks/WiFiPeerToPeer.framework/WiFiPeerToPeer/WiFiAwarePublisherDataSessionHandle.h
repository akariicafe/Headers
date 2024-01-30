@class WiFiMACAddress;

@interface WiFiAwarePublisherDataSessionHandle : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned char datapathID;
@property (readonly, nonatomic) WiFiMACAddress *initiatorDataAddress;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDatapathID:(unsigned char)a0 initiatorDataAddress:(id)a1;

@end
