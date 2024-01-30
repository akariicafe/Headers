@class NSString;
@protocol CNFileServices, NSLocking;

@interface CNProcessSharedLock : NSObject <NSLocking> {
    id<NSLocking> _localLock;
    long long _localLockCount;
    int _fileDescriptor;
    id<CNFileServices> _fileServices;
}

@property (copy) NSString *name;
@property (readonly, copy) NSString *lockFilePath;

+ (id)recursiveSharedLockWithLockFilePath:(id)a0;
+ (id)sharedLockWithLockFilePath:(id)a0;
+ (id)semaphoreSharedLockWithLockFilePath:(id)a0;
+ (id)os_log;

- (void)unlock;
- (void)lock;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)ensureFileIsLocal:(id /* block */)a0;
- (id)errorUserInfo;
- (BOOL)openLockFile:(id /* block */)a0;
- (id)initWithLockFilePath:(id)a0 localLock:(id)a1;
- (id)initWithLockFilePath:(id)a0 localLock:(id)a1 fileServices:(id)a2;
- (BOOL)ensureFileDescriptorIsInvalid:(id /* block */)a0;
- (BOOL)isValidFileDescriptor;
- (id)errorUserInfoWithDescription:(id)a0;
- (void)lockRetryOnEDEADLK;
- (id)exceptionWithName:(id)a0 reason:(id)a1;
- (BOOL)isValid;
- (id)description;
- (BOOL)open:(id *)a0;
- (void)invalidate;

@end
