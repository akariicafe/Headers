@interface TSTCellWillChangeDistributor : TSCEDistributor <TSTCellWillChangeProtocol>

- (id)protocol;
- (void)willApplyBaseCellMap:(id)a0 tableUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a1;
- (void)willApplyCell:(id)a0 baseCellCoord:(struct TSUModelCellCoord { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; })a1 tableUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a2;
- (void)willApplyConcurrentCellMap:(id)a0 tableUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a1;
- (void)willRemoveRows:(const void *)a0 tableUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a1;

@end
