@class NSUUID, NSString, NWAddressEndpoint;

@interface NEPolicyCondition : NSObject <NEPrettyDescription>

@property long long conditionType;
@property (copy) NSUUID *applicationUUID;
@property int pid;
@property unsigned int uid;
@property (copy) NSString *accountIdentifier;
@property (copy) NSString *domain;
@property (copy) NSString *interfaceName;
@property unsigned int trafficClassStart;
@property unsigned int trafficClassEnd;
@property unsigned short ipProtocol;
@property unsigned char prefix;
@property unsigned int clientFlags;
@property (copy) NWAddressEndpoint *startAddress;
@property (copy) NWAddressEndpoint *endAddress;
@property (copy) NSString *customEntitlement;
@property (copy) NSString *agentDomain;
@property (copy) NSString *agentType;
@property unsigned int platform;
@property unsigned int sdkVersion;
@property unsigned int minSDKVersion;
@property (copy) NSString *signingIdentifier;
@property unsigned short packetFilterTags;
@property (getter=isNegative) BOOL negative;

+ (id)domain:(id)a0;
+ (id)remoteAddressStart:(id)a0 end:(id)a1;
+ (id)trafficClassStart:(unsigned int)a0 end:(unsigned int)a1;
+ (id)accountIdentifier:(id)a0;
+ (id)flowIPProtocol:(unsigned short)a0;
+ (id)customEntitlement:(id)a0;
+ (id)sdkVersion:(unsigned int)a0 minSDKVersion:(unsigned int)a1 platform:(unsigned int)a2;
+ (id)flowRemoteAddress:(id)a0 prefix:(unsigned char)a1;
+ (id)requiredAgentDomain:(id)a0 agentType:(id)a1;
+ (id)localAddress:(id)a0 prefix:(unsigned char)a1;
+ (id)isLoopback;
+ (id)clientProhibitsExpensive;
+ (id)localAddressStart:(id)a0 end:(id)a1;
+ (id)clientProhibitsContrained;
+ (id)usesModernNetworkAPI;
+ (id)localNetworks;
+ (id)flowLocalAddress:(id)a0 prefix:(unsigned char)a1;
+ (id)effectiveApplication:(id)a0;
+ (id)isSystemProxyConnection;
+ (id)platformBinary;
+ (id)signingIdentifier:(id)a0;
+ (id)effectivePID:(int)a0;
+ (id)allInterfaces;
+ (id)flowLocalAddressStart:(id)a0 end:(id)a1;
+ (id)uid:(unsigned int)a0;
+ (id)isListener;
+ (id)packetFilterTags:(unsigned short)a0;
+ (id)scopedInterface:(id)a0;
+ (id)remoteAddress:(id)a0 prefix:(unsigned char)a1;
+ (id)realApplication:(id)a0;
+ (id)clientFlags:(unsigned int)a0;
+ (id)flowLocalAddressEmpty;
+ (id)fallbackTraffic;
+ (id)flowRemoteAddressEmpty;
+ (id)flowRemoteAddressStart:(id)a0 end:(id)a1;
+ (id)ipProtocol:(unsigned short)a0;
+ (id)isInbound;
+ (id)entitlement;

- (BOOL)addTLVsToMessage:(id)a0;
- (id)initInternal;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (id)init;
- (void).cxx_destruct;
- (id)conditionTypeString;
- (BOOL)validate;
- (unsigned char)conditionTypeValue;
- (id)description;

@end
