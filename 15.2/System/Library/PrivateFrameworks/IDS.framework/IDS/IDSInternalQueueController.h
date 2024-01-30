@class NSObject;
@protocol OS_dispatch_queue;

@interface IDSInternalQueueController : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    void *_contextKey;
}

+ (id)sharedInstance;

- (id)initWithQueue:(id)a0;
- (void)performBlock:(id /* block */)a0;
- (BOOL)assertQueueIsCurrent;
- (BOOL)isQueueCurrent;
- (BOOL)assertQueueIsNotCurrent;
- (void).cxx_destruct;
- (id)initWithName:(char *)a0 contextKey:(void *)a1;
- (id)init;
- (void)performBlock:(id /* block */)a0 waitUntilDone:(BOOL)a1;
- (id)queue;

@end
