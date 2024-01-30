@interface PETAggregateStateStorage : NSObject

+ (id)storageInMemory;
+ (id)storageOnDisk:(id)a0;

- (void)saveCorruptState;
- (void)reset;
- (BOOL)resetLocked;
- (void)expand:(unsigned long long)a0 andRunWithLock:(id /* block */)a1;
- (void)runWithLock:(id /* block */)a0;

@end
