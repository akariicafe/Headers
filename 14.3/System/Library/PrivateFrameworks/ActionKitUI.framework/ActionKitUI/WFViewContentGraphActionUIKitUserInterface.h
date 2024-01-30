@class NSString;

@interface WFViewContentGraphActionUIKitUserInterface : WFActionUserInterface <UIAdaptivePresentationControllerDelegate, WFViewContentGraphActionUserInterface>

@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)presentationControllerWillDismiss:(id)a0;
- (void)done;
- (void)cancelPresentationWithCompletionHandler:(id /* block */)a0;
- (void)showWithContentItems:(id)a0 completionHandler:(id /* block */)a1;

@end
