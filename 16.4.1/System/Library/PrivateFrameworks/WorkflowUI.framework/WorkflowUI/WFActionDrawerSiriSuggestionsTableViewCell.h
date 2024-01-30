@class WFActionDrawerSiriSuggestionsCollectionViewManager, NSLayoutConstraint, UIImage, WFActionDrawerSection, UIButton, UIViewController, INIntent, UICollectionView, WFModuleTitleView;
@protocol WFActionDrawerSiriSuggestionsTableViewCellDailyRoutineDelegate;

@interface WFActionDrawerSiriSuggestionsTableViewCell : UITableViewCell <WFActionDrawerSiriSuggestionsCollectionViewManagerDelegate>

@property (weak, nonatomic) UIViewController *viewController;
@property (weak, nonatomic) id<WFActionDrawerSiriSuggestionsTableViewCellDailyRoutineDelegate> dailyRoutineDelegate;
@property (weak, nonatomic) WFModuleTitleView *titleView;
@property (weak, nonatomic) UIButton *infoButton;
@property (weak, nonatomic) UICollectionView *donationsCollectionView;
@property (retain, nonatomic) INIntent *intent;
@property (retain, nonatomic) UIImage *icon;
@property (retain, nonatomic) WFActionDrawerSiriSuggestionsCollectionViewManager *donationsCollectionViewManager;
@property (retain, nonatomic) NSLayoutConstraint *collectionViewHeightConstraint;
@property (readonly, nonatomic) WFActionDrawerSection *section;

+ (long long)cellTypeForIntent:(id)a0;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)configureForDailyRoutines:(BOOL)a0;
- (void)configureLoading;
- (void)configureWithActionDrawerSection:(id)a0;
- (void)configureWithActionDrawerSection:(id)a0 dailyRoutineDelegate:(id)a1 viewController:(id)a2;
- (void)infoButtonPressed;
- (void)siriSuggestionsCollectionViewManager:(id)a0 didSelectAction:(id)a1;
- (void)siriSuggestionsCollectionViewManager:(id)a0 showViewController:(id)a1;

@end
