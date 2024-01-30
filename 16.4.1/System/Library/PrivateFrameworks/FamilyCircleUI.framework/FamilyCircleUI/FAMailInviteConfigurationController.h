@class UIViewController, NSString, LPLinkMetadata, NSArray, FAInviteContext, FAInviteRecipientEvaluator, MFMailComposeViewController;
@protocol FAInviteControllerDelegate;

@interface FAMailInviteConfigurationController : NSObject <MFMailComposeViewControllerDelegate, FAInviteConfigurationController> {
    MFMailComposeViewController *_mailComposeViewController;
    UIViewController *_presentationContext;
    LPLinkMetadata *_linkMetadata;
    NSArray *_recipientAddresses;
    FAInviteRecipientEvaluator *_inviteRecipientEvaluator;
    NSString *_familySuggestionEmailAddress;
}

@property (class, readonly) BOOL isAvailable;

@property (readonly, nonatomic) FAInviteContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<FAInviteControllerDelegate> delegate;

- (void).cxx_destruct;
- (void)mailComposeController:(id)a0 didFinishWithResult:(long long)a1 error:(id)a2;
- (id)_mailComposeViewController;
- (void)mailComposeController:(id)a0 shouldSendMail:(id)a1 toRecipients:(id)a2 completion:(id /* block */)a3;
- (void)presentWhenReadyWithCompletion:(id /* block */)a0;
- (void)_presentInviteControllerWithCompletion:(id /* block */)a0;
- (id)initWithInviteContext:(id)a0 presentingController:(id)a1 email:(id)a2;

@end
