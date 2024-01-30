@class SCKAsyncSerialQueue;

@interface SCKStartupQueue : NSObject

@property (retain, nonatomic) SCKAsyncSerialQueue *startupTaskQueue;

- (void).cxx_destruct;
- (void)executeAfterStartup:(id /* block */)a0;
- (void)enqueueStartupBlock:(id /* block */)a0;
- (id)initWithDeferredStartup:(BOOL)a0;

@end
