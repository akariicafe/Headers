@class NSData;

@interface WiFiMACAddress : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSData *data;
@property (readonly) NSData *ipv6LinkLocalAddress;

- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithByte1:(unsigned char)a0 byte2:(unsigned char)a1 byte3:(unsigned char)a2 byte4:(unsigned char)a3 byte5:(unsigned char)a4 byte6:(unsigned char)a5;

@end
