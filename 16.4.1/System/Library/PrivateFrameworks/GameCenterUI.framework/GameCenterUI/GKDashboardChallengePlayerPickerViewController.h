@class UIView, NSString, NSArray, UIButton, GKChallenge, UITextField, NSLayoutConstraint, UIViewController, UIBarButtonItem, UILabel;

@interface GKDashboardChallengePlayerPickerViewController : GKDashboardCollectionViewController <UITextFieldDelegate, UISearchBarDelegate, GKComposeControllerDelegate>

@property (retain, nonatomic) GKChallenge *challenge;
@property (retain, nonatomic) NSArray *initiallySelectedPlayers;
@property (nonatomic) BOOL shouldIgnoreClearSelection;
@property (nonatomic) UILabel *descriptionLabel;
@property (nonatomic) UIButton *sendButton;
@property (nonatomic) UIBarButtonItem *customizeMessageButton;
@property (nonatomic) UITextField *messageField;
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
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

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
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)loadData;
- (void)_updateButtonEnableState;
- (void)adjustCustomizeMessageConstraint;
- (void)applyInitialContentOffset;
- (void)dataUpdated:(BOOL)a0 withError:(id)a1;
- (id)initWithChallenge:(id)a0 initiallySelectedPlayers:(id)a1;
- (void)selectPlayersAtIndexPaths:(id)a0;
- (void)setupNoContentView:(id)a0 withError:(id)a1;

@end
