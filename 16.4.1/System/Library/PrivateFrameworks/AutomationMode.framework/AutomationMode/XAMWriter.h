@protocol XAMAuthorizationProvider;

@interface XAMWriter : NSObject

@property (class, readonly) XAMWriter *sharedInstance;

@property (readonly) id /* block */ writerConnectionFactory;
@property (readonly) id<XAMAuthorizationProvider> authorizationProvider;

+ (void)resetSharedWriter;

- (void).cxx_destruct;
- (BOOL)disableAutomationModeWithError:(id *)a0;
- (void)_authenticateAndEnableAutomationModeWithProxy:(id)a0 completion:(id /* block */)a1;
- (void)_enableAutomationModeWithProxy:(id)a0 authorization:(id)a1 completion:(id /* block */)a2;
- (void)_enableAutomationModeWithProxy:(id)a0 completion:(id /* block */)a1;
- (void)_setAutomationModeEnabled:(BOOL)a0 withCompletion:(id /* block */)a1;
- (void)_usingAsyncProxyEnablePasswordlessAutomation:(BOOL)a0 withCompletion:(id /* block */)a1;
- (BOOL)_usingSyncProxy:(id /* block */)a0 withError:(id *)a1;
- (void)createNoAuthenticationRequiredCookieWithCompletion:(id /* block */)a0;
- (BOOL)createNoAuthenticationRequiredCookieWithError:(id *)a0;
- (void)disableAutomationModeWithCompletion:(id /* block */)a0;
- (void)enableAutomationModeWithCompletion:(id /* block */)a0;
- (BOOL)enableAutomationModeWithError:(id *)a0;
- (id)initWithWriterConnectionFactory:(id /* block */)a0 authorizationProvider:(id)a1;
- (void)removeNoAuthenticationRequiredCookieWithCompletion:(id /* block */)a0;
- (BOOL)removeNoAuthenticationRequiredCookieWithError:(id *)a0;

@end
