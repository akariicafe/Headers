@class TSCEUuidReferences;
@protocol TSCECalculationEngineRegistration, TSCEFormulaOwning;

@interface TSCEFormulaOwnerDependencies : TSPObject

@property (readonly, nonatomic) unsigned short formulaOwnerId;
@property (nonatomic) unsigned short ownerIndex;
@property (readonly, nonatomic) struct TSKUIDStruct { unsigned long long _lower; unsigned long long _upper; } formulaOwnerUid;
@property (nonatomic) void *dependencyTracker;
@property (readonly, nonatomic) void *cellDependencies;
@property (readonly, nonatomic) void *rangeDependencies;
@property (readonly, nonatomic) void *spanningColumnDependencies;
@property (readonly, nonatomic) void *spanningRowDependencies;
@property (readonly, nonatomic) void *volatileDependencies;
@property (readonly, nonatomic) void *wholeOwnerDependencies;
@property (readonly, nonatomic) void *errors;
@property (readonly, retain, nonatomic) TSCEUuidReferences *uuidReferences;
@property (retain, nonatomic) id<TSCEFormulaOwning> formulaOwner;
@property (retain, nonatomic) id<TSCECalculationEngineRegistration> calcEngineRegistrationObject;
@property (nonatomic) BOOL saveAsEmbiggenedFormat;
@property (readonly, nonatomic) struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } embiggenedCellCoord;
@property (nonatomic) BOOL isRegisteredWithCalcEngine;

- (void)willClose;
- (void)dealloc;
- (void).cxx_destruct;
- (void)saveToArchiver:(id)a0;
- (void)loadFromUnarchiver:(id)a0;
- (BOOL)duringSubOwnerUIDUpgrade;
- (id)initWithContext:(id)a0 dependencyTracker:(void *)a1 ownerID:(unsigned short)a2 ownerUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a3 owner:(id)a4 ownerIndex:(unsigned short)a5;
- (void)pushRangeAndSpanningDependents:(void *)a0 fromCoord:(const struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } *)a1 cellIsInACycle:(BOOL)a2;
- (void)resetOwnerUIDForUpgrade:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a0 forBaseOwner:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a1 ownerKind:(unsigned short)a2;
- (void)unpackAfterUnarchive;

@end
