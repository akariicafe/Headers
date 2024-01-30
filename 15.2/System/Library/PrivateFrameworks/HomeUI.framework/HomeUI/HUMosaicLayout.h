@class NSString, NSMutableArray;
@protocol HUMosaicLayoutDelegate;

@interface HUMosaicLayout : UICollectionViewLayout <HUControllableCollectionViewLayout, HUProvidesMosaicFrames>

@property (retain, nonatomic) NSMutableArray *attributeCache;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentBounds;
@property (nonatomic) id<HUMosaicLayoutDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)prepareLayout;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)applyOverrideAttributes:(id)a0 toItem:(id)a1 atIndexPath:(id)a2;
- (void)clearOverrideAttributesForItem:(id)a0 atIndexPath:(id)a1;
- (void)clearAllOverrideAttributesForItems:(id)a0;
- (id)currentMosaicFrames;

@end
