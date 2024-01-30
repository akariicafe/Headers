@class NSString, UICollectionView, SKUISwooshPageComponent, SKUISwooshView;
@protocol SKUIGallerySwooshViewControllerDelegate;

@interface SKUIGallerySwooshViewController : SKUISwooshViewController <SKUIEmbeddedMediaViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {
    UICollectionView *_collectionView;
    BOOL _delegateWantsWillDisplay;
    double _itemHeight;
    SKUISwooshView *_swooshView;
}

@property (readonly, nonatomic) SKUISwooshPageComponent *gallerySwoosh;
@property (weak, nonatomic) id<SKUIGallerySwooshViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (void)setColorScheme:(id)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)loadView;
- (void)setDelegate:(id)a0;
- (void).cxx_destruct;
- (void)setImage:(id)a0 forItemAtIndex:(long long)a1;
- (id)indexPathsForVisibleItems;
- (void)mediaView:(id)a0 playbackStateDidChange:(long long)a1;
- (id)_newViewWithMediaComponent:(id)a0;
- (id)artworkForItemAtIndex:(long long)a0;
- (void)performActionForItemAtIndex:(long long)a0 animated:(BOOL)a1;
- (id)initWithGallerySwoosh:(id)a0;

@end
