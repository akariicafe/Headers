@class NSString, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface BRCFileUnlinker : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_cachePurgeSource;
    NSString *_unlinkRootPath;
}

+ (id)fileUnlinker;

- (id)init;
- (void).cxx_destruct;
- (BOOL)renameAndUnlinkInBackgroundItemAt:(int)a0 path:(id)a1;
- (void)_purge;
- (void)forcePurgeWithCompletionBlock:(id /* block */)a0;
- (void)resume;
- (BOOL)renameAndUnlinkInBackgroundItemAtPath:(id)a0;

@end
