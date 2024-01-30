@class NSString, ASDExtensionMonitor, NSExtension, NSObject;
@protocol OS_dispatch_queue, ASDTestFlightServiceHostDelegate;

@interface ASDTestFlightServiceHost : NSObject {
    ASDExtensionMonitor *_monitor;
    NSExtension *_currentExtension;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSObject<OS_dispatch_queue> *_runQueue;
    double _serviceTime;
}

@property (readonly, nonatomic) long long extensionStatus;
@property (readonly, nonatomic) NSString *extensionIdentifier;
@property (weak, nonatomic) id<ASDTestFlightServiceHostDelegate> delegate;

- (id)initWithQueue:(id)a0;
- (void).cxx_destruct;
- (void)_onRunQueue_callExtensionWithContext:(id /* block */)a0 interruptionBlock:(id /* block */)a1;
- (void)notifyOfReceivedPushMessages:(id)a0 completionHandler:(id /* block */)a1;
- (void)_updateCurrentExtensionTo:(id)a0;
- (long long)_onRunQueue_extensionStatus;
- (void)notifyOfReachedTerminalPhaseWithBetaBundleID:(id)a0 terminalPhase:(long long)a1 error:(id)a2 completionHandler:(id /* block */)a3;
- (void)notifyOfReceivedPushToken:(id)a0 completionHandler:(id /* block */)a1;
- (void)reloadAppsFromServerWithCompletionHandler:(id /* block */)a0;
- (void)_callExtensionWithContext:(id /* block */)a0 interruptionBlock:(id /* block */)a1;

@end
