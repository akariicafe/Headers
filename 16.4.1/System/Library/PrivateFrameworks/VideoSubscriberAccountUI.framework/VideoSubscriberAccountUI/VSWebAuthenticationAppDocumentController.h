@class NSString;

@interface VSWebAuthenticationAppDocumentController : VSAppDocumentController <VSMessagePortFeatureDelegate, VSMessageQueueDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_sendMessage:(id)a0;
- (void)_startObservingViewModel:(id)a0;
- (void)_stopObservingViewModel:(id)a0;
- (id)initWithAppDocument:(id)a0;
- (id)_newViewModel;
- (BOOL)_updateViewModel:(id)a0 error:(id *)a1;
- (BOOL)_updateWebAuthenticationViewModel:(id)a0 error:(id *)a1;
- (BOOL)_updateWebAuthenticationViewModel:(id)a0 withTemplate:(id)a1 error:(id *)a2;
- (id)_webAuthenticationViewModelWithViewModel:(id)a0;
- (void)didAddMessagesToMessageQueue:(id)a0;
- (void)messagePort:(id)a0 didReceiveMessage:(id)a1;

@end
