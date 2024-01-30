@class NSString, NSIndexPath;

@interface PKHeaderVerticalScrollingLayout : UICollectionViewFlowLayout <PKDashboardLayout> {
    NSIndexPath *_headerIndexPath;
    BOOL _needsCustomLocation;
}

@property (nonatomic) BOOL useStickyHeader;
@property (nonatomic) unsigned long long titleInset;
@property (nonatomic) BOOL fade;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (id)invalidationContextForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;
- (void).cxx_destruct;
- (id)_customAttributesForStickyHeader:(id)a0;
- (BOOL)_indexPathIsHeaderIndexPath:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insetsForSection:(long long)a0;

@end
