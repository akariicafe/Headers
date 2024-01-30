@class NSDictionary;

@interface NSPProxyAgentNetworkStatistics : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDictionary *networkCharacteristics;
@property (nonatomic) unsigned long long proxyConnectionSuccess;
@property (nonatomic) unsigned long long ingressProxyConnectionTimeout;
@property (nonatomic) unsigned long long ingressProxyConnectionRefused;
@property (nonatomic) unsigned long long ingressProxyConnectionHostDown;
@property (nonatomic) unsigned long long ingressProxyConnectionHostUnreachable;
@property (nonatomic) unsigned long long ingressProxyConnectionError;
@property (nonatomic) unsigned long long ingressProxyConnectionDNSTimeout;
@property (nonatomic) unsigned long long ingressProxyConnectionDNSBlocked;
@property (nonatomic) unsigned long long ingressProxyConnectionCertError;
@property (nonatomic) unsigned long long egressProxyConnectionError;
@property (nonatomic) unsigned long long originProxyConnectionError;

- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (void)encodeWithCoder:(id)a0;
- (void)resetStats;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
