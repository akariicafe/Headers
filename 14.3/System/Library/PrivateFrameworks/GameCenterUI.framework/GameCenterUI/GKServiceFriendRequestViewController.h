@class NSString, NSArray, MFMessageComposeViewController;

@interface GKServiceFriendRequestViewController : GKServiceViewController <MFMessageComposeViewControllerInternalDelegate>

@property (retain, nonatomic) MFMessageComposeViewController *composeController;
@property (retain, nonatomic) NSString *friendCode;
@property (retain, nonatomic) NSString *friendSupportPageURL;
@property (retain, nonatomic) NSArray *recipients;
@property (nonatomic) BOOL messageComposeSent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)messageComposeViewController:(id)a0 didFinishWithResult:(long long)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)constructPrivateViewController;
- (void)displayAlertWithTitle:(id)a0 andMessage:(id)a1;
- (void)messageComposeViewController:(id)a0 shouldSendMessage:(id)a1 toRecipients:(id)a2 completion:(id /* block */)a3;
- (BOOL)_useBackdropViewForWindowBackground;
- (BOOL)shouldAnimatePresentationForPrivateViewController:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)setInitialState:(id)a0 withReply:(id /* block */)a1;

@end
