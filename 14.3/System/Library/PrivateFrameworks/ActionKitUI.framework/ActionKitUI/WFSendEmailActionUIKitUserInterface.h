@class NSString;

@interface WFSendEmailActionUIKitUserInterface : WFActionUserInterface <MFMailComposeViewControllerDelegate, WFSendEmailActionUserInterface>

@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)finishWithError:(id)a0;
- (void).cxx_destruct;
- (void)mailComposeController:(id)a0 didFinishWithResult:(long long)a1 error:(id)a2;
- (void)cancelPresentationWithCompletionHandler:(id /* block */)a0;
- (void)showWithEmailContent:(id)a0 preferredSendingEmailAddress:(id)a1 isManaged:(BOOL)a2 completionHandler:(id /* block */)a3;

@end
