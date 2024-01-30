@class TSCECalculationEngine, NSMutableDictionary, TSTTableModel;

@interface TSTHiddenStatesOwner : NSObject {
    TSCECalculationEngine *_calcEngine;
    NSMutableDictionary *_hiddenStatesByRowExtentUuid;
    NSMutableDictionary *_hiddenStatesByColumnExtentUuid;
}

@property (weak, nonatomic) TSTTableModel *tableModel;
@property (nonatomic) struct TSKUIDStruct { unsigned long long _lower; unsigned long long _upper; } baseTableUID;

- (id)description;
- (void).cxx_destruct;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (id)calcEngine;
- (id)hiddenStates;
- (void)didChangeExtentUids:(id)a0;
- (id)hiddenStatesByExtentUid:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a0;
- (id)initWithArchive:(const void *)a0 unarchiver:(id)a1 forBaseTable:(id)a2;
- (id)initWithBaseTable:(id)a0;
- (void)registerHiddenStates:(id)a0 baseOwnerUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a1;
- (int)registerWithCalcEngine:(id)a0 baseOwnerUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a1;
- (void)remapTableUIDsInFormulasWithMap:(const void *)a0 calcEngine:(id)a1;
- (void)unregisterFromCalcEngine;
- (void)unregisterHiddenStates:(id)a0;
- (void)willChangeExtentUids:(id)a0;

@end
