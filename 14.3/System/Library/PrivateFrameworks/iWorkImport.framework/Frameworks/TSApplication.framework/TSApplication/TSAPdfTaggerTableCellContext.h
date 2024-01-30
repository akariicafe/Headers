@class TSAPdfTaggerTableLayoutSpaceContext;

@interface TSAPdfTaggerTableCellContext : TSAPdfTaggerContext

@property (readonly, nonatomic) TSAPdfTaggerTableLayoutSpaceContext *tableLayoutSpaceContext;
@property (readonly, nonatomic) struct TSUCellCoord { unsigned int row; unsigned short column; BOOL _preserveRow; BOOL _preserveColumn; } cellID;

- (void).cxx_destruct;
- (id)initWithStateOfTagger:(id)a0 cellID:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a1;

@end
