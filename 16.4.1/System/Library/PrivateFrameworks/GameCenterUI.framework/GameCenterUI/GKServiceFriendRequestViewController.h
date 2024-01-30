@class NSString, NSArray, MFMessageComposeViewController;

@interface GKServiceFriendRequestViewController : GKServiceViewController <MFMessageComposeViewControllerInternalDelegate>

@property (retain, nonatomic) MFMessageComposeViewController *composeController;
@property (retain, nonatomic) NSString *friendCode;
@property (retain, nonatomic) NSString *friendSupportPageURL;
@property (retain, nonatomic) NSArray *recipients;
@property (retain, nonatomic) NSString *chatGUID;
@property (nonatomic) BOOL messageComposeSent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)messageComposeViewController:(id)a0 didFinishWithResult:(long long)a1;
- (BOOL)_useBackdropViewForWindowBackground;
- (void)constructPrivateViewController;
- (void)displayAlertWithTitle:(id)a0 andMessage:(id)a1;
- (void)messageComposeViewController:(id)a0 shouldSendMessage:(id)a1 toRecipients:(id)a2 completion:(id /* block */)a3;
- (void)setInitialState:(id)a0 withReply:(id /* block */)a1;
- (BOOL)shouldAnimatePresentationForPrivateViewController:(id)a0;

@end
