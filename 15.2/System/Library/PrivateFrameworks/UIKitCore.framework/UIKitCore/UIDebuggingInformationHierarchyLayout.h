@class NSDictionary, NSMutableDictionary, NSMutableArray;
@protocol UIDebuggingInformationHierarchyLayoutDelegate;

@interface UIDebuggingInformationHierarchyLayout : UICollectionViewLayout {
    NSMutableArray *_indexPathsToDelete;
}

@property (retain, nonatomic) NSDictionary *allAttributes;
@property (retain, nonatomic) NSMutableDictionary *allLineAttributes;
@property (weak, nonatomic) id<UIDebuggingInformationHierarchyLayoutDelegate> delegate;

+ (Class)layoutAttributesClass;

- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)a0 atIndexPath:(id)a1;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (id)indexPathsToDeleteForSupplementaryViewOfKind:(id)a0;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)prepareLayout;
- (void)invalidateLayout;
- (void)prepareForCollectionViewUpdates:(id)a0;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_recomputeAttributes;
- (void).cxx_destruct;

@end
