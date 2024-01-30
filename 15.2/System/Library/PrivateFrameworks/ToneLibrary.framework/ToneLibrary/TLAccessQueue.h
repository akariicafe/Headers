@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface TLAccessQueue : NSObject {
    NSString *_threadLocalStorageKey;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

@property (readonly, nonatomic) NSString *label;

- (void)performSynchronousBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)performAsynchronousBlock:(id /* block */)a0;
- (void)_performSynchronousBlockInSerialQueue:(id /* block */)a0;
- (id)initWithLabel:(id)a0 appendUUIDToLabel:(BOOL)a1;
- (void)assertNotRunningInAccessQueue;

@end
