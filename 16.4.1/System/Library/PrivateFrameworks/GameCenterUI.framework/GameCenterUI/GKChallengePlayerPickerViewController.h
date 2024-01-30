@class UIView, NSString, NSArray, UIButton, UISearchBar, UITextField, GKChallenge, NSLayoutConstraint, UILabel, UIViewController;

@interface GKChallengePlayerPickerViewController : GKDashboardCollectionViewController <GKComposeControllerDelegate>

@property (retain, nonatomic) GKChallenge *challenge;
@property (retain, nonatomic) NSArray *initiallySelectedPlayers;
@property (nonatomic) BOOL shouldIgnoreClearSelection;
@property (nonatomic) UILabel *descriptionLabel;
@property (nonatomic) UIButton *sendButton;
@property (nonatomic) UITextField *messageField;
@property (nonatomic) UIButton *customizeMessageButton;
@property (retain, nonatomic) UIView *actionView;
@property (retain, nonatomic) UIView *titleView;
@property (retain, nonatomic) UISearchBar *searchBar;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (nonatomic) UIView *scrollingHeader;
@property (nonatomic) NSLayoutConstraint *scrollingHeaderTopConstraint;
@property (nonatomic) double scrollingHeaderTopConstraintConstant;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } initialInsets;
@property (nonatomic) BOOL shouldApplyInitialOffset;
@property (nonatomic) NSLayoutConstraint *customizeMessageBottomConstraint;
@property (nonatomic) double initialCustomizeMessageBottomConstraintConstant;
@property (retain, nonatomic) UIViewController *composeController;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) id /* block */ completionHandler;

- (void)collectionView:(id)a0 didDeselectItemAtIndexPath:(id)a1;
- (void)clearSelection;
- (void)addMessage:(id)a0;
- (void)searchBar:(id)a0 textDidChange:(id)a1;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)searchBarCancelButtonClicked:(id)a0;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)send:(id)a0;
- (void)searchBarSearchButtonClicked:(id)a0;
- (id)preferredFocusEnvironments;
- (void)cancel:(id)a0;
- (void)viewDidLoad;
- (void)setSearchText:(id)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)a0;
- (void)loadData;
- (void)addVisualEffectViewForView:(id)a0;
- (void)adjustCustomizeMessageConstraint;
- (void)applyInitialContentOffset;
- (void)configureButtonsFocusEffect;
- (void)configureCollectionView;
- (void)configureFocusGuides;
- (void)dataUpdated:(BOOL)a0 withError:(id)a1;
- (id)initWithChallenge:(id)a0 initiallySelectedPlayers:(id)a1;
- (void)selectPlayersAtIndexPaths:(id)a0;
- (void)setupNoContentView:(id)a0 withError:(id)a1;
- (void)updateButtonEnableState;

@end
