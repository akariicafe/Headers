@class NSString, NSObject;
@protocol PXAnonymousViewController, PXActionPerformerDelegate;

@interface PXActionPerformer : NSObject <PXActivityActionDelegate> {
    id /* block */ _completionHandler;
}

@property (readonly, nonatomic) NSString *activityType;
@property (readonly, nonatomic) NSString *activitySystemImageName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSObject<PXAnonymousViewController> *hostViewController;
@property (readonly, nonatomic) NSString *actionType;
@property (readonly, nonatomic) BOOL success;
@property (weak, nonatomic) id sender;
@property (readonly, nonatomic, getter=isCancellable) BOOL cancellable;
@property (readonly, nonatomic) unsigned long long state;
@property (weak, nonatomic) id<PXActionPerformerDelegate> delegate;
@property (readonly, nonatomic) NSObject<PXAnonymousViewController> *presentedViewController;
@property (copy, nonatomic) id /* block */ viewControllerPresenter;
@property (copy, nonatomic) id /* block */ viewControllerDismisser;
@property (readonly, nonatomic) BOOL presentsMenu;
@property (readonly, nonatomic) BOOL shouldPreventTargetedDismissalAnimation;

- (BOOL)canPerformWithActivityItems:(id)a0 forActivity:(id)a1;
- (void)completeUserInteractionTaskWithSuccess:(BOOL)a0 error:(id)a1;
- (id)localizedTitleForUseCase:(unsigned long long)a0;
- (BOOL)performerResetsAfterCompletion;
- (id)barButtonItemWithTarget:(id)a0 action:(SEL)a1;
- (id)activity;
- (BOOL)presentViewController:(id)a0;
- (void)performActivity:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)alertAction;
- (void)performActionWithCompletionHandler:(id /* block */)a0;
- (id)initWithActionType:(id)a0;
- (void)_performUnlockIfNeeded;
- (void)_completeUnlockTaskWithSuccess:(BOOL)a0 error:(id)a1;
- (BOOL)dismissViewController:(id)a0 completionHandler:(id /* block */)a1;
- (void)performBackgroundTask;
- (void)completeBackgroundTaskWithSuccess:(BOOL)a0 error:(id)a1;
- (void)_handleStepFinished:(unsigned long long)a0 withSuccess:(BOOL)a1 error:(id)a2;
- (void)_transitionToState:(unsigned long long)a0 withSuccess:(BOOL)a1 error:(id)a2;
- (void)_completeStateWithSuccess:(BOOL)a0 error:(id)a1;
- (void)performUserInteractionTask;
- (id)disambiguationMenuForUseCase:(unsigned long long)a0 withMenuActionHandler:(id /* block */)a1;
- (void)cancelActionWithCompletionHandler:(id /* block */)a0;
- (BOOL)requiresUnlockedDevice;
- (BOOL)pushViewController:(id)a0;
- (BOOL)presentAlertWithTitle:(id)a0 message:(id)a1 completionHandler:(id /* block */)a2;
- (id)menuElement;

@end
