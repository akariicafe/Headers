@class NSXPCConnection, WFScreenOnObserver, NSString, WFUserNotificationManager, WFPresentedDialog, WFDialogAttribution, NSMutableArray, NSXPCListener, WFDialogNotificationManager, WFWorkflowRunningContext;
@protocol WFDialogPresentationManagerDelegate, WFDialogAlertPresenter;

@interface WFDialogPresentationManager : NSObject <NSXPCListenerDelegate, WFDialogXPCHostProtocol, WFScreenOnObserverDelegate, WFDialogAlertPresenterDelegate>

@property (readonly, nonatomic) id<WFDialogAlertPresenter> remoteAlertPresenter;
@property (readonly, nonatomic) NSXPCListener *listener;
@property (retain, nonatomic) NSXPCConnection *activeConnection;
@property (retain, nonatomic) WFPresentedDialog *presentedDialog;
@property (copy, nonatomic) id /* block */ contentDismissalCompletionHandler;
@property (retain, nonatomic) WFWorkflowRunningContext *persistentRunningContext;
@property (retain, nonatomic) WFDialogAttribution *persistentRunningAttribution;
@property (readonly, nonatomic) NSMutableArray *persistentPresentationQueue;
@property (readonly, nonatomic) NSMutableArray *otherPresentationQueue;
@property (readonly, nonatomic) WFDialogNotificationManager *notificationManager;
@property (readonly, nonatomic) WFScreenOnObserver *screenOnObserver;
@property (nonatomic) BOOL awaitingRemoteAlertConnectionToDismissPersistentMode;
@property (retain, nonatomic) NSString *dismissalReason;
@property (weak, nonatomic) id<WFDialogPresentationManagerDelegate> delegate;
@property (readonly, nonatomic) WFUserNotificationManager *userNotificationManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dismissPresentedContentWithCompletionHandler:(id /* block */)a0;
- (void)removeStaleNotifications;
- (void)logFinishDialogPresentationWithPresentedDialog:(id)a0;
- (void)deactivateRemoteAlertAndInvalidateConnection;
- (id)connectedDialog;
- (id)initWithUserNotificationManager:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)activateRemoteAlert;
- (id)xpcListenerEndpointForDialogAlertPresenter:(id)a0;
- (void)trackSuspendShortcutWithPresentedDialog:(id)a0;
- (void)trackDialogEventWithKey:(id)a0 request:(id)a1 presentationMode:(unsigned long long)a2 automationType:(id)a3;
- (void)connectedDialogDidDisconnect;
- (void)beginPersistentModeWithRunningContext:(id)a0 attribution:(id)a1;
- (BOOL)contextAllowsPostingDialogNotifications:(id)a0;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)requestDismissalWithReason:(id)a0;
- (void)screenOnStateDidChange:(id)a0;
- (void)dialogAlertPresenterDidDeactivateAlert:(id)a0;
- (void)showDialogRequest:(id)a0 fromWorkflowWithPresentationMode:(unsigned long long)a1 runningContext:(id)a2 completionHandler:(id /* block */)a3;
- (void)beginConnection;
- (void)logStartDialogPresentationWithRequest:(id)a0 presentationMode:(unsigned long long)a1;
- (void)presentNextDialog;
- (void)activateRemoteAlertTiedToBundleIdentifier:(id)a0;
- (void)postNotificationWithRequest:(id)a0 presentationMode:(unsigned long long)a1 context:(id)a2;
- (void)completePersistentModeWithSuccess:(BOOL)a0 completion:(id /* block */)a1;
- (void)dialogAlertPresenterDidInvalidateAlert:(id)a0;
- (void)logFinishDialogPresentationWithRequest:(id)a0 presentationMode:(unsigned long long)a1 automationType:(id)a2;
- (id)initWithNotificationManager:(id)a0 dialogAlertPresenter:(id)a1 screenOnObserver:(id)a2;
- (BOOL)hasMoreDialogsToPresent;
- (void)clearPersistentModeStateIfNecessary;

@end
