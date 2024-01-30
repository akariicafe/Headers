@class ICDimensionSumCache, NSArray, NSSet, NSMutableDictionary, ICTableContentView, NSMutableSet, NSMutableArray, ICTableLayoutManager;
@protocol ICTableTextViewManagerDelegate;

@interface ICTableTextViewManager : NSObject

@property (readonly, nonatomic) NSMutableArray *columnIdentifiers;
@property (readonly, nonatomic) NSMutableArray *rowIdentifiers;
@property (readonly, nonatomic) NSMutableSet *prepopulatedColumns;
@property (readonly, nonatomic) NSMutableDictionary *columnTextViews;
@property (readonly, nonatomic) ICTableLayoutManager *tableLayoutManager;
@property (readonly, weak, nonatomic) ICTableContentView *contentView;
@property (readonly, nonatomic) ICDimensionSumCache *cachedColumnWidths;
@property (readonly, nonatomic) ICDimensionSumCache *cachedRowHeights;
@property (readonly, nonatomic) NSMutableDictionary *cachedCellHeights;
@property (retain, nonatomic) NSArray *previousRowIdentifiers;
@property (retain, nonatomic) NSMutableSet *columnsNeedingRestyle;
@property (nonatomic, getter=isUpdatingTiles) BOOL updatingTiles;
@property (nonatomic) unsigned long long anchorColumn;
@property (nonatomic) unsigned long long anchorRow;
@property (nonatomic) struct CGPoint { double x; double y; } anchorPoint;
@property (retain, nonatomic) NSSet *draggedColumns;
@property (retain, nonatomic) NSSet *draggedRows;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } boundingRect;
@property (readonly, nonatomic) NSArray *columnIDs;
@property (readonly, nonatomic) NSArray *rowIDs;
@property (weak, nonatomic) id<ICTableTextViewManagerDelegate> delegate;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)removeColumn:(id)a0;
- (void)moveColumnAtIndex:(unsigned long long)a0 toIndex:(unsigned long long)a1;
- (void)moveRowAtIndex:(unsigned long long)a0 toIndex:(unsigned long long)a1;
- (id)rowContainingY:(double)a0;
- (double)addColumn:(id)a0 atEnd:(BOOL)a1;
- (double)addRow:(id)a0 atEnd:(BOOL)a1;
- (void)adjustOnscreenPositions;
- (BOOL)cellContainingPoint:(struct CGPoint { double x0; double x1; })a0 columnID:(id *)a1 rowID:(id *)a2;
- (void)clearColumn:(id)a0;
- (void)clearColumnsOutsideFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)clearRow:(id)a0;
- (void)clearRowsOutsideFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)columnContainingX:(double)a0;
- (void)ensureCellPositionForColumn:(id)a0 andRow:(id)a1;
- (double)ensureChunkOfPopulatedColumnsForColumn:(id)a0;
- (double)ensureChunkOfPopulatedRowsForRow:(id)a0 shouldForce:(BOOL)a1;
- (void)enumerateTextViewsWithBlock:(id /* block */)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameOfCellAtColumn:(id)a0 row:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameOfColumn:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameOfRow:(id)a0;
- (void)heightChangedForRow:(id)a0 by:(double)a1;
- (id)initWithTableLayoutManager:(id)a0 view:(id)a1 cachedWidths:(id)a2 cachedRowHeights:(id)a3 cachedCellHeights:(id)a4;
- (struct CGPoint { double x0; double x1; })initialScrollPointForViewport:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)parentViewDidChange;
- (double)preAddColumn:(id)a0;
- (double)preAddRow:(id)a0 atYPosition:(double)a1;
- (struct CGPoint { double x0; double x1; })redrawAllWithViewport:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)restyleCells;
- (void)restyleTextView:(id)a0;
- (id)textViewForColumn:(id)a0;
- (id)textViewForColumn:(id)a0 createIfNeeded:(BOOL)a1;
- (void)updateAuthorHighlights;
- (struct CGPoint { double x0; double x1; })updateTilesWithViewport:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 redrawAll:(BOOL)a1;
- (void)validateRowHeightsForColumn:(id)a0;

@end
