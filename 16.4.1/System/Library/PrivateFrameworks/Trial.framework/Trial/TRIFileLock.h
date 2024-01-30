@interface TRIFileLock : NSObject

+ (int)_lockingFlagsFromFileLockMode:(struct { unsigned char x0; })a0;
+ (struct { unsigned char x0; })acquireLockOnPath:(id)a0 fileLockMode:(struct { unsigned char x0; })a1 blocking:(BOOL)a2 andRunBlock:(id /* block */)a3;

@end
