@class NSObject;
@protocol OS_dispatch_queue;

@interface PKPaymentInformationEventExtensionHostContext : PKPaymentInformationEventExtensionBaseContext <PKPaymentInformationEventExtensionHostContextProtocol> {
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (void)handleInformationRequest:(id)a0 completion:(id /* block */)a1;
- (id)replyQueue;
- (id)vendorContext;
- (id)vendorContextWithErrorHandler:(id /* block */)a0;
- (void)handleSignatureRequest:(id)a0 completion:(id /* block */)a1;
- (void)handleConfigurationRequest:(id)a0 completion:(id /* block */)a1;

@end
