@class NSString, NSArray, UICollectionViewFlowLayout, AVTUIEnvironment, AVTGroupDialMaskingView, UICollectionView, AVTCenteringCollectionViewDelegate, NSIndexPath;
@protocol AVTGroupPickerDelegate;

@interface AVTGroupDial : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, AVTGroupPicker>

@property (readonly, nonatomic) AVTUIEnvironment *environment;
@property (readonly, nonatomic) NSArray *cachedGroupTitleSizes;
@property (readonly, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UICollectionViewFlowLayout *collectionViewLayout;
@property (readonly, nonatomic) AVTCenteringCollectionViewDelegate *centeringCollectionViewDelegate;
@property (nonatomic) unsigned long long currentScrollDirection;
@property (nonatomic) long long currentSelectedItemIndex;
@property (nonatomic) BOOL isMoving;
@property (nonatomic) BOOL hasFinalizedSelection;
@property (retain, nonatomic) AVTGroupDialMaskingView *maskingView;
@property (nonatomic) NSIndexPath *shimmeringItemIndexPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSArray *groupItems;
@property (weak, nonatomic) id<AVTGroupPickerDelegate> delegate;
@property (nonatomic) long long selectedGroupIndex;

+ (double)estimatedContentWidthForTitleSizes:(id)a0;
+ (BOOL)shouldScrollGivenTitleSizes:(id)a0 fittingWidth:(double)a1;

- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)reloadData;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)setupDial;
- (void)scrollViewDidScroll:(id)a0;
- (void)setupMasking;
- (void)cacheTitleSizes;
- (struct CGSize { double x0; double x1; })cellSizeForItemAtIndex:(long long)a0;
- (void)selectItemAtIndex:(long long)a0 updateScrollPosition:(BOOL)a1 animated:(BOOL)a2;
- (void)setSelectedGroupIndex:(long long)a0 animated:(BOOL)a1;
- (void)stopDiscoverability;
- (void)updateSelectedState:(BOOL)a0 forItemAtIndexPath:(id)a1 animated:(BOOL)a2;
- (void)updateForEndingScroll;
- (id)initWithGroupItems:(id)a0 environment:(id)a1;
- (void)startDiscoverability;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)layoutSubviews;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)setContentPadding:(double)a0;

@end
