@class _UIDiffableDataSourceOutlineSectionController, UICollectionViewDiffableDataSource, UICollectionView, NSString, CNAccountsAndGroupsDataSource, UIButton;
@protocol CNAccountsAndGroupsViewControllerDelegate;

@interface CNAccountsAndGroupsViewController : UIViewController <UICollectionViewDelegate>

@property (nonatomic) BOOL needsReload;
@property (nonatomic) BOOL tableViewNeedsReloadAfterResume;
@property (retain) UICollectionView *collectionView;
@property (retain) _UIDiffableDataSourceOutlineSectionController *sectionController;
@property (retain) UICollectionViewDiffableDataSource *diffableDataSource;
@property (retain) UIButton *showAllButton;
@property (retain, nonatomic) CNAccountsAndGroupsDataSource *dataSource;
@property (weak, nonatomic) id<CNAccountsAndGroupsViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reloadData;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)collectionView:(id)a0 shouldSelectItemAtIndexPath:(id)a1;
- (void)contentSizeCategoryDidChange:(id)a0;
- (void)applicationDidResume;
- (void).cxx_destruct;
- (id)groupsStyle;
- (void)traitCollectionDidChange:(id)a0;
- (id)doneButtonItem;
- (void)done:(id)a0;
- (void)resetShowButtonFont;
- (void)showAllButtonTapped;
- (void)configureDataSource;
- (void)toggleSelectionOfItem:(id)a0;
- (id)layout;
- (void)dealloc;
- (void)contactStoreDidChange:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;

@end
