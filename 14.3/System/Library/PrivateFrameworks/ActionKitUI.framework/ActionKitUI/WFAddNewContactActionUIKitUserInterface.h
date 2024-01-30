@class NSString;

@interface WFAddNewContactActionUIKitUserInterface : WFActionUserInterface <WFAddNewContactActionUserInterface, CNContactViewControllerDelegate>

@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)contactViewController:(id)a0 didCompleteWithContact:(id)a1;
- (void)cancelPresentationWithCompletionHandler:(id /* block */)a0;
- (void)showWithContactParameters:(id)a0 completionHandler:(id /* block */)a1;
- (void)finishWithContactIdentifier:(id)a0 error:(id)a1;

@end
