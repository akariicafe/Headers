@class NSObject;
@protocol OS_dispatch_queue;

@interface IDSInternalQueueController : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    void *_contextKey;
}

+ (id)sharedInstance;

- (BOOL)assertQueueIsNotCurrent;
- (id)initWithName:(char *)a0 contextKey:(void *)a1;
- (void)performBlock:(id /* block */)a0 waitUntilDone:(BOOL)a1;
- (BOOL)assertQueueIsCurrent;
- (void)performBlock:(id /* block */)a0;
- (id)queue;
- (id)init;
- (BOOL)isQueueCurrent;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;

@end
