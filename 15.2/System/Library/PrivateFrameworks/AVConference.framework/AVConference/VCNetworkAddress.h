@class NSString;

@interface VCNetworkAddress : NSObject

@property (copy, nonatomic) NSString *ip;
@property (nonatomic) unsigned short port;
@property (nonatomic) unsigned short ipVersion;
@property (copy, nonatomic) NSString *interfaceName;

- (id)description;
- (BOOL)isIPv6;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (int)getSockaddrStorage:(struct sockaddr_storage { unsigned char x0; unsigned char x1; char x2[6]; long long x3; char x4[112]; } *)a0 size:(unsigned long long *)a1;

@end
