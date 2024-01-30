@interface CDPCAAccountInfoRepairEffectivenessReporter : CDPCAReporter

- (id)init;
- (void)reportRepairAttemptFailedDueToAuthenticationError:(id)a0;
- (void)reportRepairAttemptFinishedWithSuccess:(BOOL)a0 authenticationError:(id)a1 accountInfoFetchErrorBeforeRepair:(id)a2 repairError:(id)a3 accountInfoFetchErrorAfterRepair:(id)a4 octagonStatusBefore:(unsigned long long)a5 octagonStatusAfter:(unsigned long long)a6 pcsStatusBefore:(unsigned long long)a7 pcsStatusAfter:(unsigned long long)a8 escrowKeysStatusBefore:(unsigned long long)a9 escrowKeysStatusAfter:(unsigned long long)a10;

@end
