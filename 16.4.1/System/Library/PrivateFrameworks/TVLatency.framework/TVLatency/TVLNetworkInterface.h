@class NSString;

@interface TVLNetworkInterface : NSObject

@property (readonly, nonatomic) unsigned long long interfaceType;
@property (readonly, copy, nonatomic) NSString *interfaceName;
@property (readonly, copy, nonatomic) NSString *ipv4;
@property (readonly, copy, nonatomic) NSString *ipv6;

- (void).cxx_destruct;
- (id)initWithInterfaceType:(unsigned long long)a0 interfaceName:(id)a1;

@end
