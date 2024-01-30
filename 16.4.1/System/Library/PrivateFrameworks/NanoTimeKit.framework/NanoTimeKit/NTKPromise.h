@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface NTKPromise : NSObject {
    unsigned int _bgPriority;
    unsigned int _fgPriority;
    NSObject<OS_dispatch_queue> *_loaderQueue;
    id _loaderQueue_loadedObject;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    id _lock_loadedObject;
    unsigned long long _lock_promiseState;
}

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) id object;

+ (id)metalPipelinePromiseNamed:(id)a0 withBlock:(id /* block */)a1;
+ (id)promiseNamed:(id)a0 withBackgroundPriority:(unsigned int)a1 foregroundPriority:(unsigned int)a2 block:(id /* block */)a3;
+ (id)promiseNamed:(id)a0 withBlock:(id /* block */)a1;

- (id)initWithName:(id)a0 block:(id /* block */)a1;
- (void).cxx_destruct;
- (void)_beginLoadingBlock:(id /* block */)a0;
- (id)initWithName:(id)a0 backgroundPriority:(unsigned int)a1 foregroundPriority:(unsigned int)a2 block:(id /* block */)a3;

@end
