@class NSObject, NSOperationQueue, NSURLSession;
@protocol OS_dispatch_queue;

@interface NWURLSessionDelegateWrapper : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
    NSURLSession *_session;
    NSObject<OS_dispatch_queue> *_workQueue;
    id _delegate;
    NSOperationQueue *_operationQueue;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

- (void).cxx_destruct;

@end
