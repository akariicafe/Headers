@class NSString, FBSApplicationPlaceholder, NSProgress, NSObject;
@protocol OS_dispatch_queue;

@interface FBSApplicationPlaceholderProgress : NSObject <FBSApplicationPlaceholderProgress, BSInvalidatable, BSDescriptionProviding> {
    NSObject<OS_dispatch_queue> *_queue;
    NSProgress *_progress;
    int _invalidated;
    long long _cancellationAllowed;
}

@property (readonly, weak, nonatomic) FBSApplicationPlaceholder *placeholder;
@property (readonly, nonatomic) unsigned long long installState;
@property (readonly, nonatomic) unsigned long long installPhase;
@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) double percentComplete;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)dealloc;
- (BOOL)queue_isValid;
- (id)initWithPlaceholder:(id)a0 queue:(id)a1;
- (unsigned long long)queue_supportedActions;
- (BOOL)queue_canPerformAction:(unsigned long long)a0;
- (BOOL)queue_updateProxy:(id)a0;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)_stopObservingProgress:(id)a0 withContext:(void *)a1;
- (void)_startObservingProgress:(id)a0 withContext:(void *)a1;
- (BOOL)_queue_updateFromProgress;
- (BOOL)queue_isCancellationAllowed;
- (id)succinctDescriptionBuilder;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)invalidate;

@end
