@class NSString;

@interface WFAddNewEventActionUIKitUserInterface : WFActionUserInterface <WFAddNewEventActionUserInterface, EKEventEditViewDelegate>

@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)eventEditViewController:(id)a0 didCompleteWithAction:(long long)a1;
- (void)cancelPresentationWithCompletionHandler:(id /* block */)a0;
- (void)showWithEventParameters:(id)a0 completionHandler:(id /* block */)a1;
- (void)finishWithEventIdentifier:(id)a0 error:(id)a1;

@end
