@interface FPCorpseProcess : FPUserProcess

- (void)_gatherIdleExitStatus;
- (id)_gatherOwnedVmObjects;
- (BOOL)_isAlive;
- (BOOL)_populateTask;

@end
