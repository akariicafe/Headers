@class NSData;

@interface WiFiMACAddress : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSData *data;
@property (readonly) NSData *ipv6LinkLocalAddress;

- (void)encodeWithCoder:(id)a0;
- (id)initWithData:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAddress:(struct ether_addr { unsigned char x0[6]; })a0;
- (unsigned long long)hash;

@end
