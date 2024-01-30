@class NSArray, UICollectionView, CNContactViewCache, UICollectionViewDiffableDataSource, CNAccountsAndGroupsDataSource, NSString;
@protocol CNContactContainerPickerViewControllerDelegate;

@interface CNContactContainerPickerViewController : UIViewController <UICollectionViewDelegate>

@property (retain, nonatomic) CNContactViewCache *contactViewCache;
@property (retain, nonatomic) CNAccountsAndGroupsDataSource *accountsDataSource;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UICollectionViewDiffableDataSource *dataSource;
@property (retain, nonatomic) NSArray *items;
@property (retain, nonatomic) NSArray *containers;
@property (weak, nonatomic) id<CNContactContainerPickerViewControllerDelegate> delegate;
@property (retain, nonatomic) NSArray *selectedContainerIdentifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)os_log;

- (void)collectionView:(id)a0 didDeselectItemAtIndexPath:(id)a1;
- (id)currentSnapshot;
- (id)writableContainersForAccount:(id)a0;
- (void)reloadData;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (BOOL)collectionView:(id)a0 shouldDeselectItemAtIndexPath:(id)a1;
- (BOOL)collectionView:(id)a0 shouldSelectItemAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)discoverContainers;
- (id)allAccounts;
- (void).cxx_destruct;
- (void)setupCollectionView;
- (id)dataSourceWithCellRegistration:(id)a0;
- (void)setupDoneButton;
- (id)initWithContactViewCache:(id)a0 selectedContainerIdentifiers:(id)a1;
- (void)setupDiffableDataSource;

@end
