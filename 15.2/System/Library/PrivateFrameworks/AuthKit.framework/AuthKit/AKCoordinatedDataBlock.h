@class NSObject;
@protocol OS_dispatch_group;

@interface AKCoordinatedDataBlock : NSObject {
    id /* block */ _block;
    id /* block */ _completionHandler;
    BOOL _started;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSObject<OS_dispatch_group> *_group;
}

+ (id)startCoordinatingBlock:(id /* block */)a0;

- (void)_start;
- (id)initWithBlock:(id /* block */)a0;
- (void)_callCompletionWithData:(id)a0 error:(id)a1;
- (void)setCompletion:(id /* block */)a0;
- (void)start;
- (void).cxx_destruct;

@end
