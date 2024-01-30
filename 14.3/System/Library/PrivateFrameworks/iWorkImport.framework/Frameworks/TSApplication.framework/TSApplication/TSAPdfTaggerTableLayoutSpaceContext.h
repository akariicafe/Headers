@class TSAPdfTaggerTableChunkContext, TSTLayoutSpace;

@interface TSAPdfTaggerTableLayoutSpaceContext : TSAPdfTaggerContext

@property (readonly, nonatomic) TSAPdfTaggerTableChunkContext *tableChunkContext;
@property (readonly, nonatomic) TSTLayoutSpace *tableLayoutSpace;
@property (readonly, nonatomic) struct TSUCellRect { struct TSUCellCoord { unsigned int row; unsigned short column; BOOL _preserveRow; BOOL _preserveColumn; } origin; struct { unsigned int numberOfColumns; unsigned int numberOfRows; } size; } bodyCellRange;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } bodyRowRange;
@property (nonatomic) unsigned int currentRowIndex;
@property (nonatomic) int currentTableRegion;

- (void).cxx_destruct;
- (void)addRow:(unsigned int)a0;
- (id)initWithStateOfTagger:(id)a0 tableLayoutSpace:(id)a1;

@end
