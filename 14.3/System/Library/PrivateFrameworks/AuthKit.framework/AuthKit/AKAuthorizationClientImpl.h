@protocol AKAuthorizationUIProvider;

@interface AKAuthorizationClientImpl : NSObject <AKAuthorizationClientProtocol>

@property (retain) id<AKAuthorizationUIProvider> uiProvider;

- (void)presentAuthorizationUIForContext:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
