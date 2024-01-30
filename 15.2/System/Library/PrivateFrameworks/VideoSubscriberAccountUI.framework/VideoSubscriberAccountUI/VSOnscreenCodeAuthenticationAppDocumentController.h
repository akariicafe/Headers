@class NSString, IKViewElement;

@interface VSOnscreenCodeAuthenticationAppDocumentController : VSAppDocumentController <VSMessageQueueDelegate>

@property (retain, nonatomic) IKViewElement *regenerateCodeButtonElement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_stopObservingViewModel:(id)a0;
- (void)_startObservingViewModel:(id)a0;
- (void)didAddMessagesToMessageQueue:(id)a0;
- (BOOL)_updateOnscreenCodeViewModel:(id)a0 withTemplate:(id)a1;
- (id)_onscreenCodeViewModelWithViewModel:(id)a0;
- (BOOL)_updateOnscreenCodeViewModel:(id)a0 error:(id *)a1;
- (id)_newViewModel;
- (BOOL)_updateViewModel:(id)a0 error:(id *)a1;

@end
