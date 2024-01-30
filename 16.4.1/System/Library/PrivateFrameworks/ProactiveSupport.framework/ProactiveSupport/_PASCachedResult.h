@interface _PASCachedResult : NSObject {
    _Atomic BOOL _done;
    id _data;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

- (id)resultNonnullWithBlock:(id /* block */)a0;
- (id)resultWithBlock:(id /* block */)a0;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
