@class BSAtomicSignal, NSThread, UIImage;

@interface BSUIMappedImageCacheFuture : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BSAtomicSignal *_submitted;
    NSThread *_submissionThread;
    id /* block */ _lock_workBlock;
    BOOL _lock_workCompletionWasCalled;
    UIImage *_postlock_cachedImage;
}

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
