@class NSString, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface MGFileWatcher : NSObject {
    NSString *_path;
    unsigned long long _inode;
    struct timespec { long long tv_sec; long long tv_nsec; } _mtime;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_src;
    NSObject<OS_dispatch_source> *_parentSrc;
    id /* block */ _block;
}

- (void)cancel;
- (void)dealloc;
- (id)initWithPath:(id)a0 block:(id /* block */)a1;
- (BOOL)updateWatcher;

@end
