@class SCWAsyncSerialQueue;

@interface SCWStartupQueue : NSObject

@property (retain, nonatomic) SCWAsyncSerialQueue *startupTaskQueue;
@property (nonatomic) long long startupTaskDepth;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } startupTaskDepthLock;

- (void)executeAfterStartup:(id /* block */)a0;
- (void)enqueueStartupBlock:(id /* block */)a0;
- (id)initWithDeferredStartup:(BOOL)a0;
- (void).cxx_destruct;

@end
