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
- (void)contactStoreDidChange:(id)a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (id)groupsStyle;
- (void)done:(id)a0;
- (id)layout;
- (id)doneButtonItem;
- (void)resetShowButtonFont;
- (void)showAllButtonTapped;
- (void)configureDataSource;
- (void)toggleSelectionOfItem:(id)a0;
- (void)applicationDidResume;
- (void)viewWillAppear:(BOOL)a0;
- (void)contentSizeCategoryDidChange:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidLoad;

@end
