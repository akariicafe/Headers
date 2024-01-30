@class NSObject;
@protocol OS_dispatch_queue;

@interface IDSInternalQueueController : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    void *_contextKey;
}

+ (id)sharedInstance;

- (void)performBlock:(id /* block */)a0;
- (id)initWithQueue:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)assertQueueIsNotCurrent;
- (id)queue;
- (void)assertQueueIsCurrent;
- (void)performBlock:(id /* block */)a0 waitUntilDone:(BOOL)a1;
- (id)initWithName:(char *)a0 contextKey:(void *)a1;
- (BOOL)isQueueCurrent;

@end
