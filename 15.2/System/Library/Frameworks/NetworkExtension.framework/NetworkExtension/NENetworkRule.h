@class NWHostEndpoint;

@interface NENetworkRule : NSObject <NEConfigurationValidating, NEPrettyDescription, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL appliesToLoopback;
@property (readonly) NWHostEndpoint *matchRemoteEndpoint;
@property (readonly) unsigned long long matchRemotePrefix;
@property (readonly) NWHostEndpoint *matchLocalNetwork;
@property (readonly) unsigned long long matchLocalPrefix;
@property (readonly) long long matchProtocol;
@property (readonly) long long matchDirection;

- (BOOL)checkValidityAndCollectErrors:(id)a0;
- (id)initWithDestinationNetwork:(id)a0 prefix:(unsigned long long)a1 protocol:(long long)a2;
- (id)initWithDestinationHost:(id)a0 protocol:(long long)a1;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (void)encodeWithCoder:(id)a0;
- (id)initWithRemoteNetwork:(id)a0 remotePrefix:(unsigned long long)a1 localNetwork:(id)a2 localPrefix:(unsigned long long)a3 protocol:(long long)a4 direction:(long long)a5;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
