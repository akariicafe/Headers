@interface SGCachedResult : NSObject {
    _Atomic BOOL _done;
    id _data;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;

@end
