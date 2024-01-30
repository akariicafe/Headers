@class NSString, BKSApplicationStateMonitor, SBSRemoteAlertHandle, NSObject;
@protocol OS_dispatch_source, WFDialogAlertPresenterDelegate;

@interface WFSpringBoardRemoteAlertPresenter : NSObject <SBSRemoteAlertHandleObserver, WFDialogAlertPresenter>

@property (retain, nonatomic) BKSApplicationStateMonitor *monitor;
@property (retain, nonatomic) SBSRemoteAlertHandle *activeHandle;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *deactivateTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<WFDialogAlertPresenterDelegate> delegate;
@property (readonly, nonatomic) BOOL alertIsActive;

- (void)deactivateAlert;
- (void)activateAlert;
- (void)remoteAlertHandleDidDeactivate:(id)a0;
- (void).cxx_destruct;
- (void)remoteAlertHandleDidActivate:(id)a0;
- (void)remoteAlertHandle:(id)a0 didInvalidateWithError:(id)a1;
- (void)activateAlertWithPresentationTarget:(id)a0;
- (void)activateAlertInMainSceneOfApplicationWithBundleIdentifier:(id)a0;

@end
