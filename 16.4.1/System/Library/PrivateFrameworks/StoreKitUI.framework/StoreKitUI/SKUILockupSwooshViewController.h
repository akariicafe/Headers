@class NSString, NSArray, SKUIVideoImageDataConsumer, NSURL, SKUIItemArtworkContext, UICollectionView, SKUISwooshView, NSMutableIndexSet;

@interface SKUILockupSwooshViewController : SKUISwooshViewController <UICollectionViewDataSource, UICollectionViewDelegate> {
    UICollectionView *_collectionView;
    struct SKUILockupStyle { long long artworkSize; long long layoutStyle; unsigned long long visibleFields; } _defaultLockupStyle;
    BOOL _delegateWantsWillDisplay;
    BOOL _didInitialReload;
    struct CGSize { double width; double height; } _expectedImageSize;
    NSMutableIndexSet *_hiddenIconIndexSet;
    struct CGSize { double width; double height; } _maxCellSize;
    struct CGSize { double width; double height; } _maxImageSize;
    struct { struct CGSize { double width; double height; } iconSize; struct CGSize { double width; double height; } newsstandSize; struct CGSize { double width; double height; } newsstandSwooshSize; struct CGSize { double width; double height; } videoLockupIconSize; struct CGSize { double width; double height; } videoThumbnailSize; double horizontalPadding; double interItemSpacingMixed; double interItemSpacingNewsstand; double interItemSpacingVideoLockup; } _metrics;
    long long _seeAllStyle;
    NSString *_seeAllTitle;
    SKUISwooshView *_swooshView;
    SKUIVideoImageDataConsumer *_videoImageConsumer;
}

@property (nonatomic, getter=isSeeAllHidden) BOOL seeAllHidden;
@property (readonly, nonatomic) SKUIItemArtworkContext *artworkContext;
@property (readonly, nonatomic) SKUIVideoImageDataConsumer *videoImageConsumer;
@property (readonly, nonatomic) NSArray *items;
@property (copy, nonatomic) NSArray *lockups;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } seeAllButtonFrame;
@property (readonly, nonatomic) NSURL *seeAllURL;
@property (nonatomic) long long swooshType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)_swooshTypeForLockups:(id)a0;

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
- (id)initWithItemList:(id)a0;
- (void)setImage:(id)a0 forItemAtIndex:(long long)a1;
- (id)initWithSwoosh:(id)a0;
- (struct { struct CGSize { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; struct CGSize { double x0; double x1; } x3; struct CGSize { double x0; double x1; } x4; double x5; double x6; double x7; double x8; })_lockupSwooshMetrics;
- (struct CGSize { double x0; double x1; })_maximumCellSizeForImageSize:(struct CGSize { double x0; double x1; })a0;
- (id)_newArtworkContextForSwooshType:(long long)a0;
- (id)_newLockupComponentWithItem:(id)a0 defaultStyle:(struct SKUILockupStyle { long long x0; long long x1; unsigned long long x2; })a1;
- (void)_reloadSizes;
- (void)_seeAllAction:(id)a0;
- (void)_setExpectedImageSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForItemAtIndex:(long long)a0;
- (id)popImageViewForItemAtIndex:(long long)a0;
- (void)setItemsWithLockups:(id)a0;
- (void)setVideoThumbnail:(id)a0 forItemAtIndex:(long long)a1;
- (void)unhideImages;

@end
