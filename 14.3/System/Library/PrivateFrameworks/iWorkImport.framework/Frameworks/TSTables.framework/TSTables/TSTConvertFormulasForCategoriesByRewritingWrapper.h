@class TSCEFormulaRewriteSpec, TSCECalculationEngine;

@interface TSTConvertFormulasForCategoriesByRewritingWrapper : NSObject {
    TSCEFormulaRewriteSpec *_rewriteSpecBaseToChrome;
    TSCEFormulaRewriteSpec *_rewriteSpecChromeToBase;
}

@property (readonly, nonatomic) TSCECalculationEngine *calcEngine;
@property (readonly, nonatomic) TSCEFormulaRewriteSpec *rewriteSpec;

+ (BOOL)isMoveRewriteType:(int)a0;

- (void).cxx_destruct;
- (id)initWithCalcEngine:(id)a0 rewriteSpec:(id)a1;
- (id)convertFromBaseToChromeForCategorizedTableMove:(id)a0 containingCell:(const struct TSCEFormulaContainingCell { struct TSCECellRef { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct UUIDData<TSP::UUIDData> { union { unsigned char x0[16]; struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; } x1; struct { unsigned long long x0; unsigned long long x1; } x2; } x0; } x1; } x0; struct TSCECellRef { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct UUIDData<TSP::UUIDData> { union { unsigned char x0[16]; struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; } x1; struct { unsigned long long x0; unsigned long long x1; } x2; } x0; } x1; } x1; BOOL x2; BOOL x3; } *)a1;
- (id)convertFromChromeToBaseForCategorizedTableMove:(id)a0 containingCell:(const struct TSCEFormulaContainingCell { struct TSCECellRef { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct UUIDData<TSP::UUIDData> { union { unsigned char x0[16]; struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; } x1; struct { unsigned long long x0; unsigned long long x1; } x2; } x0; } x1; } x0; struct TSCECellRef { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct UUIDData<TSP::UUIDData> { union { unsigned char x0[16]; struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; } x1; struct { unsigned long long x0; unsigned long long x1; } x2; } x0; } x1; } x1; BOOL x2; BOOL x3; } *)a1;

@end
