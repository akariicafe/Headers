@class NSPProxyTokenInfo;

@interface NSPCandidateProxyPath : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSPProxyTokenInfo *ingressProxy;
@property (retain, nonatomic) NSPProxyTokenInfo *egressProxy;
@property (nonatomic) unsigned long long proxyPathWeight;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)matchIngress:(id)a0;
- (BOOL)matchEgress:(id)a0;
- (id)initWithIngressProxy:(id)a0 egressProxy:(id)a1 proxyPathWeight:(unsigned long long)a2;
- (BOOL)proxyPathReady;

@end
