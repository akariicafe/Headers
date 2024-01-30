@class NSMutableArray, NSString, STKUSSDAlertSession, STKCarrierSubscriptionMonitor, NSObject, CoreTelephonyClient;
@protocol OS_dispatch_queue;

@interface STKUSSDAlertSessionManager : STKAlertSessionManager <SBSRemoteAlertHandleObserver, CoreTelephonyClientSuppServicesDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    struct __CTServerConnection { } *_serverConnection;
    CoreTelephonyClient *_telephonyClient;
    NSMutableArray *_activeUSSDSessions;
    NSMutableArray *_finishedUSSDSessions;
    STKUSSDAlertSession *_coalescingUSSDSession;
    NSMutableArray *_activeSupplementaryServicesSessions;
    NSMutableArray *_finishedSupplementaryServicesSessions;
}

@property (readonly, nonatomic) STKCarrierSubscriptionMonitor *subscriptionMonitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleUSSDEvent:(long long)a0 responder:(id)a1 userInfo:(id)a2;
- (void)suppServicesCompleted:(id)a0;
- (void)_willPresentAlertHandle:(id)a0;
- (void)_queue_handleUSSDEvent:(long long)a0 responder:(id)a1 userInfo:(id)a2;
- (void)remoteAlertHandleDidDeactivate:(id)a0;
- (id)initWithSubscriptionMonitor:(id)a0;
- (id)remoteAlertDescriptorForSession:(id)a0;
- (void).cxx_destruct;
- (id)_supplementaryServicesResponder;
- (void)_queue_startListening;
- (void)remoteAlertHandle:(id)a0 didInvalidateWithError:(id)a1;
- (void)suppServicesError:(id)a0 error:(id)a1;
- (void)suppServicesStarted:(id)a0;
- (void)_executeOnQueue:(id /* block */)a0;
- (void)suppServicesEvent:(id)a0 event:(int)a1 settingsType:(int)a2 data:(id)a3;

@end
