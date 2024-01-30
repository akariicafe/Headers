@interface PETAggregateStateStorage : NSObject

+ (id)storageInMemory;
+ (id)storageOnDisk:(id)a0;

- (BOOL)resetLocked;
- (void)saveCorruptState;
- (void)expand:(unsigned long long)a0 andRunWithLock:(id /* block */)a1;
- (void)runWithLock:(id /* block */)a0;
- (void)reset;

@end
