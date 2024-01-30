@class WFDialogAttributions, WFScreenOnObserver, NSString, WFPresentedDialog, NSObject, NSMutableArray, NSXPCListener, WFDialogNotificationManager, WFWorkflowRunningContext;
@protocol WFDialogAlertPresenter, WFDialogPresentationManagerDelegate, WFDialogXPCProtocol, OS_dispatch_queue;

@interface WFDialogPresentationManager : NSObject <NSXPCListenerDelegate, WFDialogXPCHostProtocol, WFScreenOnObserverDelegate, WFDialogAlertPresenterDelegate, WFUIPresenterInterface>

@property (readonly, nonatomic) id<WFDialogAlertPresenter> remoteAlertPresenter;
@property (readonly, nonatomic) NSXPCListener *listener;
@property (retain, nonatomic) id<WFDialogXPCProtocol> connectedDialog;
@property (retain, nonatomic) WFPresentedDialog *presentedDialog;
@property (copy, nonatomic) id /* block */ contentDismissalCompletionHandler;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) WFWorkflowRunningContext *persistentRunningContext;
@property (retain, nonatomic) WFDialogAttributions *persistentRunningAttributions;
@property (readonly, nonatomic) NSMutableArray *persistentPresentationQueue;
@property (readonly, nonatomic) NSMutableArray *otherPresentationQueue;
@property (readonly, nonatomic) WFDialogNotificationManager *notificationManager;
@property (readonly, nonatomic) WFScreenOnObserver *screenOnObserver;
@property (nonatomic) BOOL completePersistentModeAwaitingRemoteAlertReactivationSuccess;
@property (copy, nonatomic) id /* block */ completePersistentModeBlockAwaitingRemoteAlertReactivation;
@property (retain, nonatomic) NSString *dismissalReason;
@property (weak, nonatomic) id<WFDialogPresentationManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dialogAlertPresenterDidDisconnectFromAlert:(id)a0;
- (BOOL)hasPersistentState;
- (void)showDialogRequest:(id)a0 runningContext:(id)a1 completionHandler:(id /* block */)a2;
- (void)logFinishDialogPresentationWithPresentedDialog:(id)a0;
- (void)dialogAlertPresenterDidInvalidateAlert:(id)a0;
- (void)logStartDialogPresentationWithRequest:(id)a0 presentationMode:(unsigned long long)a1;
- (void)queue_clearPersistentModeStateIfNecessary;
- (void)dialogAlertPresenterDidDeactivateAlert:(id)a0;
- (void)beginPersistentModeWithRunningContext:(id)a0 attributions:(id)a1 completionHandler:(id /* block */)a2;
- (void)queue_deactivateRemoteAlertAndInvalidateConnection;
- (void)completePersistentModeWithSuccess:(BOOL)a0 runningContext:(id)a1 completion:(id /* block */)a2;
- (void)trackSuspendShortcutWithPresentedDialog:(id)a0;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)initWithUserNotificationManager:(id)a0;
- (void)removeStaleNotifications;
- (void)screenOnStateDidChange:(id)a0;
- (void)activateRemoteAlertTiedToBundleIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)dismissPresentedContentForRunningContext:(id)a0 completionHandler:(id /* block */)a1;
- (void)requestDismissalWithReason:(id)a0;
- (void)beginConnection;
- (void)logFinishDialogPresentationWithRequest:(id)a0 presentationMode:(unsigned long long)a1 automationType:(id)a2;
- (void)queue_connectedDialogDidDisconnect;
- (void)postNotificationWithRequest:(id)a0 presentationMode:(unsigned long long)a1 context:(id)a2;
- (void)dismissPersistentChromeInDialog:(id)a0 success:(BOOL)a1 customAttributions:(id)a2 completionHandler:(id /* block */)a3;
- (void)queue_presentNextDialog;
- (void)trackDialogEventWithKey:(id)a0 request:(id)a1 presentationMode:(unsigned long long)a2 automationType:(id)a3;
- (void)dealloc;
- (void)activateRemoteAlert;
- (BOOL)queue_hasMoreDialogsToPresent;
- (id)initWithListener:(id)a0 notificationManager:(id)a1 dialogAlertPresenter:(id)a2 screenOnObserver:(id)a3;
- (void)dialogAlertPresenter:(id)a0 didConnectToAlert:(id)a1;

@end
