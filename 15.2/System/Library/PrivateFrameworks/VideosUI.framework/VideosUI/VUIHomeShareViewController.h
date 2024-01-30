@class NSArray, NSString, VUIViewControllerContentPresenter, VUILibraryMenuItemViewCell;
@protocol VUIHomeShareViewControllerDelegate;

@interface VUIHomeShareViewController : VUILibraryStackViewController <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UICollectionViewDelegate>

@property (retain, nonatomic) NSArray *homeShares;
@property (retain, nonatomic) VUILibraryMenuItemViewCell *menuItemSizingCell;
@property (retain, nonatomic) VUIViewControllerContentPresenter *contentPresenter;
@property (weak, nonatomic) id<VUIHomeShareViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfSectionsInCollectionView:(id)a0;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)loadView;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)configureWithCollectionView:(id)a0;
- (void)_homeShareMediaLibrariesDidChange:(id)a0;

@end
