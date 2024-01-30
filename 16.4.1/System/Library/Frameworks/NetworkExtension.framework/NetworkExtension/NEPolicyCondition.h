@class NSUUID, NSString, NWAddressEndpoint;

@interface NEPolicyCondition : NSObject <NEPrettyDescription> {
    unsigned char _prefix;
    unsigned short _ipProtocol;
    unsigned short _packetFilterTags;
    unsigned short _schemePort;
    int _pid;
    int _pid_version;
    unsigned int _uid;
    unsigned int _domainFilter;
    unsigned int _trafficClassStart;
    unsigned int _trafficClassEnd;
    unsigned int _clientFlags;
    unsigned int _platform;
    unsigned int _sdkVersion;
    unsigned int _minSDKVersion;
    NSUUID *_applicationUUID;
    NSString *_accountIdentifier;
    NSString *_domain;
    NSString *_interfaceName;
    NWAddressEndpoint *_startAddress;
    NWAddressEndpoint *_endAddress;
    NSString *_customEntitlement;
    NSString *_agentDomain;
    NSString *_agentType;
    NSString *_signingIdentifier;
}

@property long long conditionType;
@property (getter=isNegative) BOOL negative;
@property BOOL exactMatch;

+ (id)isInbound;
+ (id)flowRemoteAddressStart:(id)a0 end:(id)a1;
+ (id)fallbackTraffic;
+ (id)flowRemoteAddress:(id)a0 prefix:(unsigned char)a1;
+ (id)uid:(unsigned int)a0;
+ (id)effectivePID:(int)a0 version:(int)a1;
+ (id)clientProhibitsExpensive;
+ (id)effectivePID:(int)a0;
+ (id)remoteAddressStart:(id)a0 end:(id)a1;
+ (id)entitlement;
+ (id)usesModernNetworkAPI;
+ (id)platformBinary;
+ (id)customEntitlement:(id)a0;
+ (id)flowRemoteAddressEmpty;
+ (id)packetFilterTags:(unsigned short)a0;
+ (id)flowLocalAddressEmpty;
+ (id)effectiveApplication:(id)a0;
+ (id)schemeUsingPort:(unsigned short)a0;
+ (id)localAddressStart:(id)a0 end:(id)a1;
+ (id)signingIdentifier:(id)a0;
+ (id)delegateIsPlatformBinary;
+ (id)flowLocalAddressStart:(id)a0 end:(id)a1;
+ (id)accountIdentifier:(id)a0;
+ (id)isLoopback;
+ (id)trafficClassStart:(unsigned int)a0 end:(unsigned int)a1;
+ (id)domain:(id)a0;
+ (id)sdkVersion:(unsigned int)a0 minSDKVersion:(unsigned int)a1 platform:(unsigned int)a2;
+ (id)requiredAgentDomain:(id)a0 agentType:(id)a1;
+ (id)isSystemProxyConnection;
+ (id)clientProhibitsContrained;
+ (id)scopedInterface:(id)a0;
+ (id)flowLocalAddress:(id)a0 prefix:(unsigned char)a1;
+ (id)isListener;
+ (id)remoteAddress:(id)a0 prefix:(unsigned char)a1;
+ (id)hasSignedResult;
+ (id)localAddress:(id)a0 prefix:(unsigned char)a1;
+ (id)allInterfaces;
+ (id)flowIPProtocol:(unsigned short)a0;
+ (id)ipProtocol:(unsigned short)a0;
+ (id)realApplication:(id)a0;
+ (id)localNetworks;
+ (id)domainFilter:(unsigned long long)a0;
+ (id)allowsUnsafeSocketAccess;
+ (id)clientFlags:(unsigned int)a0;

- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
