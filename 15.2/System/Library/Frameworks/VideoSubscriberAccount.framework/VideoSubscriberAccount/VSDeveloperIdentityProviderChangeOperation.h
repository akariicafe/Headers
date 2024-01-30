@class VSIdentityProvider, VSOptional, NSXPCConnection;

@interface VSDeveloperIdentityProviderChangeOperation : VSAsyncOperation

@property (retain, nonatomic) VSOptional *result;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) VSIdentityProvider *identityProvider;
@property (nonatomic) long long changeKind;

- (void)executionDidBegin;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)_serviceWithErrorHandler:(id /* block */)a0;

@end
