@class NSArray, NSString, FAInviteRecipientEvaluator;
@protocol FAActivityViewControllerDelegate, UIActivityItemSource;

@interface FAActivityViewController : UIActivityViewController <MFMessageComposeViewControllerInternalDelegate, MFMailComposeViewControllerDelegate, UIActivityViewControllerAirDropDelegate> {
    id<UIActivityItemSource> _itemSource;
    FAInviteRecipientEvaluator *_inviteRecipientEvaluator;
}

@property (retain, nonatomic) NSArray *recipientAddresses;
@property (nonatomic) BOOL didCompleteAirdropTransfer;
@property (weak, nonatomic) id<FAActivityViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)activityViewControllerDidFinishAirdropTransfer:(id)a0;
- (void)messageComposeViewController:(id)a0 didFinishWithResult:(long long)a1;
- (void)mailComposeController:(id)a0 didFinishWithResult:(long long)a1 error:(id)a2;
- (void)_prepareActivity:(id)a0 completion:(id /* block */)a1;
- (void)messageComposeViewController:(id)a0 shouldSendMessage:(id)a1 toRecipients:(id)a2 completion:(id /* block */)a3;
- (void)mailComposeController:(id)a0 shouldSendMail:(id)a1 toRecipients:(id)a2 completion:(id /* block */)a3;
- (id)_parseRecipientAddresses:(id)a0;
- (id)initWithItemSource:(id)a0;

@end
