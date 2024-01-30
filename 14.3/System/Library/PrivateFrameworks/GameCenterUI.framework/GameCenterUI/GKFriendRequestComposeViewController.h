@class NSString, UIAlertController;
@protocol GKFriendRequestComposeViewControllerDelegate;

@interface GKFriendRequestComposeViewController : UINavigationController

@property (copy, nonatomic) NSString *message;
@property (nonatomic) unsigned long long recipientCount;
@property (nonatomic) unsigned int rid;
@property (retain, nonatomic) UIAlertController *alertController;
@property (weak, nonatomic) id<GKFriendRequestComposeViewControllerDelegate> composeViewDelegate;

+ (unsigned long long)maxNumberOfRecipients;
+ (BOOL)_preventsAppearanceProxyCustomization;

- (BOOL)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
- (id)init;
- (void).cxx_destruct;
- (void)sendFinishedMessageToDelegateCancelled:(BOOL)a0;
- (void)prepareForNewRecipients:(id)a0;
- (void)_addRecipientInternals:(id)a0;
- (void)addRecipientPlayers:(id)a0;
- (void)addRecipientsWithPlayerIDs:(id)a0;
- (void)addRecipientsWithEmailAddresses:(id)a0;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (BOOL)shouldAutomaticallyForwardRotationMethods;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (unsigned long long)supportedInterfaceOrientations;
- (void)_setupChildViewController;

@end
