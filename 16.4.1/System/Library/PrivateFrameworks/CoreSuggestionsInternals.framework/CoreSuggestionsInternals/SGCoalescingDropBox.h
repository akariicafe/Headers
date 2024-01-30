@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_transaction;

@interface SGCoalescingDropBox : NSObject {
    const char *_name;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_source;
    id /* block */ _makeEmptyBox;
    id /* block */ _handler;
    id _box;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _handlerLock;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _boxLock;
    BOOL _pendingMerge;
    int _outstanding;
    struct _opaque_pthread_cond_t { long long __sig; char __opaque[40]; } _cond;
    NSObject<OS_os_transaction> *_transaction;
}

- (void)wait;
- (void)dealloc;
- (void)typeCheckingSink:(id)a0;
- (void)updateBox:(id /* block */)a0 delay:(double)a1;
- (void)updateBox:(id /* block */)a0;
- (id)init;
- (id)initWithName:(const char *)a0 boxMaker:(id /* block */)a1 handler:(id /* block */)a2 qos:(unsigned int)a3;
- (void).cxx_destruct;

@end
