@class NSString;
@protocol BLBackgroundTaskProviding;

@interface BLLockFile : NSObject {
    int _fd;
    unsigned long long _backgroundTaskIdentifier;
    BOOL _hasBackgroundTask;
}

@property (class, weak, nonatomic) id<BLBackgroundTaskProviding> backgroundTaskDelegate;

@property (readonly, nonatomic) NSString *path;
@property (readonly, nonatomic) BOOL locked;

+ (id)iTunesSyncLockFile;
+ (id)iTunesSyncLockFilePath;

- (id)initWithPath:(id)a0;
- (BOOL)lock:(BOOL)a0;
- (void)unlock;
- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)_lock:(BOOL)a0 blocking:(BOOL)a1;
- (void)_registerBackgroundTask;
- (void)_unregisterBackgroundTask;
- (BOOL)lockWithBlock:(id /* block */)a0 error:(id *)a1;
- (BOOL)tryLock:(BOOL)a0;

@end
