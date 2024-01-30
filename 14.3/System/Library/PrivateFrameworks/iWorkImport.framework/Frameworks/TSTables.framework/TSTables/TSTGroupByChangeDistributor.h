@interface TSTGroupByChangeDistributor : TSCEDistributor <TSTGroupByChangeProtocol>

- (id)protocol;
- (void)didAddRowUID:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x0[16]; struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; } x1; struct { unsigned long long x0; unsigned long long x1; } x2; } x0; } *)a0 toGroup:(id)a1;
- (void)didRemoveRowUID:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x0[16]; struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; } x1; struct { unsigned long long x0; unsigned long long x1; } x2; } x0; } *)a0 fromGroup:(id)a1;
- (void)startOfGroupingChangesBatch;
- (void)endOfGroupingChangesBatch;
- (void)didChangeGroupByStructure;
- (void)didCreateGroup:(id)a0;
- (void)willRemoveGroup:(id)a0;
- (void)didRemoveGroup:(id)a0;

@end
