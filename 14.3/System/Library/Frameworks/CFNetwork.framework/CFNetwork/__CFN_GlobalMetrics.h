@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, _NSURLSessionEventDelegate, _NSURLSessionHTTPRewriter;

@interface __CFN_GlobalMetrics : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
    id<_NSURLSessionEventDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    id<_NSURLSessionEventDelegate> _forwardingDelegate;
    NSMutableDictionary *_defaultSessionMetrics;
    NSMutableDictionary *_ephemeralSessionMetrics;
    NSMutableDictionary *_backgroundSessionMetrics;
    id<_NSURLSessionHTTPRewriter> _HTTPRewriter;
}

- (id)init;
- (void).cxx_destruct;

@end
