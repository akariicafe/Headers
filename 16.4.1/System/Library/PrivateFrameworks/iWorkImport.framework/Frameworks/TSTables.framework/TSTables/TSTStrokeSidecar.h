@class NSPointerArray, NSString;

@interface TSTStrokeSidecar : TSPObject <TSTCustomStrokeProviding>

@property (readonly, nonatomic) NSPointerArray *leftColumnStrokes;
@property (readonly, nonatomic) NSPointerArray *rightColumnStrokes;
@property (readonly, nonatomic) NSPointerArray *topRowStrokes;
@property (readonly, nonatomic) NSPointerArray *bottomRowStrokes;
@property (nonatomic) int maxOrder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isEmpty;
- (void).cxx_destruct;
- (id)initWithTableModel:(id)a0;
- (void)saveToArchiver:(id)a0;
- (void)loadFromUnarchiver:(id)a0;
- (void)p_setLeftStroke:(id)a0 order:(int)a1 atCellID:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a2;
- (void)setStrokeLayer:(id)a0 forLeftOfColumn:(unsigned short)a1;
- (id)strokeLayerForLeftSideOfColumn:(unsigned short)a0;
- (struct vector<TSTCellBorder *, std::allocator<TSTCellBorder *>> { id *x0; id *x1; struct __compressed_pair<TSTCellBorder *__strong *, std::allocator<TSTCellBorder *>> { id *x0; } x2; })accumulateCellBordersConcurrentlyInRow:(struct TSUModelRowIndex { unsigned int x0; })a0 atColumns:(void *)a1;
- (id)cellBorderAtCellID:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a0;
- (void)enumerateStrokesInRegion:(id)a0 usingTopStrokeBlock:(id /* block */)a1 usingBottomStrokeBlock:(id /* block */)a2 usingLeftStrokeBlock:(id /* block */)a3 usingRightStrokeBlock:(id /* block */)a4;
- (void)flattenStrokeOrder;
- (id)initForUpgradeWithTableModel:(id)a0;
- (void)insertColumns:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)insertRows:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)mightHaveCellBorderAtCellID:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a0;
- (void)moveColumnIndexRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 toIndex:(unsigned short)a1;
- (void)moveRowIndexRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 toIndex:(unsigned int)a1;
- (id)p_flattenMajorStrokeLayer:(id)a0 minorStrokeLayer:(id)a1;
- (void)p_setBottomStroke:(id)a0 order:(int)a1 atCellID:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a2;
- (void)p_setRightStroke:(id)a0 order:(int)a1 atCellID:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a2;
- (void)p_setStroke:(id)a0 order:(int)a1 inStrokesArray:(id)a2 atIndex:(unsigned int)a3 atRange:(struct TSTSimpleRange { long long x0; unsigned long long x1; })a4;
- (void)p_setTopStroke:(id)a0 order:(int)a1 atCellID:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a2;
- (struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; })p_strokeRect;
- (void)removeColumns:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)removeRows:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)setBordersWithCellMap:(id)a0;
- (void)setBordersWithConcurrentCellMap:(id)a0 forTableInfo:(id)a1;
- (void)setCellBorder:(id)a0 atCellID:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a1;
- (void)setStroke:(id)a0 forBottomOfRow:(unsigned int)a1 order:(int)a2 columnRange:(struct TSTSimpleRange { long long x0; unsigned long long x1; })a3;
- (void)setStroke:(id)a0 forLeftOfColumn:(unsigned short)a1 order:(int)a2 rowRange:(struct TSTSimpleRange { long long x0; unsigned long long x1; })a3;
- (void)setStroke:(id)a0 forRightOfColumn:(unsigned short)a1 order:(int)a2 rowRange:(struct TSTSimpleRange { long long x0; unsigned long long x1; })a3;
- (void)setStroke:(id)a0 forTopOfRow:(unsigned int)a1 order:(int)a2 columnRange:(struct TSTSimpleRange { long long x0; unsigned long long x1; })a3;
- (void)setStrokeLayer:(id)a0 forBottomOfRow:(unsigned int)a1;
- (void)setStrokeLayer:(id)a0 forRightOfColumn:(unsigned short)a1;
- (void)setStrokeLayer:(id)a0 forTopOfRow:(unsigned int)a1;
- (id)strokeLayerForBottomOfRow:(unsigned int)a0;
- (id)strokeLayerForRightSideOfColumn:(unsigned short)a0;
- (id)strokeLayerForTopOfRow:(unsigned int)a0;
- (void)swapRowAtIndex:(unsigned int)a0 withRowAtIndex:(unsigned int)a1;
- (id)unretainedStrokeLayerForBottomOfRow:(unsigned int)a0;
- (id)unretainedStrokeLayerForLeftSideOfColumn:(unsigned short)a0;
- (id)unretainedStrokeLayerForRightSideOfColumn:(unsigned short)a0;
- (id)unretainedStrokeLayerForTopOfRow:(unsigned int)a0;
- (void)updateForTableSize:(struct { unsigned int x0; unsigned int x1; })a0;

@end
