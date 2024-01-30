@class MSVTaskAssertion, NSString, NSXPCConnection, NSObject;
@protocol OS_dispatch_source;

@interface _MLChangeObserver : NSObject <MLMediaLibraryAccountChangeObserver>

@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timeoutTimer;
@property (retain, nonatomic) MSVTaskAssertion *taskAssertion;
@property (nonatomic, getter=hasTimedOut) BOOL timedOut;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)observerWithConnection:(id)a0;

- (void)terminateForFailureToPerformDatabasePathChange;
- (void).cxx_destruct;
- (void)dealloc;
- (void)emergencyDisconnectWithCompletion:(id /* block */)a0;
- (void)performDatabasePathChange:(id)a0 completion:(id /* block */)a1;
- (void)tearDownTaskAssertion;
- (void)tearDownTimeoutTimer;
- (void)setupTaskAssertion;
- (void)setupTimeoutTimer;

@end
