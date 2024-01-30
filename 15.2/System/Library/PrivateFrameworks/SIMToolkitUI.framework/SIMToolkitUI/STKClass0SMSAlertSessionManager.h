@class NSObject, NSString, NSMutableArray, STKCarrierSubscriptionMonitor, STKIncomingCallUIStateMonitor, STKClass0SMSAlertSession, CoreTelephonyClient;
@protocol OS_dispatch_queue;

@interface STKClass0SMSAlertSessionManager : STKAlertSessionManager <CoreTelephonyClientSMSDelegate, SBSRemoteAlertHandleObserver, STKIncomingCallUIStateObserver> {
    CoreTelephonyClient *_telephonyClient;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_queue_pendingAlertSessionsDueToInCallUI;
    STKIncomingCallUIStateMonitor *_queue_incomingCallStateMonitor;
}

@property (retain, nonatomic, setter=_queue_setCurrentSession:) STKClass0SMSAlertSession *currentSession;
@property (readonly, nonatomic) STKCarrierSubscriptionMonitor *subscriptionMonitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_queue_handleClass0SMSBody:(id)a0 address:(id)a1 responder:(id)a2 forSlot:(long long)a3;
- (void)_queue_enqueueSession:(id)a0;
- (void)smsMessageClass0Received:(id)a0 body:(id)a1 address:(id)a2;
- (void)handleClass0SMSBody:(id)a0 address:(id)a1 responder:(id)a2 forSlot:(long long)a3;
- (void)remoteAlertHandleDidDeactivate:(id)a0;
- (id)initWithSubscriptionMonitor:(id)a0;
- (id)remoteAlertDescriptorForSession:(id)a0;
- (void).cxx_destruct;
- (void)incomingCallUIStateDidChange:(BOOL)a0;
- (void)remoteAlertHandle:(id)a0 didInvalidateWithError:(id)a1;

@end
