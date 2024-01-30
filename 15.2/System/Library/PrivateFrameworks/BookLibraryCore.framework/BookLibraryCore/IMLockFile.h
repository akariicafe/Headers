@class NSString;
@protocol BLBackgroundTaskProviding;

@interface IMLockFile : NSObject {
    int _fd;
}

@property (class, weak, nonatomic) id<BLBackgroundTaskProviding> backgroundTaskDelegate;

@property (readonly, nonatomic) NSString *path;
@property (readonly, nonatomic) BOOL locked;

+ (id)iTunesSyncLockFile;
+ (id)iTunesSyncLockFilePath;

- (void)unlock;
- (BOOL)lock:(BOOL)a0;
- (id)initWithPath:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)tryLock:(BOOL)a0;
- (BOOL)lockWithBlock:(id /* block */)a0 error:(id *)a1;
- (BOOL)_lock:(BOOL)a0 blocking:(BOOL)a1;

@end
