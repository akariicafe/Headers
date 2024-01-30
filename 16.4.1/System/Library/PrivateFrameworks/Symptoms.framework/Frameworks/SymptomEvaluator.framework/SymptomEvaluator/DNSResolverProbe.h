@class NSMutableDictionary;
@protocol BonjourProbeDelegate, DNSResolverProbeErrorDelegate;

@interface DNSResolverProbe : TestProbe

@property (nonatomic) struct _DNSServiceRef_t { } *resolveDNSRef;
@property (nonatomic) struct _DNSServiceRef_t { } *getAddrInfoDNSRef;
@property (retain, nonatomic) NSMutableDictionary *serviceDict;
@property (nonatomic) BOOL includeAWDL;
@property (retain) id<BonjourProbeDelegate> bonjourDelegate;
@property (retain) id<DNSResolverProbeErrorDelegate> errorDelegate;
@property (nonatomic) struct _DNSServiceRef_t { } *sharedDNSRef;

- (void)dealloc;
- (void)stopTest;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;
- (void)startDNSResolveFor:(id)a0 includeAWDL:(BOOL)a1;

@end
