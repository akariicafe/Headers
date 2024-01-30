@interface FPCorpseProcess : FPUserProcess

- (id)_gatherOwnedVmObjects;
- (BOOL)_populateTask;
- (void)_gatherIdleExitStatus;
- (BOOL)_isAlive;

@end
