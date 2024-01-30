@class NSString, NSArray;

@interface CTDedicatedBearerDescr : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *src_ip;
@property (retain, nonatomic) NSArray *src_ports;
@property (retain, nonatomic) NSString *remote_ip;
@property (retain, nonatomic) NSArray *remote_ports;
@property (nonatomic) unsigned long long ip_protocol;
@property (retain, nonatomic) NSString *traffic_class;
@property (nonatomic) long long direction;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
