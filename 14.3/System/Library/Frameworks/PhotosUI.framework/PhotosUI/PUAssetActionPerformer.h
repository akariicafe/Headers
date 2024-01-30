@class NSArray, NSDictionary, NSObject, UIViewController;
@protocol OS_os_log, PUAssetActionPerformerDelegate;

@interface PUAssetActionPerformer : NSObject {
    id /* block */ _completionHandler;
}

@property (weak, nonatomic) NSObject<OS_os_log> *actionPerformerLog;
@property (readonly, copy, nonatomic) NSArray *assets;
@property (readonly, copy, nonatomic) NSDictionary *assetsByAssetCollection;
@property (readonly, nonatomic) unsigned long long actionType;
@property (readonly, nonatomic) unsigned long long state;
@property (weak, nonatomic) id<PUAssetActionPerformerDelegate> delegate;
@property (readonly, nonatomic) UIViewController *presentedViewController;
@property (nonatomic) unsigned long long sourceContext;

- (void)performUserInteractionTask;
- (id)init;
- (id)initWithActionType:(unsigned long long)a0 assets:(id)a1 orAssetsByAssetCollection:(id)a2;
- (BOOL)_requiresUnlockedDevice;
- (void)_performUnlockIfNeeded;
- (void)_completeUnlockTaskWithSuccess:(BOOL)a0 error:(id)a1;
- (void)preheatUserInteractionTask;
- (BOOL)dismissViewController:(id)a0 completionHandler:(id /* block */)a1;
- (void)completeUserInteractionTaskWithSuccess:(BOOL)a0 error:(id)a1;
- (void)performBackgroundTask;
- (void)completeBackgroundTaskWithSuccess:(BOOL)a0 error:(id)a1;
- (void)_handleStepFinished:(unsigned long long)a0 withSuccess:(BOOL)a1 error:(id)a2;
- (void)_transitionToState:(unsigned long long)a0 withSuccess:(BOOL)a1 error:(id)a2;
- (void)_completeStateWithSuccess:(BOOL)a0 error:(id)a1;
- (void).cxx_destruct;
- (void)performWithCompletionHandler:(id /* block */)a0;
- (BOOL)presentViewController:(id)a0;

@end
