@class NSString, NSOperationQueue;

@interface SOADSiteDiscovery : NSObject

@property (retain, nonatomic) NSString *realm;
@property (retain, nonatomic) NSOperationQueue *queue;
@property (nonatomic) BOOL requireTLSForLDAP;

- (void).cxx_destruct;
- (id)initWithRealm:(id)a0 requireTLSForLDAP:(BOOL)a1;
- (void)discoverADInfoUsingSourceAppBundleIdentifier:(id)a0 auditTokenData:(id)a1 withCompletion:(id /* block */)a2;

@end
