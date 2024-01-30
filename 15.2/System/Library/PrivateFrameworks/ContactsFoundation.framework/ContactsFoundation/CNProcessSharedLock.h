@class NSString;
@protocol CNFileServices, CNInhibitor, NSLocking;

@interface CNProcessSharedLock : NSObject <NSLocking> {
    id<NSLocking> _localLock;
    long long _localLockCount;
    int _fileDescriptor;
    id<CNFileServices> _fileServices;
}

@property (retain) id<CNInhibitor> runningBoardInhibitor;
@property (copy) NSString *name;
@property (readonly, copy) NSString *lockFilePath;

+ (id)recursiveSharedLockWithLockFilePath:(id)a0;
+ (id)sharedLockWithLockFilePath:(id)a0;
+ (id)semaphoreSharedLockWithLockFilePath:(id)a0;
+ (id)os_log;

- (void)unlock;
- (void)lock;
- (id)description;
- (BOOL)openLockFile:(id /* block */)a0;
- (id)errorUserInfo;
- (void).cxx_destruct;
- (id)initWithLockFilePath:(id)a0 localLock:(id)a1;
- (BOOL)ensureFileDescriptorIsInvalid:(id /* block */)a0;
- (id)initWithLockFilePath:(id)a0 localLock:(id)a1 fileServices:(id)a2;
- (BOOL)ensureFileIsLocal:(id /* block */)a0;
- (BOOL)isValidFileDescriptor;
- (id)errorUserInfoWithDescription:(id)a0;
- (void)lockRetryOnEDEADLK;
- (id)init;
- (id)exceptionWithName:(id)a0 reason:(id)a1;
- (void)invalidate;
- (void)dealloc;
- (BOOL)open:(id *)a0;
- (BOOL)isValid;

@end
