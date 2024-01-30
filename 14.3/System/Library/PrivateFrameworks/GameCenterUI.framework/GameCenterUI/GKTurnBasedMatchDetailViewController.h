@class GKTurnBasedMatchDetailHeaderView, GKGame, GKTurnBasedParticipantsDataSource, NSObject, GKTurnBasedMatch;
@protocol GKTurnBasedMatchDetailViewControllerDelegate;

@interface GKTurnBasedMatchDetailViewController : GKBasicCollectionViewController

@property (retain, nonatomic) GKTurnBasedParticipantsDataSource *participantsDataSource;
@property (retain, nonatomic) GKTurnBasedMatchDetailHeaderView *headerView;
@property (nonatomic) double initialSectionHeaderHeight;
@property (retain, nonatomic) GKTurnBasedMatch *match;
@property (retain, nonatomic) GKGame *game;
@property (nonatomic) BOOL isInGame;
@property (nonatomic) BOOL shouldShowPlay;
@property (nonatomic) BOOL shouldShowQuit;
@property (weak, nonatomic) NSObject<GKTurnBasedMatchDetailViewControllerDelegate> *delegate;

- (BOOL)collectionView:(id)a0 shouldHighlightItemAtIndexPath:(id)a1;
- (BOOL)collectionView:(id)a0 shouldSelectItemAtIndexPath:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;
- (void)configureViewFactories;
- (void)configureMatchDetailHeader:(id)a0;
- (void)configureHeader:(id)a0 indexPath:(id)a1;
- (void)doneButtonPressed:(id)a0;
- (void)buyButtonPressed:(id)a0;
- (id)_gkRepresentedObject;
- (void)acceptInvitation:(id)a0;
- (void)chooseMatch:(id)a0;
- (void)configureDataSource;
- (void)quitMatch:(id)a0;
- (void)removeMatch:(id)a0;
- (void)handleTurnBasedEvent:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)declineInvitation:(id)a0;
- (void)setupActionButton;
- (void)didUpdateModel;
- (void)viewDidAppear:(BOOL)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)setActionButtonEnabled:(BOOL)a0;
- (void)didEnterNoContentState;
- (void)traitCollectionDidChange:(id)a0;
- (void)updateUIBasedOnTraitCollection;
- (void)viewDidLoad;

@end
