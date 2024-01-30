@interface TSCETablesByNameDistributor : TSCEDistributor <TSCETableNameChangeProtocol>

- (id)protocol;
- (void)didRemoveTableName:(id)a0 forTableUID:(struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })a1;
- (void)didAddTableName:(id)a0 forTableUID:(struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })a1;
- (void)didChangeTableName:(id)a0 fromTableName:(id)a1 forTableUID:(struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })a2;

@end
