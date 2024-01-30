@class CNContactFormatter, NSIndexSet, TPFavoritesController, NSArray, UIView, CNAvatarViewControllerSettings;

@interface TPFavoritesViewController : UICollectionViewController

@property (class, readonly, nonatomic) CNAvatarViewControllerSettings *avatarViewControllerSettings;

@property (retain, nonatomic) CNContactFormatter *contactFormatter;
@property (retain, nonatomic) NSIndexSet *sections;
@property (nonatomic) BOOL contentUnavailable;
@property (retain, nonatomic) UIView *contentUnavailableView;
@property (readonly, nonatomic) TPFavoritesController *favoritesController;
@property (copy, nonatomic) NSArray *favoritesEntries;

- (BOOL)collectionView:(id)a0 canMoveItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (BOOL)collectionView:(id)a0 shouldSelectItemAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)commonInit;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)didReceiveMemoryWarning;
- (id)initWithCollectionViewLayout:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)relayoutCollectionView;
- (void)viewDidLoad;
- (void)handleContentSizeCategoryDidChangeNotification:(id)a0;
- (void)handleFavoritesControllerFavoritesEntriesDidChangeNotification:(id)a0;
- (void)setContentUnavailable:(BOOL)a0 animated:(BOOL)a1;
- (void)setFavoritesEntries:(id)a0 completionHandler:(id /* block */)a1;
- (void)refreshView;
- (void)postCNContactsClientDidDisplayFavoritesNotification;
- (id)favoritesEntryAtIndex:(long long)a0;
- (BOOL)useAccessibileLayout;
- (struct CGSize { double x0; double x1; })accessibleCellSizeFor:(id)a0 layout:(id)a1;
- (struct CGSize { double x0; double x1; })cellSizeFor:(id)a0 layout:(id)a1;
- (id)cellHeightToFitWidgetContainedCollectionView:(id)a0 layout:(id)a1;
- (void)refreshViewAnimated:(BOOL)a0;
- (void)setFavoritesController:(id)a0;

@end
