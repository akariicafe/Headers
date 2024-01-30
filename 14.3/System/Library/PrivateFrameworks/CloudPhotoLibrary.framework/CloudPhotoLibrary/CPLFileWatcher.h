@class NSURL, NSObject;
@protocol OS_dispatch_queue, CPLFileWatcherDelegate, OS_dispatch_source;

@interface CPLFileWatcher : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_nodeSource;
    NSObject<OS_dispatch_source> *_parentSource;
    unsigned long long _nodeInode;
}

@property (copy, nonatomic) NSURL *fileURL;
@property (weak, nonatomic) id<CPLFileWatcherDelegate> delegate;

- (void).cxx_destruct;
- (void)startWatching;
- (id)initWithFileURL:(id)a0 delegate:(id)a1 queue:(id)a2;
- (void)_forceRefreshWatchingNode;
- (void)_startWatchingNode;
- (void)_stopWatchingNode;
- (void)_updateWatchingNode;
- (void)_startWatchingParent;
- (void)_stopWatchingParent;
- (void)stopWatching;

@end
