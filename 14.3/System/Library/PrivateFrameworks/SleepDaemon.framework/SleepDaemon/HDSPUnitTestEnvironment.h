@interface HDSPUnitTestEnvironment : HDSPEnvironment

- (BOOL)isDemoEnvironment;
- (id)init;
- (void)performBlock:(id /* block */)a0 withLock:(struct os_unfair_lock_s { unsigned int x0; } *)a1;

@end
