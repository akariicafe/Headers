@class NSXPCListener, CXTransactionGroup, CXTransactionManager, NSMutableSet, NSArray, NSObject, NSString;
@protocol OS_dispatch_queue, CXCallSourceManagerDelegate;

@interface CXCallSourceManager : NSObject <NSXPCListenerDelegate, CXCallSourceDelegate, CXTransactionManagerDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (weak, nonatomic) id<CXCallSourceManagerDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (retain, nonatomic) NSXPCListener *xpcListener;
@property (retain, nonatomic) NSMutableSet *mutableCallSources;
@property (retain, nonatomic) CXTransactionGroup *uncommittedTransactionGroup;
@property (retain, nonatomic) CXTransactionManager *transactionManager;
@property (readonly, nonatomic) NSArray *callSources;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)callSource:(id)a0 reportedCallWithUUID:(id)a1 crossDeviceIdentifier:(id)a2 changedBytesOfDataUsed:(long long)a3;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0 queue:(id)a1;
- (void)addCallSource:(id)a0;
- (void)transactionManager:(id)a0 actionTimedOut:(id)a1 forCallSource:(id)a2;
- (void)callSourceConnectionStarted:(id)a0;
- (void)callSourceConnectionEnded:(id)a0;
- (void)callSource:(id)a0 requestedTransaction:(id)a1 completion:(id /* block */)a2;
- (void)commitUncommittedTransactions;
- (void)callSource:(id)a0 reportedCallWithUUID:(id)a1 endedAtDate:(id)a2 privateReason:(long long)a3 failureContext:(id)a4;
- (void)addAction:(id)a0 toUncommittedTransactionForCallSource:(id)a1;
- (void)transactionManager:(id)a0 transactionGroupCompleted:(id)a1;
- (void)callSource:(id)a0 reportedAudioFinishedForCallWithUUID:(id)a1;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)callSourceInvalidated:(id)a0;
- (void)failOutstandingActionsForCallWithUUID:(id)a0;
- (void)performDelegateCallback:(id /* block */)a0;
- (void)callSource:(id)a0 reportedOutgoingCallWithUUID:(id)a1 connectedAtDate:(id)a2;
- (void)callSource:(id)a0 reportedCallWithUUID:(id)a1 updated:(id)a2;
- (id)callSourceWithIdentifier:(id)a0;
- (void)callSource:(id)a0 reportedNewIncomingCallWithUUID:(id)a1 update:(id)a2 completion:(id /* block */)a3;
- (void)callSource:(id)a0 reportedCallWithUUID:(id)a1 changedMeterLevel:(float)a2 forDirection:(long long)a3;
- (void)removeCallSource:(id)a0;
- (void)commitTransaction:(id)a0 toCallSource:(id)a1;
- (void)_performDelegateCallback:(id /* block */)a0;
- (void)callSource:(id)a0 reportedOutgoingCallWithUUID:(id)a1 sentInvitationAtDate:(id)a2;
- (void)callSource:(id)a0 reportedCallWithUUID:(id)a1 changedFrequencyData:(id)a2 forDirection:(long long)a3;
- (void)callSource:(id)a0 actionCompleted:(id)a1;
- (void)callSource:(id)a0 registeredWithConfiguration:(id)a1;
- (void)callSource:(id)a0 reportedOutgoingCallWithUUID:(id)a1 startedConnectingAtDate:(id)a2;

@end
