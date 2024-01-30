@class NSString, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface BRCFileUnlinker : NSObject {
    _Atomic int _suspendCount;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_cachePurgeSource;
    NSString *_unlinkRootPath;
}

- (void)_purge;
- (void)forcePurgeWithCompletionBlock:(id /* block */)a0;
- (BOOL)renameAndUnlinkInBackgroundItemAt:(int)a0 path:(id)a1;
- (void).cxx_destruct;
- (id)initWithCacheDirPath:(id)a0;
- (void)suspend;
- (void)resume;
- (void)dealloc;
- (BOOL)renameAndUnlinkInBackgroundItemAtPath:(id)a0;

@end
