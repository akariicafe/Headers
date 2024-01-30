@class NSString, ICDocCamThumbnailCollectionViewLayout, ICDocCamImageCache, NSMutableArray;
@protocol ICDocCamThumbnailViewDelegate;

@interface ICDocCamThumbnailCollectionViewController : UICollectionViewController <UICollectionViewDataSource, UICollectionViewDelegate, ICDocCamThumbnailViewLayoutDelegate>

@property (weak, nonatomic) id<ICDocCamThumbnailViewDelegate> delegate;
@property (retain, nonatomic) ICDocCamThumbnailCollectionViewLayout *layout;
@property (nonatomic) BOOL isPerformingBatchUpdates;
@property (nonatomic) BOOL needReloadAfterBatchUpdates;
@property (retain, nonatomic) NSMutableArray *documentInfoArray;
@property (retain, nonatomic) ICDocCamImageCache *imageCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void).cxx_destruct;
- (id)rootView;
- (BOOL)shouldAutorotate;
- (void)update;
- (void)didReceiveMemoryWarning;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (id)initWithDelegate:(id)a0;
- (unsigned long long)supportedInterfaceOrientations;
- (BOOL)_canShowWhileLocked;
- (void)viewDidLoad;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 imageSizeAtIndex:(long long)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })targetViewRect;
- (void)animateLayoutChange;
- (void)addNewDocument:(id)a0 completionBlock:(id /* block */)a1;
- (void)setImageWithUUID:(id)a0 forCell:(id)a1 useResizedImage:(BOOL)a2;
- (void)reloadDataForCollectionView;

@end
