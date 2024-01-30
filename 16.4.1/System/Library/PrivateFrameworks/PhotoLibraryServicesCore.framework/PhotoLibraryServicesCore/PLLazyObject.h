@interface PLLazyObject : NSObject {
    BOOL _shouldRetryBlockOnNil;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    id /* block */ _block;
    id _object;
}

@property (readonly) id objectValue;
@property (readonly) id currentObjectValueWithoutForcingEvaluation;

- (id)initWithObject:(id)a0;
- (id)initWithRetriableBlock:(id /* block */)a0;
- (id)initWithRetry:(BOOL)a0 block:(id /* block */)a1;
- (void)resetObject;
- (id)init;
- (void)invalidateWithHandler:(id /* block */)a0;
- (id)initWithBlock:(id /* block */)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (void)resetObjectWithHandler:(id /* block */)a0;

@end
