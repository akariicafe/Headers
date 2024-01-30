@class BRCRelativePath, NSObject;
@protocol OS_dispatch_queue;

@interface BRCAsyncDirectoryEnumerator : NSObject {
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_targetQueue;
    long long _batchSize;
    BOOL _isRecursive;
    int _error;
}

@property (readonly, nonatomic) BRCRelativePath *rootPath;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initForEnumeratingBelow:(id)a0 recursive:(BOOL)a1 batchSize:(long long)a2 targetQueue:(id)a3;
- (void)scheduleWithProcessBlock:(id /* block */)a0 completion:(id /* block */)a1;

@end
