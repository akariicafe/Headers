@class NSTimer, MSStickerBrowserViewLayoutSpec, NSString, UICollectionViewFlowLayout, CKDispatchQueue, NSMutableDictionary, NSDictionary, NSMutableArray, UICollectionView;
@protocol MSStickerBrowserViewDataSource, MSStickerBrowserViewDisplayDelegate;

@interface MSStickerBrowserView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDataSourcePrefetching>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UICollectionViewFlowLayout *flowLayout;
@property (retain, nonatomic) MSStickerBrowserViewLayoutSpec *layoutSpec;
@property (retain, nonatomic) NSMutableArray *cellsToAnimate;
@property (retain, nonatomic) NSTimer *animationTimer;
@property (nonatomic) unsigned long long currentlyAnimatingIndex;
@property (nonatomic) struct CGPoint { double x; double y; } restoredContentOffset;
@property (nonatomic) struct CGSize { double width; double height; } browserSizeToRestoreFrom;
@property (nonatomic) BOOL isRestoringContentOffset;
@property (nonatomic, getter=isAnimating) BOOL animating;
@property (retain, nonatomic) NSMutableDictionary *stickerCache;
@property (retain, nonatomic) CKDispatchQueue *stickerCacheQueue;
@property (weak, nonatomic) id<MSStickerBrowserViewDisplayDelegate> displayDelegate;
@property (readonly, nonatomic) NSDictionary *stateRestorationInfo;
@property (readonly, nonatomic) long long stickerSize;
@property (weak, nonatomic) id<MSStickerBrowserViewDataSource> dataSource;
@property (nonatomic) struct CGPoint { double x0; double x1; } contentOffset;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } contentInset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)initWithCoder:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)didMoveToWindow;
- (void)reloadData;
- (void)setContentOffset:(struct CGPoint { double x0; double x1; })a0 animated:(BOOL)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)collectionView:(id)a0 prefetchItemsAtIndexPaths:(id)a1;
- (void)dealloc;
- (void)layoutSubviews;
- (void)prepareForSnapshotting;
- (void)setUserInteractionEnabled:(BOOL)a0;
- (void).cxx_destruct;
- (void)_startAnimating;
- (void)_stopAnimating;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 stickerSize:(long long)a1;
- (void)invalidateFlowLayout;
- (void)animateNextCell;
- (void)_reloadStickersAtIndexes:(id)a0;
- (id)_stickerAtIndexPath:(id)a0;
- (void)_updateCollectionViewSpecIfNeeded;
- (void)configureStickerView;
- (void)restoreFromState:(id)a0;

@end
