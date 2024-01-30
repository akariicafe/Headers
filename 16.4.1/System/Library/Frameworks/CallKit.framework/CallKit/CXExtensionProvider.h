@class CXProviderExtensionVendorContext, NSString;

@interface CXExtensionProvider : CXProvider <CXProviderExtensionVendorContextDelegate, NSExtensionRequestHandling>

@property (retain, nonatomic) CXProviderExtensionVendorContext *extensionContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)hostProtocolDelegate;
- (void)invalidate;
- (void).cxx_destruct;
- (void)beginRequestWithExtensionContext:(id)a0;
- (void)providerExtensionVendorContext:(id)a0 handledActionTimeout:(id)a1;
- (void)providerExtensionVendorContext:(id)a0 handledAudioSessionActivationStateChangedTo:(BOOL)a1;
- (void)providerExtensionVendorContext:(id)a0 receivedCommittedTransaction:(id)a1;
- (BOOL)requiresProxyingAVAudioSessionState;

@end
