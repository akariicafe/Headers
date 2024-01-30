@class NSArray, AVExternalDevice, CNContactListCollectionView, CNStarkNoContentBannerView, UIView, NSString;

@interface CNStarkContactsListViewController : CNContactListViewController <CNContactListViewControllerDelegate>

@property (retain, nonatomic) NSArray *displayedContactProperties;
@property (retain, nonatomic) CNContactListCollectionView *contactListTableView;
@property (retain, nonatomic) CNStarkNoContentBannerView *overlayView;
@property (retain, nonatomic) UIView *siriHeaderView;
@property (nonatomic) BOOL limitedUI;
@property (retain, nonatomic) AVExternalDevice *externalDevice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)makeContactsDisplayedProperties;
+ (id)collectionViewLayoutWithFloatingHeaderViews:(BOOL)a0 contactListStyleApplier:(id)a1 directionalLayoutMargins:(id /* block */)a2 hasNoContacts:(id /* block */)a3;

- (void)contactDataSourceDidChange:(id)a0;
- (id)contactListStyleApplier;
- (id)initWithCollectionViewLayout:(id)a0;
- (id)createCollectionView;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)contactListViewController:(id)a0 didSelectContact:(id)a1;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (double)headerViewWidthForSize:(struct CGSize { double x0; double x1; })a0;
- (id)collectionView:(id)a0 contextMenuConfigurationForItemsAtIndexPaths:(id)a1 point:(struct CGPoint { double x0; double x1; })a2;
- (void)showContactListTableView;
- (void)setupDataSource;
- (void)showOverlayView;
- (void)limitedUINotification:(id)a0;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (void)refreshTableViewHeaderWithSize:(struct CGSize { double x0; double x1; })a0;
- (void)dealloc;
- (void)viewDidLoad;
- (BOOL)shouldShowDuplicateBannerView;
- (void)handleSiriHeaderViewTap:(id)a0;
- (void)contactListViewController:(id)a0 didSelectContact:(id)a1 shouldScrollToContact:(BOOL)a2;
- (id)init;
- (id)initWithDataSource:(id)a0 searchable:(BOOL)a1 environment:(id)a2 shouldUseLargeTitle:(BOOL)a3;
- (void)postMessageOverlayIfNecessary;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })viewDirectionalLayoutMargins;
- (void)updateLimitedUI;
- (void).cxx_destruct;
- (BOOL)canManageDuplicateContacts;
- (void)viewWillAppear:(BOOL)a0;

@end
