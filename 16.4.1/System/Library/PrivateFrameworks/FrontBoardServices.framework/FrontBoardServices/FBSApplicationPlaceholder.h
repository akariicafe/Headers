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

+ (id)_sharedQueue;
+ (id)_callOutQueue;

- (unsigned long long)installType;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (double)percentComplete;
- (id)succinctDescriptionBuilder;
- (void)addObserver:(id)a0;
- (BOOL)pause;
- (BOOL)isRestricted;
- (BOOL)cancel;
- (void)dealloc;
- (BOOL)prioritize;
- (void)removeObserver:(id)a0;
- (void).cxx_destruct;
- (BOOL)resume;
- (unsigned long long)installPhase;
- (unsigned long long)installState;
- (void)_reloadProgress;
- (BOOL)_canPerformAction:(unsigned long long)a0;
- (void)_cancelWithResult:(id /* block */)a0;
- (void)_dispatchToObserversWithBlock:(id /* block */)a0;
- (id)_initWithApplicationProxy:(id)a0;
- (id)_initWithBundleIdentifier:(id)a0 url:(id)a1;
- (id)_initWithBundleProxy:(id)a0 url:(id)a1;
- (void)_noteChangedSignificantly;
- (void)_pauseWithResult:(id /* block */)a0;
- (BOOL)_performAction:(unsigned long long)a0 withResult:(id /* block */)a1;
- (void)_prioritizeWithResult:(id /* block */)a0;
- (BOOL)_queue_canPerformAction:(unsigned long long)a0;
- (BOOL)_queue_isCloudDemoted;
- (void)_queue_noteChangedSignificantly:(id)a0;
- (void)_queue_setProxy:(id)a0 force:(BOOL)a1;
- (unsigned long long)_queue_supportedActions;
- (void)_reloadFromProxy:(id)a0;
- (void)_resumeWithResult:(id /* block */)a0;
- (void)_sendToObserversPlaceholderDidChangeSignificantly;
- (void)_sendToObserversPlaceholderProgressDidUpdate;
- (void)_setProxy:(id)a0 force:(BOOL)a1;
- (BOOL)cancelWithResult:(id /* block */)a0;
- (unsigned long long)expectedFinalInstallPhase;
- (BOOL)pauseWithResult:(id /* block */)a0;
- (BOOL)prioritizeWithResult:(id /* block */)a0;
- (BOOL)resumeWithResult:(id /* block */)a0;

@end
