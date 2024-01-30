@class NSArray, NSString, NSDictionary, MFMessageComposeViewController, NSURL, NSMutableArray, GKTournament;
@protocol GKMessageComposeViewControllerDelegate, GKDashboardNearbyBrowserDelegate;

@interface GKMessageComposeViewController : UIViewController <MFMessageComposeViewControllerInternalDelegate>

@property (retain, nonatomic) MFMessageComposeViewController *composeController;
@property (retain, nonatomic) NSDictionary *playerNamesToPlayers;
@property (retain, nonatomic) NSString *messageToSend;
@property (retain, nonatomic) NSMutableArray *friendsToInvite;
@property (retain, nonatomic) NSMutableArray *contactsToInvite;
@property (retain, nonatomic) NSURL *shareURL;
@property (weak, nonatomic) id<GKMessageComposeViewControllerDelegate> delegate;
@property (weak, nonatomic) id<GKDashboardNearbyBrowserDelegate> nearbyDelegate;
@property (retain, nonatomic) GKTournament *tournament;
@property (nonatomic) long long maximumSelectablePlayersForPicker;
@property (retain, nonatomic) NSArray *currentlySelectedPlayersForPicker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canSendText;

- (void).cxx_destruct;
- (void)messageComposeViewController:(id)a0 didFinishWithResult:(long long)a1;
- (void)messageComposeViewController:(id)a0 shouldSendMessage:(id)a1 toRecipients:(id)a2 completion:(id /* block */)a3;
- (void)setupPickerBlock;
- (void)showPlayerPickerForCompose;
- (void)addPlayersToMessageCompose:(id)a0;
- (id)contactForAddress:(id)a0 fromContactStore:(id)a1;
- (id)initWithMessage:(id)a0 maxNumberOfPlayers:(long long)a1;
- (void)preparePresentationForMinPlayers:(long long)a0 maxPlayers:(long long)a1 shareURL:(id)a2 completionHandler:(id /* block */)a3;

@end
