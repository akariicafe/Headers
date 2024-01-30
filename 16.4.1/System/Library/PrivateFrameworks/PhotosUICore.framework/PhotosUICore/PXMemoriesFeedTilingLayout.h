@class PXCollectionTileLayoutTemplate, PXMemoriesSpec, PXSectionedLayoutSnapshot, PXMemoriesFeedDataSource, PXIndexPathSet;
@protocol PXMemoriesFeedTilingLayoutDelegate;

@interface PXMemoriesFeedTilingLayout : PXTilingLayout {
    struct { BOOL contentsRectForItemAtIndexPathForAspectRatio; BOOL titleFontNameForItemAtIndexPath; } _delegateRespondsTo;
}

@property (readonly, nonatomic) PXCollectionTileLayoutTemplate *_tileLayoutTemplate;
@property (retain, nonatomic) PXMemoriesSpec *spec;
@property (nonatomic) struct PXSimpleIndexPath { long long dataSourceIdentifier; long long section; long long item; long long subitem; } highlightedMemoryIndexPath;
@property (retain, nonatomic) PXIndexPathSet *selectedMemoryIndexPaths;
@property (weak, nonatomic) id<PXMemoriesFeedTilingLayoutDelegate> delegate;
@property (readonly, nonatomic) PXSectionedLayoutSnapshot *layoutSnapshot;
@property (readonly, nonatomic) PXMemoriesFeedDataSource *dataSource;

- (void)prepareLayout;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentBounds;
- (void)setReferenceSize:(struct CGSize { double x0; double x1; })a0;
- (id)init;
- (void).cxx_destruct;
- (void)_addTileWithKind:(long long)a0 entryIndex:(unsigned long long)a1 memoryIndex:(unsigned long long)a2 usingBlock:(id /* block */)a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_contentsRectForItemAtIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0 forAspectRatio:(double)a1;
- (void)_enumerateTilesInLayoutItem:(id)a0 withOptions:(id)a1 usingBlock:(id /* block */)a2;
- (void)_invalidateSelectionTilesWithTag:(id)a0;
- (long long)_itemKindForTileKind:(long long)a0;
- (id)_titleFontNameForMemoryAtIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (id)_viewSpecForTileWithIdentifier:(struct PXTileIdentifier { unsigned long long x0; unsigned long long x1[10]; })a0 boundingSize:(struct CGSize { double x0; double x1; })a1;
- (unsigned long long)_zPositionForTileWithIdentifier:(struct PXTileIdentifier { unsigned long long x0; unsigned long long x1[10]; })a0;
- (long long)dataSourceIdentifierForTileIdentifier:(struct PXTileIdentifier { unsigned long long x0; unsigned long long x1[10]; })a0;
- (void)enumerateTilesInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withOptions:(id)a1 usingBlock:(id /* block */)a2;
- (BOOL)getGeometry:(struct PXTileGeometry { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGPoint { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x3; double x4; double x5; BOOL x6; struct CGSize { double x0; double x1; } x7; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x8; void *x9; } *)a0 group:(unsigned long long *)a1 userData:(id *)a2 forTileWithIdentifier:(struct PXTileIdentifier { unsigned long long x0; unsigned long long x1[10]; })a3;
- (struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })indexPathForMemoryAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })indexPathForTileIdentifier:(struct PXTileIdentifier { unsigned long long x0; unsigned long long x1[10]; })a0;
- (id)indexPathsForMemoriesInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithSpec:(id)a0 layoutSnapshot:(id)a1;
- (void)setLayoutSnapshot:(id)a0;
- (struct PXTileIdentifier { unsigned long long x0; unsigned long long x1[10]; })tileIdentifierAtIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0 withTileKind:(long long)a1;
- (long long)tileKindForTileIdentifier:(struct PXTileIdentifier { unsigned long long x0; unsigned long long x1[10]; })a0;

@end
