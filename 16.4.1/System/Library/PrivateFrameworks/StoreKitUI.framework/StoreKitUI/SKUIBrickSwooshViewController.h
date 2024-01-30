@class NSArray, NSString, UICollectionView, NSMutableIndexSet, SKUISwooshView;

@interface SKUIBrickSwooshViewController : SKUISwooshViewController <UICollectionViewDataSource, UICollectionViewDelegate> {
    UICollectionView *_collectionView;
    BOOL _delegateWantsWillDisplay;
    NSMutableIndexSet *_hiddenImageIndexSet;
    struct { double cellHeight; double cellWidth; double interItemSpacing; } _metrics;
    BOOL _showBrickTitles;
    NSString *_swooshTitle;
    SKUISwooshView *_swooshView;
}

@property (copy, nonatomic) NSArray *bricks;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)setDelegate:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (void)dealloc;
- (void)setClientContext:(id)a0;
- (void)deselectAllItems;
- (void)setColorScheme:(id)a0;
- (void).cxx_destruct;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;
- (id)indexPathsForVisibleItems;
- (void)setImage:(id)a0 forItemAtIndex:(long long)a1;
- (id)initWithSwoosh:(id)a0;
- (struct { double x0; double x1; double x2; })_brickSwooshMetrics;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForItemAtIndex:(long long)a0;
- (id)popImageViewForItemAtIndex:(long long)a0;
- (void)unhideImages;

@end
