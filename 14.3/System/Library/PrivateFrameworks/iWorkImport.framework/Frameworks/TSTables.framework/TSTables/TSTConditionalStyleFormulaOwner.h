@class TSCECalculationEngine, NSString, TSCECellCoordinateVector, TSTTableModel;

@interface TSTConditionalStyleFormulaOwner : NSObject <TSCEFormulaOwning> {
    TSCECalculationEngine *_calcEngine;
    struct TSCESubFormulaOwnerID { struct UUIDData<TSP::UUIDData> { union { unsigned char _uuid[16]; struct { unsigned char byte0; unsigned char byte1; unsigned char byte2; unsigned char byte3; unsigned char byte4; unsigned char byte5; unsigned char byte6; unsigned char byte7; unsigned char byte8; unsigned char byte9; unsigned char byte10; unsigned char byte11; unsigned char byte12; unsigned char byte13; unsigned char byte14; unsigned char byte15; } _cfuuid; struct { unsigned long long _lower; unsigned long long _upper; } ; } ; } _baseOwnerUID; unsigned short _ownerIndex; } _planeUID;
    TSCECellCoordinateVector *_cellsToInvalidate;
}

@property (nonatomic) struct UUIDData<TSP::UUIDData> { union { unsigned char _uuid[16]; struct { unsigned char byte0; unsigned char byte1; unsigned char byte2; unsigned char byte3; unsigned char byte4; unsigned char byte5; unsigned char byte6; unsigned char byte7; unsigned char byte8; unsigned char byte9; unsigned char byte10; unsigned char byte11; unsigned char byte12; unsigned char byte13; unsigned char byte14; unsigned char byte15; } _cfuuid; struct { unsigned long long _lower; unsigned long long _upper; } ; } ; } ownerUID;
@property (nonatomic) struct TSCESubFormulaOwnerID { struct UUIDData<TSP::UUIDData> { union { unsigned char _uuid[16]; struct { unsigned char byte0; unsigned char byte1; unsigned char byte2; unsigned char byte3; unsigned char byte4; unsigned char byte5; unsigned char byte6; unsigned char byte7; unsigned char byte8; unsigned char byte9; unsigned char byte10; unsigned char byte11; unsigned char byte12; unsigned char byte13; unsigned char byte14; unsigned char byte15; } _cfuuid; struct { unsigned long long _lower; unsigned long long _upper; } ; } ; } _baseOwnerUID; unsigned short _ownerIndex; } subOwnerID;
@property (nonatomic) TSTTableModel *tableModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allCondStyleFormulasForTable:(id)a0;

- (void).cxx_destruct;
- (id).cxx_construct;
- (long long)evaluationMode;
- (id)initWithTableModel:(id)a0;
- (unsigned short)ownerKind;
- (id)linkedResolver;
- (void)writeResultsForCalcEngine:(id)a0;
- (void)invalidateForCalcEngine:(id)a0;
- (struct TSCERecalculationState { unsigned char x0; })evaluateFormulaAt:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a0 withCalcEngine:(id)a1 recalcOptions:(struct TSCERecalculationState { unsigned char x0; })a2;
- (void)unregisterFromCalcEngine;
- (id)initWithTableModel:(id)a0 ownerUID:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x0[16]; struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; } x1; struct { unsigned long long x0; unsigned long long x1; } x2; } x0; } *)a1;
- (void)removeFormulasInRange:(struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; })a0;
- (void)replaceFormulaForConditionalStyle:(id)a0 atCellID:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a1;
- (int)registerWithCalcEngine:(id)a0 baseOwnerUID:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x0[16]; struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; } x1; struct { unsigned long long x0; unsigned long long x1; } x2; } x0; } *)a1;
- (void)removeFormulaAtCellID:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a0;
- (void)addFormulaForConditionalStyle:(id)a0 atCellID:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a1;
- (BOOL)checkConditionForCellID:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a0 withConditionalStyle:(id)a1 withIndex:(unsigned long long *)a2;
- (void)changedConditionForCellID:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a0;

@end
