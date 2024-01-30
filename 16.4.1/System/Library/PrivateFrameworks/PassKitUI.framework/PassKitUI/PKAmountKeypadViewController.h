@class PKPeerPaymentRemoteMessagesComposer, NSString, PKPeerPaymentMessagesContentAmountEntryViewController, UIView, CNAvatarViewController, CNComposeRecipient;

@interface PKAmountKeypadViewController : UIViewController <PKPeerPaymentMessagesContentAmountEntryViewControllerDelegate> {
    CNComposeRecipient *_recipient;
    PKPeerPaymentRemoteMessagesComposer *_remoteMessagesComposer;
    PKPeerPaymentMessagesContentAmountEntryViewController *_amountEntryViewController;
    UIView *_containerView;
    CNAvatarViewController *_avatarViewController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;
- (void)_cancelButtonPressed;
- (id)currentBalance;
- (id)_peerPaymentController;
- (void)configureAvatarView;
- (void)handleAction:(unsigned long long)a0 completion:(id /* block */)a1;
- (id)initWithRemoteMessagesComposer:(id)a0 recipient:(id)a1;
- (id)maximumTransferAmount;
- (id)minimumTransferAmount;
- (void)setUpContainerView;
- (void)setUpNavigationBar;

@end
