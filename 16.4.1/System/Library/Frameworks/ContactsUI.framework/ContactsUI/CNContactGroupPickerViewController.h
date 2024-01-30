@class NSArray, UICollectionView, UICollectionViewDiffableDataSource, _UIDiffableDataSourceOutlineSectionController, CNAccountsAndGroupsDataSource, NSString;
@protocol CNContactGroupPickerViewControllerDelegate;

@interface CNContactGroupPickerViewController : UIViewController <UICollectionViewDelegate>

@property (retain, nonatomic) CNAccountsAndGroupsDataSource *accountsAndGroupsDataSource;
@property (retain, nonatomic) NSArray *sourceAccountExternalIdentifiers;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UICollectionViewDiffableDataSource *diffableDataSource;
@property (retain, nonatomic) _UIDiffableDataSourceOutlineSectionController *sectionController;
@property (weak, nonatomic) id<CNContactGroupPickerViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)os_log;

- (id)initWithContactStore:(id)a0;
- (void)_updateContentUnavailableConfigurationUsingState:(id)a0;
- (BOOL)collectionView:(id)a0 shouldHighlightItemAtIndexPath:(id)a1;
- (void)reloadData;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)cancel:(id)a0;
- (BOOL)collectionView:(id)a0 shouldSelectItemAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)setupCollectionView;
- (id)cellAccessoriesForItem:(id)a0 enabled:(BOOL)a1;
- (id)accessoryTintColorForStateEnabled:(BOOL)a0;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })bottomSeparatorInsetsForIndexPath:(id)a0 configuration:(id)a1;
- (id)initWithContactStore:(id)a0 sourceAccountExternalIdentifiers:(id)a1;
- (BOOL)isValidGroupAtIndexPath:(id)a0;
- (void)setupDiffableDataSource;
- (void)setupNavigationButtons;

@end
