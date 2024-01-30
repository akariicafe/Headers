@class NSString;

@interface CDPDAuthProxyImpl : NSObject <CDPDAuthProviderInternal>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_authContextFromCDPContext:(id)a0;
- (void)cdpContext:(id)a0 persistMasterKeyVerifier:(id)a1 completion:(id /* block */)a2;
- (BOOL)isPrimaryAppleIDLoggedIn;

@end
