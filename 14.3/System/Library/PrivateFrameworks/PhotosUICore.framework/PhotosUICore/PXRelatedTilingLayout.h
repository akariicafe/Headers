@class PXRelatedDataSource, PXRelatedSpec;
@protocol PXRelatedTilingLayoutDelegate;

@interface PXRelatedTilingLayout : PXTilingLayout {
    unsigned long long _dataSourceIdentifier;
    long long _numberOfEntries;
    long long _numberOfColumns;
    long long _numberOfRows;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _margins;
    struct CGSize { double width; double height; } _itemSize;
    struct CGSize { double width; double height; } _interItemSpacing;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _contentBounds;
    BOOL _isDataSourceTransient;
    struct { BOOL isPlaceholderEntryAtIndexPath; BOOL fontNameForEntryAtIndexPath; BOOL contentsRectForItemAtIndexPathForAspectRatio; } _delegateRespondsTo;
}

@property (weak, nonatomic) id<PXRelatedTilingLayoutDelegate> delegate;
@property (retain, nonatomic) PXRelatedDataSource *dataSource;
@property (retain, nonatomic) PXRelatedSpec *spec;
@property (nonatomic) long long maximumNumberOfRows;
@property (nonatomic) struct PXSimpleIndexPath { unsigned long long dataSourceIdentifier; long long section; long long item; long long subitem; } highlightedIndexPath;
@property (nonatomic) struct PXSimpleIndexPath { unsigned long long dataSourceIdentifier; long long section; long long item; long long subitem; } focusedIndexPath;

- (void)prepareLayout;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentBounds;
- (struct PXTileIdentifier { unsigned long long x0; unsigned long long x1[10]; })tileIdentifierForTileKind:(long long)a0 entryIndexPath:(struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectOfInterestForEntryAtIndexPath:(struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })a0;
- (struct PXTileIdentifier { unsigned long long x0; unsigned long long x1[10]; })_tileIdentifierForTileKind:(long long)a0 entryIndex:(long long)a1;
- (void)_enumerateEntryIndexesInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 usingBlock:(id /* block */)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_rectForEntryAtIndex:(long long)a0;
- (BOOL)_shouldShowActivityIndicator;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_rectForActivityIndicator;
- (BOOL)_shouldShowEmptyPlaceholder;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_rectForEmptyPlaceholder;
- (void)enumerateTilesInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withOptions:(id)a1 usingBlock:(id /* block */)a2;
- (BOOL)getGeometry:(out struct PXTileGeometry { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGPoint { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x3; double x4; double x5; BOOL x6; struct CGSize { double x0; double x1; } x7; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x8; void *x9; } *)a0 group:(out unsigned long long *)a1 userData:(out id *)a2 forTileWithIdentifier:(struct PXTileIdentifier { unsigned long long x0; unsigned long long x1[10]; })a3;
- (id)init;
- (void).cxx_destruct;
- (void)setReferenceSize:(struct CGSize { double x0; double x1; })a0;
- (struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })indexPathForTileIdentifier:(struct PXTileIdentifier { unsigned long long x0; unsigned long long x1[10]; })a0;
- (long long)tileKindForTileIdentifier:(struct PXTileIdentifier { unsigned long long x0; unsigned long long x1[10]; })a0;
- (struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })indexPathForEntryAtPoint:(struct CGPoint { double x0; double x1; })a0;

@end
