@class NSString, NSObject, NSXPCConnection;
@protocol OS_dispatch_queue, BKSAlternateSystemAppDelegate, OS_dispatch_semaphore;

@interface BKSAlternateSystemApp : NSObject <BKSAlternateSystemAppClientProtocol>

@property (copy, nonatomic) NSString *bundleId;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) long long state;
@property (nonatomic) BOOL stateChangeWaiter;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *stateChangeSemaphore;
@property (weak, nonatomic) id<BKSAlternateSystemAppDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)terminate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_queue_invalidate;
- (void)activate;
- (void)_handleInterruptedConnection;
- (void)_queue_ensureConnection;
- (void)_waitForState:(long long)a0;
- (void)didBlockSystemAppForAlternateSystemApp;
- (void)alternateSystemAppWithBundleIDDidOpen:(id)a0;
- (void)didUnblockSystemAppForAlternateSystemApp;
- (void)alternateSystemAppWithBundleID:(id)a0 failedToOpenWithResult:(id)a1;
- (id)initWithBundleId:(id)a0;
- (void)alternateSystemAppWithBundleID:(id)a0 didExitWithContext:(id)a1;
- (void)_queue_changeState:(long long)a0;
- (void)alternateSystemAppWithBundleIDDidTerminate:(id)a0;
- (void)_handleInvalidatedConnection;

@end
