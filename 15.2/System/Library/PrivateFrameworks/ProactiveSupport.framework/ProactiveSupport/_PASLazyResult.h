@interface _PASLazyResult : NSObject {
    id _data;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
    id /* block */ _block;
}

@property (readonly, nonatomic) id result;
@property (readonly, nonatomic) id resultIfAvailable;

- (id)_initWithBlock:(id /* block */)a0;
- (id)initWithBlock:(id /* block */)a0;
- (id)initWithResult:(id)a0;
- (void).cxx_destruct;
- (id)_init;
- (void)dealloc;

@end
