@interface ICMachineDataSyncOperation : ICMachineDataOperation

- (void)execute;
- (void)_finishWithSyncState:(id)a0 error:(id)a1;

@end
