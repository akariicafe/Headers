@class NSXPCListenerEndpoint;

@interface STConcretePasscodeAuthenticationProviderService : NSObject <STPasscodeAuthenticationResultReceiverInterface, STPasscodeAuthenticationProviderService>

@property (readonly) NSXPCListenerEndpoint *clientListenerEndpoint;
@property (copy) id /* block */ pendingAuthenticationCompletionHandler;

- (id)description;
- (void).cxx_destruct;
- (void)authenticatePasscodeWithCommunicationServiceProxy:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithClientListenerEndpoint:(id)a0;
- (void)receivePasscodeAuthenticationResult:(id)a0 completionHandler:(id /* block */)a1;

@end
