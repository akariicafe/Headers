@class NSString, STKSIMToolkitAlertSession, CoreTelephonyClient, STKIncomingCallUIStateMonitor, STKUserEventMonitor, UNUserNotificationCenter, STKCarrierSubscriptionMonitor, NSObject, STKDeviceLockMonitor;
@protocol OS_dispatch_group, STKAlertSessionResponseProvider, BSInvalidatable, STKTelephonyListItemsProvider, OS_dispatch_queue;

@interface STKSIMToolkitAlertSessionManager : STKAlertSessionManager <SBSRemoteAlertHandleObserver, STKUserEventMonitorDelegate, STKIncomingCallUIStateObserver, STKDeviceLockStatusObserver> {
    NSObject<OS_dispatch_queue> *_queue;
    CoreTelephonyClient *_telephonyClient;
    struct __CTServerConnection { } *_serverConnection;
    STKIncomingCallUIStateMonitor *_incomingCallUIStateMonitor;
    UNUserNotificationCenter *_userNotificationCenter;
    STKDeviceLockMonitor *_deviceLockMonitor;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _lock_deviceLocked;
    NSObject<OS_dispatch_group> *_notificationGroup;
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

- (void)_queue_startListening;
- (void)_showNotification;
- (id)_newSessionBehaviorFromOptions:(id)a0;
- (void)remoteAlertHandle:(id)a0 didInvalidateWithError:(id)a1;
- (void)_queue_handleSIMToolkitEvent:(long long)a0 responder:(id)a1 userInfo:(id)a2;
- (void)incomingCallUIStateDidChange:(BOOL)a0;
- (void)userEventDidOccur:(id)a0;
- (id)_listItemsFromCTItems:(id)a0;
- (void)remoteAlertHandleDidDeactivate:(id)a0;
- (void)deviceLockStateChanged:(BOOL)a0;
- (id)initWithSubscriptionMonitor:(id)a0;
- (BOOL)_showAfterDeviceUnlock:(unsigned long long)a0;
- (void)handleSIMToolkitEvent:(long long)a0 responder:(id)a1 userInfo:(id)a2;
- (void).cxx_destruct;
- (void)_removeNotification;
- (id)remoteAlertDescriptorForSession:(id)a0;

@end
