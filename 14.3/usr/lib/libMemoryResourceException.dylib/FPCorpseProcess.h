@interface FPCorpseProcess : FPUserProcess

- (BOOL)_isAlive;
- (id)initWithCorpse:(unsigned int)a0 pid:(int)a1 name:(id)a2 dirtyFlags:(unsigned int)a3 procFlags:(unsigned int)a4;
- (void)addLedgerData:(unsigned long long *)a0 count:(unsigned long long)a1;
- (BOOL)_populateTask;
- (void)_gatherIdleExitStatus;
- (id)_gatherOwnedVmObjects;

@end
