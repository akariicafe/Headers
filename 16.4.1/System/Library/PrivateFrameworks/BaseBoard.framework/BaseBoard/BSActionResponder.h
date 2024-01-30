@class _BSActionResponder, NSObject;
@protocol OS_dispatch_queue;

@interface BSActionResponder : NSObject {
    NSObject<OS_dispatch_queue> *_lock_queue;
    id /* block */ _lock_handler;
    _BSActionResponder *_lock_underlying;
    unsigned long long _lock_timeout;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

+ (id)responderByWrappingResponder:(id)a0 withHandler:(id /* block */)a1;
+ (id)responderWithHandler:(id /* block */)a0;

- (void)setQueue:(id)a0;
- (void)setTimeout:(unsigned long long)a0;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)annul;

@end
