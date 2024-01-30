@class TSUSparseArray, TSCECalculationEngine;

@interface TSTFormulaStore : NSObject {
    TSUSparseArray *_formulas;
    unsigned long long _nextIndex;
}

@property (nonatomic) struct UUIDData<TSP::UUIDData> { union { unsigned char _uuid[16]; struct { unsigned char byte0; unsigned char byte1; unsigned char byte2; unsigned char byte3; unsigned char byte4; unsigned char byte5; unsigned char byte6; unsigned char byte7; unsigned char byte8; unsigned char byte9; unsigned char byte10; unsigned char byte11; unsigned char byte12; unsigned char byte13; unsigned char byte14; unsigned char byte15; } _cfuuid; struct { unsigned long long _lower; unsigned long long _upper; } ; } ; } formulaOwnerUID;
@property (weak, nonatomic) TSCECalculationEngine *calcEngine;

+ (struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })coordFromIndex:(unsigned long long)a0;
+ (unsigned long long)indexFromCoord:(const struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } *)a0;
+ (struct TSUModelCellRect { struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; } x0; })rangeFromFormulaObject:(id)a0 atCoord:(const struct TSUModelCellCoord { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; } *)a1 useBoundingRange:(BOOL)a2;
+ (struct UUIDData<TSP::UUIDData> { union { unsigned char x0[16]; struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; } x1; struct { unsigned long long x0; unsigned long long x1; } x2; } x0; })tableUIDFromFormula:(id)a0 atCoord:(const struct TSUModelCellCoord { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; } *)a1;
+ (struct TSUModelCellRect { struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; } x0; })rangeFromFormulaObject:(id)a0 atCoord:(const struct TSUModelCellCoord { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; } *)a1;

- (void).cxx_destruct;
- (void)foreach:(id /* block */)a0;
- (id)description;
- (unsigned long long)maxIndex;
- (id).cxx_construct;
- (unsigned long long)formulaCount;
- (void)saveToArchive:(struct FormulaStoreArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedPtrField<TST::FormulaStoreArchive_FormulaStorePair> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x4; unsigned int x5; } *)a0 archiver:(id)a1;
- (id)initWithOwnerUID:(struct UUIDData<TSP::UUIDData> { union { unsigned char x0[16]; struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; } x1; struct { unsigned long long x0; unsigned long long x1; } x2; } x0; })a0;
- (struct TSUModelCellRect { struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; } x0; })rangeFromFormulaAtIndex:(unsigned long long)a0 useBoundingRange:(BOOL)a1;
- (unsigned long long)reserveNextIndex;
- (void)clearFormulaAtIndex:(unsigned long long)a0;
- (void)setFormulaObject:(id)a0 atIndex:(unsigned long long)a1;
- (id)formulaObjectAtIndex:(unsigned long long)a0;
- (struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })reserveNextCoordinate;
- (unsigned long long)markForRollback;
- (void)rollbackToMark:(unsigned long long)a0;
- (unsigned long long)appendIndexedFormula:(id)a0;
- (void)registerAllFormulaToCalculationEngine;
- (id)createFormulaObjectForRange:(struct TSUModelCellRect { struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; } x0; })a0 atIndex:(unsigned long long)a1 tableUID:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x0[16]; struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; } x1; struct { unsigned long long x0; unsigned long long x1; } x2; } x0; } *)a2;
- (struct UUIDData<TSP::UUIDData> { union { unsigned char x0[16]; struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; } x1; struct { unsigned long long x0; unsigned long long x1; } x2; } x0; })tableUIDFromFormulaAtIndex:(unsigned long long)a0;
- (void)remapRangeFormulasToOwnerUID:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x0[16]; struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; } x1; struct { unsigned long long x0; unsigned long long x1; } x2; } x0; } *)a0;
- (id)initWithOwnerUID:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x0[16]; struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; } x1; struct { unsigned long long x0; unsigned long long x1; } x2; } x0; } *)a0 archive:(const struct FormulaStoreArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedPtrField<TST::FormulaStoreArchive_FormulaStorePair> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x4; unsigned int x5; } *)a1 unarchiver:(id)a2;

@end
