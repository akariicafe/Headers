@class NSMutableArray;

@interface NTKSnowglobePromise : NSObject {
    id /* block */ _block;
    NSMutableArray *_completions;
    unsigned long long _state;
    id _object;
    BOOL _async;
}

+ (id)asyncPromiseWithBlock:(id /* block */)a0;
+ (id)lazyAsyncPromiseWithBlock:(id /* block */)a0;
+ (id)lazyPromiseWithBlock:(id /* block */)a0;
+ (id)promiseWithBlock:(id /* block */)a0;

- (void).cxx_destruct;
- (void)fetchWithCompletion:(id /* block */)a0;
- (void)_blockCompletedWithObject:(id)a0;
- (id)initWithBlock:(id /* block */)a0 lazy:(BOOL)a1 async:(BOOL)a2;

@end
