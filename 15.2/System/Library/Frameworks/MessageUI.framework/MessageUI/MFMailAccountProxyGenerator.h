@class NSString, _MFMailAccountProxySource;

@interface MFMailAccountProxyGenerator : NSObject <MFMailAccountProxyGenerator> {
    _MFMailAccountProxySource *_proxySource;
    BOOL _allowsRestrictedAccounts;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (id)defaultMailAccountProxyForDeliveryOriginatingBundleID:(id)a0 sourceAccountManagement:(int)a1;
- (id)accountProxyContainingEmailAddress:(id)a0 includingInactive:(BOOL)a1 originatingBundleID:(id)a2 sourceAccountManagement:(int)a3;
- (id)initWithAllowsRestrictedAccounts:(BOOL)a0;
- (id)allAccountProxies;
- (id)activeAccountProxiesOriginatingBundleID:(id)a0 sourceAccountManagement:(int)a1;
- (id)accountProxyContainingEmailAddress:(id)a0 includingInactive:(BOOL)a1;

@end
