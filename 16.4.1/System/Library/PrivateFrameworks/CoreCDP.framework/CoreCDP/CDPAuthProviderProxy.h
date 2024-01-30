@class NSString;
@protocol CDPAuthProvider;

@interface CDPAuthProviderProxy : NSObject <CDPAuthProviderInternal> {
    id<CDPAuthProvider> _authProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)proxyWithAuthProvider:(id)a0;

- (void).cxx_destruct;
- (void)cdpContext:(id)a0 verifyMasterKey:(id)a1 completion:(id /* block */)a2;
- (void)cdpContext:(id)a0 performSilentRecoveryTokenRenewal:(id /* block */)a1;

@end
