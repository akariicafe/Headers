@class NSString, SBSRemoteAlertHandle, NSMapTable, NSObject;
@protocol OS_dispatch_queue;

@interface PDCPrivacyAlertPresenter : NSObject <SBSRemoteAlertHandleObserver> {
    SBSRemoteAlertHandle *_alertHandle;
    NSObject<OS_dispatch_queue> *_queue;
    NSMapTable *_requestToAlertMap;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPresenter;

- (void)remoteAlertHandleDidActivate:(id)a0;
- (void)remoteAlertHandle:(id)a0 didInvalidateWithError:(id)a1;
- (void)remoteAlertHandleDidDeactivate:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_activateAlertHandleForIdentity:(id)a0 settings:(id)a1 repsonseHandler:(id /* block */)a2;
- (void)_ensureAppIsLaunchableWithIdentity:(id)a0 completion:(id /* block */)a1;
- (void)activateRemoteAlertWithIdentity:(id)a0 requestHandle:(id)a1 forcePresent:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)didCancelRequestHandle:(id)a0;

@end
