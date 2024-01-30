@class NSString;

@interface IMLockFile : NSObject {
    int _fd;
}

@property (readonly, nonatomic) NSString *path;
@property (readonly, nonatomic) BOOL locked;

+ (id)iTunesSyncLockFile;
+ (id)iTunesSyncLockFilePath;

- (id)initWithPath:(id)a0;
- (void)unlock;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)tryLock:(BOOL)a0;
- (BOOL)lockWithBlock:(id /* block */)a0 error:(id *)a1;
- (BOOL)_lock:(BOOL)a0 blocking:(BOOL)a1;
- (BOOL)lock:(BOOL)a0;

@end
