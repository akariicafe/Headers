@class NSError, NSString, NSObject;
@protocol PXAutoloopVideoTaskDelegate, OS_dispatch_queue;

@interface PXAutoloopVideoTask : NSObject {
    NSObject<OS_dispatch_queue> *_performQueue;
    NSObject<OS_dispatch_queue> *_ivarQueue;
    void *_ivarQueueIdentifier;
    id<PXAutoloopVideoTaskDelegate> _ivarQueue_delegate;
    long long _ivarQueue_status;
    double _ivarQueue_progress;
    NSError *_ivarQueue_error;
    struct { BOOL respondsToProgressDidChange; BOOL respondsToStatusDidChange; } _ivarQueue_delegateFlags;
}

@property (weak, nonatomic) id<PXAutoloopVideoTaskDelegate> delegate;
@property (readonly, nonatomic) double progress;
@property (readonly, nonatomic) long long status;
@property (readonly, nonatomic) NSError *error;
@property (readonly, copy, nonatomic) NSString *temporaryFilesDirectory;

- (void)cancel;
- (void)_reset;
- (BOOL)_isRunning;
- (id)init;
- (void).cxx_destruct;
- (void)setStatus:(long long)a0;
- (void)setProgress:(double)a0;
- (void)_performIvarRead:(id /* block */)a0;
- (void)_performIvarWrite:(id /* block */)a0;
- (void)runWithInput:(id)a0;
- (void)performTaskWithInput:(id)a0;
- (void)setTemporaryFilesDirectory:(id)a0;
- (BOOL)_isOnIvarQueue;
- (void)setError:(id)a0;

@end
