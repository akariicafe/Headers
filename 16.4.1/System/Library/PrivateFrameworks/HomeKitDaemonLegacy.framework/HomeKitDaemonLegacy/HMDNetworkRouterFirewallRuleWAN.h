@class NSArray, HMDNetworkRouterFirewallRuleWANSubject, HMFNetAddress;

@interface HMDNetworkRouterFirewallRuleWAN : HMDNetworkRouterFirewallRule

@property (class, readonly, nonatomic) HMFNetAddress *ipAddressAnyIPv4;
@property (class, readonly, nonatomic) HMFNetAddress *ipAddressAnyIPv6;
@property (class, readonly, nonatomic) HMFNetAddress *ipAddressAny;

@property (readonly, nonatomic) unsigned long long purpose;
@property (readonly, nonatomic) unsigned char transportProtocol;
@property (readonly, nonatomic) HMDNetworkRouterFirewallRuleWANSubject *subject;
@property (readonly, nonatomic) unsigned short portStart;
@property (readonly, nonatomic) unsigned short portEnd;
@property (readonly, nonatomic) NSArray *icmpTypes;

+ (id)createWithJSONDictionary:(id)a0 error:(id *)a1;
+ (BOOL)__decodeAddress:(id)a0 subject:(id *)a1;
+ (BOOL)__decodeAddressRange:(id)a0 endValue:(id)a1 subject:(id *)a2;
+ (BOOL)__decodeAddresses:(id)a0 subject:(id *)a1;
+ (BOOL)__decodeFlags:(id)a0 critical:(BOOL *)a1;
+ (BOOL)__decodeHostnames:(id)a0 subject:(id *)a1;
+ (BOOL)__decodePorts:(id)a0 portStart:(unsigned short *)a1 portEnd:(unsigned short *)a2;
+ (BOOL)__decodePurpose:(id)a0 purpose:(unsigned long long *)a1;
+ (BOOL)__decodeSubject:(id)a0 subject:(id *)a1;
+ (BOOL)__decodeType:(id)a0 transportProtocol:(unsigned char *)a1 error:(id *)a2;
+ (id)__nonWildcardAddressFrom:(id)a0 key:(id)a1;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)attributeDescriptions;
- (void).cxx_destruct;
- (id)initWithJSONDictionary:(id)a0 name:(id)a1 critical:(BOOL)a2 purpose:(unsigned long long)a3 transportProtocol:(unsigned char)a4 subject:(id)a5 portStart:(unsigned short)a6 portEnd:(unsigned short)a7 icmpTypes:(id)a8;
- (id)prettyJSONDictionary;

@end
