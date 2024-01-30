@class NSString;
@protocol MTSystemStateDelegate, MTScheduler;

@interface MTSystemStateListener : NSObject <MTSpringboardStartMonitorObserver, MTAgentNotificationListener, MTAgentDiagnosticDelegate>

@property (weak, nonatomic) id<MTSystemStateDelegate> delegate;
@property (nonatomic) BOOL restoreDoneHandled;
@property (retain, nonatomic) id<MTScheduler> serializer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_restoreNotification;
+ (BOOL)isSystemRestoreDone;

- (BOOL)handlesNotification:(id)a0 ofType:(long long)a1;
- (void)handleNotification:(id)a0 ofType:(long long)a1 completion:(id /* block */)a2;
- (id)initWithDelegate:(id)a0;
- (void)_handleF5Reset;
- (void)printDiagnostics;
- (id)gatherDiagnostics;
- (BOOL)_checkIfRestoreDone;
- (id)liveDarwinNotifications;
- (BOOL)checkSystemReady;
- (void).cxx_destruct;
- (void)_verifyRestoreDone;
- (void)_handleRestoreDone;
- (void)springboardStartMonitor:(id)a0 didReceiveStarted:(BOOL)a1;

@end
