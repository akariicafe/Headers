@interface BMFileLock : NSObject

+ (BOOL)acquireLockfile:(id)a0 andRunBlock:(id /* block */)a1;

- (id)init;

@end
