@interface TSTGroupByChangeDistributor : TSCEDistributor <TSTGroupByChangeProtocol>

- (id)protocol;
- (void)didAddRowUID:(struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })a0 toGroup:(id)a1;
- (void)didRemoveRowUID:(struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })a0 fromGroup:(id)a1;
- (void)startOfGroupingChangesBatch;
- (void)endOfGroupingChangesBatch;
- (void)didChangeGroupByStructure;
- (void)didCreateGroup:(id)a0;
- (void)willRemoveGroup:(id)a0;
- (void)didRemoveGroup:(id)a0;

@end
