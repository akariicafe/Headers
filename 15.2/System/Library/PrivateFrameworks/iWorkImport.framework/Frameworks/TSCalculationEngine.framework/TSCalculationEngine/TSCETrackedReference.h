@interface TSCETrackedReference : NSObject <NSCopying> {
    struct TSCEASTNodeArray { char *x0; unsigned long long x1; unsigned long long x2; BOOL x3; } *_AST;
}

@property (nonatomic) struct TSUCellCoord { unsigned int row; unsigned short column; BOOL _preserveRow; BOOL _preserveColumn; } formulaCoord;

- (struct TSCEASTNodeArray { char *x0; unsigned long long x1; unsigned long long x2; BOOL x3; } *)ast;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initFromArchive:(const void *)a0;
- (void)encodeToArchive:(void *)a0 archiver:(id)a1;
- (id)initWithRangeRef:(const struct TSCERangeRef { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x1; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } *)a0;
- (id)initWithCellRef:(const struct TSCECellRef { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } *)a0;
- (id)referencesForCalcEngine:(id)a0 referenceTrackerUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a1;
- (struct TSCECellRef { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; })refersToCellRefForCalculationEngine:(id)a0 referenceTrackerUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a1;
- (id)precedentsWithCalcEngine:(id)a0 hostOwnerUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a1;
- (id)initWithSpanningRangeRef:(const struct TSCESpanningRangeRef { struct TSCERangeRef { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x1; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } x0; unsigned char x1; } *)a0;
- (id)initFromExpandedArchive:(const void *)a0;
- (id)initWithTrackedReferenceTSPObjectDeprecated:(id)a0;
- (id)initByCopyingASTNodeArray:(struct TSCEASTNodeArray { char *x0; unsigned long long x1; unsigned long long x2; BOOL x3; } *)a0 atFormulaCoord:(const struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } *)a1;
- (BOOL)isEqualToTrackedReference:(id)a0;
- (void)replaceContentsWithContentsOfTrackedReference:(id)a0;
- (id)getPrecedentsWithCalcEngine:(id)a0 hostOwnerUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a1;
- (void)registerWithCalcEngine:(id)a0 inOwner:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a1;
- (void)encodeToExpandedArchive:(void *)a0 archiver:(id)a1;

@end
