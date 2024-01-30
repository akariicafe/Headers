@interface DIDiskArbEmulation : DIDiskArb

- (void)addDisappearedCallbackWithMountPoint:(id)a0 shadowMountPoints:(id)a1 delegate:(id)a2;
- (id)copyDescriptionWithBSDName:(id)a0;
- (BOOL)ejectWithBSDName:(id)a0 error:(id *)a1;
- (BOOL)unmountWithMountPoint:(id)a0 error:(id *)a1;
- (BOOL)waitForDAIdleWithError:(id *)a0;

@end
