@class NSPPrivacyProxyNetworkRegistration, NSString, NSPProxyAgentNetworkStatistics, NSPProxyTokenInfo;
@protocol NSPProxyPathDelegate;

@interface NSPProxyPath : NSObject <NSSecureCoding, NSCopying, NSPPrivacyProxyNetworkRegistrationDelegate>

@property (class, readonly) BOOL supportsSecureCoding;

@property (weak) id<NSPProxyPathDelegate> delegate;
@property (retain, nonatomic) NSPProxyTokenInfo *ingressProxy;
@property (retain, nonatomic) NSPProxyTokenInfo *egressProxy;
@property (nonatomic) unsigned long long proxyPathWeight;
@property (nonatomic) BOOL allowFallback;
@property (nonatomic) BOOL forceFallback;
@property (nonatomic) BOOL allowFailOpen;
@property (nonatomic) BOOL singleHopRegistered;
@property (nonatomic) BOOL multiHopRegistered;
@property (nonatomic) BOOL geohashSharingEnabled;
@property (retain, nonatomic) NSPPrivacyProxyNetworkRegistration *singleHopRegistration;
@property (retain, nonatomic) NSPPrivacyProxyNetworkRegistration *multiHopRegistration;
@property (retain, nonatomic) NSPProxyAgentNetworkStatistics *networkSingleHopAgentStatistics;
@property (retain, nonatomic) NSPProxyAgentNetworkStatistics *networkMultiHopAgentStatistics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)resetError;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (void)encodeWithCoder:(id)a0;
- (void)resetStats;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)reportErrorForNetworkRegistration:(id)a0 error:(int)a1 withOptions:(id)a2;
- (void)resetSingleHopProxyAgent;
- (void)resetMultiHopProxyAgent;
- (id)initWithDelegate:(id)a0 ingressProxy:(id)a1 egressProxy:(id)a2 proxyPathWeight:(unsigned long long)a3 allowFallback:(BOOL)a4 forceFallback:(BOOL)a5 allowFailOpen:(BOOL)a6 geohashSharingEnabled:(BOOL)a7 networkCharacteristics:(id)a8;
- (void)setupSingleHopProxyRegistrations;
- (void)setupMultiHopProxyRegistrations;
- (BOOL)isMultiHopRegistered;
- (BOOL)isSingleHopRegistered;
- (void)updateIngressProxy:(id)a0 egressProxy:(id)a1 proxyPathWeight:(unsigned long long)a2;
- (void)enableFailOpen:(BOOL)a0;
- (void)updateGeohashSharing:(BOOL)a0;
- (BOOL)proxyPathIsValid:(id)a0 proxyPathList:(id)a1;
- (BOOL)matchIngress:(id)a0;
- (BOOL)matchEgress:(id)a0;
- (void)handleNetworkCharacteristicsChange:(id)a0;
- (id)singleHopConfigurationHash;
- (id)multiHopConfigurationHash;

@end
