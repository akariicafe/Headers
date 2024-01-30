@class GKExtensionManager, NSString, UIAlertController, GKScore, GKTournament, GKTournamentDefinition, GKTournamentViewRequest;
@protocol GKTournamentViewControllerDelegate;

@interface GKTournamentViewController : UIViewController <GKTournamentHostInterface>

@property (retain, nonatomic) GKExtensionManager *extensionManager;
@property (retain, nonatomic) UIAlertController *alertController;
@property (retain, nonatomic) NSString *tournamentID;
@property (retain, nonatomic) GKScore *playerScore;
@property (nonatomic) BOOL playerResigned;
@property (retain, nonatomic) GKTournamentViewRequest *viewRequest;
@property (readonly, nonatomic) GKTournament *tournament;
@property (retain, nonatomic) GKTournamentDefinition *tournamentDefinition;
@property (weak, nonatomic) id<GKTournamentViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dismissViewControllerAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)willFinishWithError:(id)a0;
- (id)initWithViewRequest:(id)a0;
- (void)loadRemoteView;
- (void)viewWillAppear:(BOOL)a0;
- (void)didReceiveMemoryWarning;
- (oneway void)extensionWillFinish;
- (oneway void)extensionDidTerminateWithError:(id)a0;
- (oneway void)playTournament:(id)a0 withTryToken:(id)a1;
- (void)viewDidLoad;

@end
