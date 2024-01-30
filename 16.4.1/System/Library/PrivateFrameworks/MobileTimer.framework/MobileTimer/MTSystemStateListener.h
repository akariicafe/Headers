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

- (void)springboardStartMonitor:(id)a0 didReceiveStarted:(BOOL)a1;
- (void)printDiagnostics;
- (void)handleNotification:(id)a0 ofType:(long long)a1 completion:(id /* block */)a2;
- (void)_handleF5Reset;
- (id)gatherDiagnostics;
- (id)liveDarwinNotifications;
- (void)_verifyRestoreDone;
- (BOOL)_checkIfRestoreDone;
- (BOOL)checkSystemReady;
- (id)initWithDelegate:(id)a0;
- (BOOL)handlesNotification:(id)a0 ofType:(long long)a1;
- (void)_handleRestoreDone;
- (void).cxx_destruct;

@end
