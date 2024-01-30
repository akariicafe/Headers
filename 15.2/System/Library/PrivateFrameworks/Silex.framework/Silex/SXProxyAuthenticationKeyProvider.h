@class NSString;

@interface SXProxyAuthenticationKeyProvider : NSObject <SXProxyAuthenticationKeyProvider>

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *secret;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)requestAuthenticationKeyWithCompletion:(id /* block */)a0;
- (id)initWithIdentifier:(id)a0 secret:(id)a1;

@end
