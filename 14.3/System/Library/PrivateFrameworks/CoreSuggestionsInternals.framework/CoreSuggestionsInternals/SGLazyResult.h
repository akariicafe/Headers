@interface SGLazyResult : NSObject {
    id _data;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
    id /* block */ _block;
}

@property (readonly, nonatomic) id result;
@property (readonly, nonatomic) id resultIfAvailable;

- (id)initWithResult:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithBlock:(id /* block */)a0;
- (id)_init;
- (id)_initWithBlock:(id /* block */)a0;

@end
