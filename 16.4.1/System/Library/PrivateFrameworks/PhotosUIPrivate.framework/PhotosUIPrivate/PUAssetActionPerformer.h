@class NSArray, NSDictionary, NSUndoManager, NSObject, UIViewController;
@protocol OS_os_log, PUAssetActionPerformerDelegate;

@interface PUAssetActionPerformer : NSObject {
    id /* block */ _completionHandler;
}

@property (weak, nonatomic) NSObject<OS_os_log> *actionPerformerLog;
@property (readonly, copy, nonatomic) NSArray *assets;
@property (readonly, copy, nonatomic) NSDictionary *assetsByAssetCollection;
@property (readonly, nonatomic) NSUndoManager *undoManager;
@property (readonly, nonatomic) unsigned long long actionType;
@property (readonly, nonatomic) unsigned long long state;
@property (weak, nonatomic) id<PUAssetActionPerformerDelegate> delegate;
@property (readonly, nonatomic) UIViewController *presentedViewController;
@property (nonatomic) unsigned long long sourceContext;

- (void)performUserInteractionTask;
- (id)init;
- (void).cxx_destruct;
- (BOOL)presentViewController:(id)a0;
- (void)performWithCompletionHandler:(id /* block */)a0;
- (void)completeUserInteractionTaskWithSuccess:(BOOL)a0 error:(id)a1;
- (void)_completeStateWithSuccess:(BOOL)a0 error:(id)a1;
- (void)_completeUnlockTaskWithSuccess:(BOOL)a0 error:(id)a1;
- (void)_handleStepFinished:(unsigned long long)a0 withSuccess:(BOOL)a1 error:(id)a2;
- (void)_performUnlockIfNeeded;
- (void)_transitionToState:(unsigned long long)a0 withSuccess:(BOOL)a1 error:(id)a2;
- (void)completeBackgroundTaskWithSuccess:(BOOL)a0 error:(id)a1;
- (BOOL)dismissViewController:(id)a0 completionHandler:(id /* block */)a1;
- (void)performBackgroundTask;
- (BOOL)_requiresUnlockedDevice;
- (id)initWithActionType:(unsigned long long)a0 assets:(id)a1 orAssetsByAssetCollection:(id)a2;
- (void)preheatUserInteractionTask;

@end
