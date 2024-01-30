@class NSMutableArray;

@interface _PASKVOHandler : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
    NSMutableArray *_tasks;
}

- (void)reactAfterChangesToKeyPath:(id)a0 ofObject:(id)a1 usingBlock:(id /* block */)a2;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)reactBeforeAndAfterChangesToKeyPath:(id)a0 ofObject:(id)a1 usingBlock:(id /* block */)a2;
- (void)_watchKeyPath:(id)a0 ofObject:(id)a1 options:(unsigned long long)a2 usingTask:(id)a3;
- (void)reactAsynchronouslyAfterChangesToKeyPath:(id)a0 ofObject:(id)a1 usingBlock:(id /* block */)a2 onQueue:(id)a3;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;

@end
