@class GKChallenge, NSArray, GKComposeHeaderField;

@interface GKChallengeComposeController : GKSimpleComposeController

@property (retain, nonatomic) GKComposeHeaderField *challengeField;
@property (retain, nonatomic) GKChallenge *challenge;
@property (retain, nonatomic) NSArray *playersToLoad;

+ (void)composeAndSendFlowForChallenge:(id)a0 selectPlayers:(id)a1 defaultMessage:(id)a2 forcePicker:(BOOL)a3 readyHandler:(id /* block */)a4 completionHandler:(id /* block */)a5;
+ (id)composeFlowForChallenge:(id)a0 players:(id)a1 defaultMessage:(id)a2 completionHandler:(id /* block */)a3;
+ (id)friendPickerFlowForChallenge:(id)a0 selectPlayers:(id)a1 defaultMessage:(id)a2 completionHandler:(id /* block */)a3;

- (void)cancel;
- (void)viewDidLoad;
- (id)init;
- (void).cxx_destruct;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;
- (void)donePressed;
- (id)initWithChallenge:(id)a0 defaultMessage:(id)a1 players:(id)a2;
- (void)updateChallengeText;

@end
