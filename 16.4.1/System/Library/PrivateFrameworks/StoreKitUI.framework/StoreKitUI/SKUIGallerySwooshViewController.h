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

- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)setDelegate:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (void)setColorScheme:(id)a0;
- (void).cxx_destruct;
- (void)loadView;
- (id)indexPathsForVisibleItems;
- (void)setImage:(id)a0 forItemAtIndex:(long long)a1;
- (id)_newViewWithMediaComponent:(id)a0;
- (id)artworkForItemAtIndex:(long long)a0;
- (id)initWithGallerySwoosh:(id)a0;
- (void)mediaView:(id)a0 playbackStateDidChange:(long long)a1;
- (void)performActionForItemAtIndex:(long long)a0 animated:(BOOL)a1;

@end
