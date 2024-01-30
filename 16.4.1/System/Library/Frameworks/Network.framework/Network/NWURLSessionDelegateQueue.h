@class NSOperationQueue, NSObject;
@protocol OS_dispatch_queue;

@interface NWURLSessionDelegateQueue : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
    NSOperationQueue *__operationQueue;
    NSObject<OS_dispatch_queue> *__dispatchQueue;
}

- (void).cxx_destruct;

@end
