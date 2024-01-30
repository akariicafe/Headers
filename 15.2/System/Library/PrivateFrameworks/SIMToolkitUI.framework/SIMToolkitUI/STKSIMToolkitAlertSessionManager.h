@class STKUserEventMonitor, NSString, STKSIMToolkitAlertSession, STKCarrierSubscriptionMonitor, STKIncomingCallUIStateMonitor, NSObject, CoreTelephonyClient;
@protocol STKAlertSessionResponseProvider, BSInvalidatable, STKTelephonyListItemsProvider, OS_dispatch_queue;

@interface STKSIMToolkitAlertSessionManager : STKAlertSessionManager <SBSRemoteAlertHandleObserver, STKUserEventMonitorDelegate, STKIncomingCallUIStateObserver> {
    NSObject<OS_dispatch_queue> *_queue;
    CoreTelephonyClient *_telephonyClient;
    struct __CTServerConnection { } *_serverConnection;
    STKIncomingCallUIStateMonitor *_incomingCallUIStateMonitor;
    id<BSInvalidatable> _haltEventQueueProcessingAssertion;
    int _atHomeScreenNotifyToken;
    STKUserEventMonitor *_userEventMonitor;
    id<STKAlertSessionResponseProvider> _userEventResponder;
}

@property (retain, nonatomic, setter=_queue_setCurrentSession:) STKSIMToolkitAlertSession *currentSession;
@property (retain, nonatomic, setter=_setListItemsProvider:) id<STKTelephonyListItemsProvider> _listItemsProvider;
@property (readonly, nonatomic) STKCarrierSubscriptionMonitor *subscriptionMonitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleSIMToolkitEvent:(long long)a0 responder:(id)a1 userInfo:(id)a2;
- (void)userEventDidOccur:(id)a0;
- (void)remoteAlertHandleDidDeactivate:(id)a0;
- (id)initWithSubscriptionMonitor:(id)a0;
- (id)remoteAlertDescriptorForSession:(id)a0;
- (void).cxx_destruct;
- (id)_listItemsFromCTItems:(id)a0;
- (void)_queue_startListening;
- (void)incomingCallUIStateDidChange:(BOOL)a0;
- (void)remoteAlertHandle:(id)a0 didInvalidateWithError:(id)a1;
- (void)_queue_handleSIMToolkitEvent:(long long)a0 responder:(id)a1 userInfo:(id)a2;
- (id)_newSessionBehaviorFromOptions:(id)a0;

@end
