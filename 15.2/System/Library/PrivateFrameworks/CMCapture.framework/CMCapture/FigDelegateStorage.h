@class NSObject;
@protocol OS_dispatch_queue;

@interface FigDelegateStorage : NSObject {
    NSObject<OS_dispatch_queue> *_delegateQueue;
    id _delegate;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly) id delegate;
@property (readonly) NSObject<OS_dispatch_queue> *delegateQueue;

+ (void)initialize;

- (void)setDelegate:(id)a0 queue:(id)a1;
- (id)init;
- (void)dealloc;
- (void)invokeDelegateCallbackWithBlock:(id /* block */)a0;

@end
