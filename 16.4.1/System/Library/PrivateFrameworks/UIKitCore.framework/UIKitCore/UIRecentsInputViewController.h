@class NSString, UILexicon, UIView, NSLayoutConstraint, UIViewController;
@protocol UIRecentsInputViewControllerDelegate;

@interface UIRecentsInputViewController : UITableViewController

@property (retain, nonatomic) NSLayoutConstraint *widthConstraint;
@property (retain, nonatomic) NSLayoutConstraint *heightConstraint;
@property (retain, nonatomic) NSString *previouslyUsedString;
@property (retain, nonatomic) NSString *clearAllString;
@property (retain, nonatomic) NSString *enterNewString;
@property (retain, nonatomic) UIView *headerView;
@property (retain, nonatomic) UIView *headerContainerView;
@property (retain, nonatomic) UIViewController *headerContainerViewController;
@property (weak, nonatomic) id<UIRecentsInputViewControllerDelegate> recentInputDelegate;
@property (retain, nonatomic) UILexicon *recentInputs;
@property (nonatomic) long long containingEffectStyle;
@property (nonatomic) BOOL canManageList;
@property (retain, nonatomic) UIView *customHeaderView;

- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)_delete:(id)a0;
- (void)viewDidLoad;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void)viewDidAppear:(BOOL)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (id)preferredFocusedView;
- (void)scrollViewDidChangeContentSize:(id)a0;
- (void)_overrideTraitCollectionForHeaderViewController;
- (void)didSelectButtonAtIndexPath:(id)a0;
- (void)ensureConstraints;
- (id)indexPathForPreferredFocusedViewInTableView:(id)a0;
- (BOOL)tableView:(id)a0 canEditRowAtIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 canFocusRowAtIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 canMoveRowAtIndexPath:(id)a1;
- (void)updateTableViewWidth;

@end
