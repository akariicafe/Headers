@class NSString, SBSRemoteAlertHandle, SFClient, NSObject;
@protocol OS_dispatch_queue;

@interface CPSOpenClipCardPresenter : NSObject <SBSRemoteAlertHandleObserver> {
    SBSRemoteAlertHandle *_alertHandle;
    SFClient *_sharingClient;
    NSObject<OS_dispatch_queue> *_queue;
    id /* block */ _stagedLocationConfirmationDisplay;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPresenter;
+ (id)responseForOpenClipAction:(BOOL)a0;

- (void)remoteAlertHandle:(id)a0 didInvalidateWithError:(id)a1;
- (void)remoteAlertHandleDidDeactivate:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_activateAlertHandleWithSettings:(id)a0 viewControllerClassName:(id)a1 repsonseHandler:(id /* block */)a2;
- (void)_activateAlertHandleWithURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)_invalidateSharingClient;
- (void)_performStagedLocationConfirmationDisplayIfNeeded;
- (void)_sharingClientDidInvalidate;
- (void)_showCardWithOptions:(unsigned long long)a0 activationHandler:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (void)showCardWithURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)showLocationConfirmationSheetWithRequest:(id)a0 completion:(id /* block */)a1;

@end
