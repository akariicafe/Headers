@class FBSApplicationLibrary, NSMutableSet, LSApplicationProxy, NSObject, FBSApplicationPlaceholderProgress;
@protocol FBSApplicationPlaceholderProgress, OS_dispatch_queue;

@interface FBSApplicationPlaceholder : FBSBundleInfo {
    LSApplicationProxy *_proxy;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_callOutQueue;
    FBSApplicationPlaceholderProgress *_queue_progress;
    NSMutableSet *_queue_observers;
}

@property (retain, nonatomic, getter=_proxy, setter=_setProxy:) LSApplicationProxy *proxy;
@property (weak, nonatomic) FBSApplicationLibrary *appLibrary;
@property (readonly, nonatomic) id<FBSApplicationPlaceholderProgress> progress;
@property (readonly, nonatomic, getter=isPrioritizable) BOOL prioritizable;
@property (readonly, nonatomic, getter=isPausable) BOOL pausable;
@property (readonly, nonatomic, getter=isResumable) BOOL resumable;
@property (readonly, nonatomic, getter=isCancellable) BOOL cancellable;

+ (id)_callOutQueue;
+ (id)_sharedQueue;

- (BOOL)isRestricted;
- (unsigned long long)installType;
- (unsigned long long)installPhase;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)addObserver:(id)a0;
- (double)percentComplete;
- (void)removeObserver:(id)a0;
- (id)_initWithApplicationProxy:(id)a0;
- (unsigned long long)installState;
- (id)_initWithBundleIdentifier:(id)a0 url:(id)a1;
- (BOOL)prioritize;
- (void).cxx_destruct;
- (void)_setProxy:(id)a0 force:(BOOL)a1;
- (BOOL)_canPerformAction:(unsigned long long)a0;
- (BOOL)_performAction:(unsigned long long)a0 withResult:(id /* block */)a1;
- (void)_dispatchToObserversWithBlock:(id /* block */)a0;
- (BOOL)_queue_isCloudDemoted;
- (unsigned long long)_queue_supportedActions;
- (BOOL)_queue_canPerformAction:(unsigned long long)a0;
- (void)_pauseWithResult:(id /* block */)a0;
- (void)_resumeWithResult:(id /* block */)a0;
- (void)_cancelWithResult:(id /* block */)a0;
- (void)_prioritizeWithResult:(id /* block */)a0;
- (void)_queue_setProxy:(id)a0 force:(BOOL)a1;
- (void)_reloadFromProxy:(id)a0;
- (void)_queue_noteChangedSignificantly:(id)a0;
- (void)_sendToObserversPlaceholderProgressDidUpdate;
- (id)_initWithBundleProxy:(id)a0 url:(id)a1;
- (void)_sendToObserversPlaceholderDidChangeSignificantly;
- (BOOL)prioritizeWithResult:(id /* block */)a0;
- (BOOL)pauseWithResult:(id /* block */)a0;
- (BOOL)resumeWithResult:(id /* block */)a0;
- (BOOL)cancelWithResult:(id /* block */)a0;
- (void)_reloadProgress;
- (void)_noteChangedSignificantly;
- (BOOL)pause;
- (id)succinctDescriptionBuilder;
- (BOOL)resume;
- (void)dealloc;
- (BOOL)cancel;

@end
