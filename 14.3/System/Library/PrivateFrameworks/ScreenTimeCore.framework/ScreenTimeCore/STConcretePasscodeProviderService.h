@class NSXPCListenerEndpoint;

@interface STConcretePasscodeProviderService : NSObject <STPasscodeReceiverInterface, STPasscodeProviderService>

@property (readonly) NSXPCListenerEndpoint *clientListenerEndpoint;
@property (copy) id /* block */ pendingProvidePasscodeCompletionHandler;

- (void).cxx_destruct;
- (id)description;
- (void)collectPasscodeWithSetupServiceProxy:(id)a0 completionHandler:(id /* block */)a1;
- (void)providePasscode:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithClientListenerEndpoint:(id)a0;

@end
