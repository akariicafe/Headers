@class GKChallenge, NSArray, GKComposeHeaderField;

@interface GKChallengeComposeController : GKSimpleComposeController

@property (retain, nonatomic) GKComposeHeaderField *challengeField;
@property (retain, nonatomic) GKChallenge *challenge;
@property (retain, nonatomic) NSArray *playersToLoad;

+ (id)friendPickerFlowForChallenge:(id)a0 selectPlayers:(id)a1 defaultMessage:(id)a2 completionHandler:(id /* block */)a3;
+ (id)composeFlowForChallenge:(id)a0 players:(id)a1 defaultMessage:(id)a2 completionHandler:(id /* block */)a3;
+ (void)composeAndSendFlowForChallenge:(id)a0 selectPlayers:(id)a1 defaultMessage:(id)a2 forcePicker:(BOOL)a3 readyHandler:(id /* block */)a4 completionHandler:(id /* block */)a5;

- (void)cancel;
- (id)init;
- (void)dealloc;
- (id)initWithChallenge:(id)a0 defaultMessage:(id)a1 players:(id)a2;
- (void)loadView;
- (void)updateChallengeText;
- (void)viewWillAppear:(BOOL)a0;
- (void)donePressed;
- (void)viewDidLoad;

@end
