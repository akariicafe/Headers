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

- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)dealloc;
- (void)viewDidLoad;
- (id)init;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;
- (void)_homeShareMediaLibrariesDidChange:(id)a0;
- (void)configureWithCollectionView:(id)a0;

@end
