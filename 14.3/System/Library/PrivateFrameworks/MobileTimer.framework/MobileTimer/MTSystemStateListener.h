@class NSString;
@protocol MTSystemStateDelegate;

@interface MTSystemStateListener : NSObject <MTSpringboardStartMonitorObserver, MTAgentNotificationListener, MTAgentDiagnosticDelegate>

@property (weak, nonatomic) id<MTSystemStateDelegate> delegate;
@property (nonatomic) BOOL restoreDoneHandled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isSystemRestoreDone;
+ (id)_restoreNotification;

- (void)handleNotification:(id)a0 ofType:(long long)a1 completion:(id /* block */)a2;
- (BOOL)handlesNotification:(id)a0 ofType:(long long)a1;
- (void)springboardStartMonitor:(id)a0 didReceiveStarted:(BOOL)a1;
- (void).cxx_destruct;
- (void)printDiagnostics;
- (BOOL)checkSystemReady;
- (id)gatherDiagnostics;
- (void)_handleRestoreDone;
- (void)_verifyRestoreDone;
- (id)initWithDelegate:(id)a0;
- (id)liveDarwinNotifications;
- (BOOL)_checkIfRestoreDone;
- (void)_handleF5Reset;

@end
