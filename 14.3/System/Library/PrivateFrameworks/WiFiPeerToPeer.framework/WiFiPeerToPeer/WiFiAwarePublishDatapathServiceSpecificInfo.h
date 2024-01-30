@class NSString;

@interface WiFiAwarePublishDatapathServiceSpecificInfo : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long protocolType;
@property (readonly, nonatomic) unsigned short servicePort;
@property (copy, nonatomic) NSString *hostname;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithProtocolType:(long long)a0 servicePort:(unsigned short)a1;
- (void)encodeWithCoder:(id)a0;
- (BOOL)hostnameEquals:(id)a0;

@end
