@class CXTransactionGroup, NSMutableDictionary, CXTransactionManager, CXChannelServiceServer, NSArray, NSObject, NSString;
@protocol OS_dispatch_queue, CXChannelSourceManagerDelegate;

@interface CXChannelSourceManager : NSObject <CXChannelServiceServerDelegate, CXTransactionManagerDelegate>

@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } accessorLock;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, weak, nonatomic) id<CXChannelSourceManagerDelegate> delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, nonatomic) NSMutableDictionary *identifierToChannelSource;
@property (readonly, nonatomic) CXChannelServiceServer *serviceServer;
@property (readonly, nonatomic) CXTransactionManager *transactionManager;
@property (retain, nonatomic) CXTransactionGroup *uncommittedTransactionGroup;
@property (readonly, nonatomic) NSArray *channelSources;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)channelSourceForIdentifier:(id)a0;
- (void)addChannelSource:(id)a0;
- (void)removeChannelSource:(id)a0;
- (id)initWithDelegate:(id)a0 queue:(id)a1;
- (void)performDelegateCallback:(id /* block */)a0;
- (void)serviceServer:(id)a0 client:(id)a1 requestedTransaction:(id)a2 completionHandler:(id /* block */)a3;
- (void)serviceServer:(id)a0 client:(id)a1 reportedChannelWithUUID:(id)a2 startedConnectingAtDate:(id)a3;
- (void)failOutstandingActionsForChannelWithUUID:(id)a0;
- (void)transactionManager:(id)a0 actionTimedOut:(id)a1 forCallSource:(id)a2;
- (void)serviceServer:(id)a0 client:(id)a1 reportedAudioFinishedForChannelWithUUID:(id)a2;
- (void)serviceServer:(id)a0 didAddClient:(id)a1;
- (void)serviceServer:(id)a0 client:(id)a1 reportedIncomingTransmissionStartedForChannelWithUUID:(id)a2 update:(id)a3 shouldReplaceOutgoingTransmission:(BOOL)a4 completionHandler:(id /* block */)a5;
- (void)serviceServer:(id)a0 didRemoveClient:(id)a1;
- (void)serviceServer:(id)a0 client:(id)a1 reportedChannelWithUUID:(id)a2 updated:(id)a3;
- (void)serviceServer:(id)a0 client:(id)a1 reportedIncomingTransmissionEndedForChannelWithUUID:(id)a2 reason:(long long)a3 completionHandler:(id /* block */)a4;
- (void)commitUncommittedTransactions;
- (void)serviceServer:(id)a0 client:(id)a1 reportedChannelWithUUID:(id)a2 disconnectedAtDate:(id)a3 disconnectedReason:(long long)a4;
- (void)serviceServer:(id)a0 client:(id)a1 actionCompleted:(id)a2;
- (void)serviceServer:(id)a0 client:(id)a1 reportedChannelWithUUID:(id)a2 connectedAtDate:(id)a3;
- (void)serviceServer:(id)a0 client:(id)a1 registeredWithConfiguration:(id)a2;
- (void).cxx_destruct;
- (void)transactionManager:(id)a0 transactionGroupCompleted:(id)a1;
- (void)addAction:(id)a0 toUncommittedTransactionForChannelSource:(id)a1;

@end
