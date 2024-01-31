@class NSString, NSArray, BSServiceConnectionListener, CXTransactionManager, NSMutableDictionary, CXTransactionGroup, BSServiceConnection, NSObject, CXChannelServiceDefinition;
@protocol OS_dispatch_queue, CXChannelServiceServerDelegate;

@interface CXChannelServiceServer : NSObject <CXChannelServiceClientDelegate, BSServiceConnectionListenerDelegate>

@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } accessorLock;
@property (readonly, nonatomic) BSServiceConnection *connection;
@property (readonly, nonatomic) CXChannelServiceDefinition *definition;
@property (readonly, nonatomic) NSMutableDictionary *identifierToClient;
@property (readonly, nonatomic) BSServiceConnectionListener *listener;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) CXTransactionManager *transactionManager;
@property (retain, nonatomic) CXTransactionGroup *uncommittedTransactionGroup;
@property (weak, nonatomic) id<CXChannelServiceServerDelegate> delegate;
@property (readonly, nonatomic) NSArray *clients;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addClient:(id)a0;
- (id)init;
- (void)dealloc;
- (void)removeClient:(id)a0;
- (void)failOutstandingActionsForChannelWithUUID:(id)a0;
- (void)listener:(id)a0 didReceiveConnection:(id)a1 withContext:(id)a2;
- (void)serviceClient:(id)a0 reportedChannelWithUUID:(id)a1 disconnectedAtDate:(id)a2 disconnectedReason:(long long)a3;
- (void)serviceClient:(id)a0 reportedIncomingTransmissionStartedForChannelWithUUID:(id)a1 update:(id)a2 shouldReplaceOutgoingTransmission:(BOOL)a3 completionHandler:(id /* block */)a4;
- (id)clientForIdentifier:(id)a0;
- (void)invalidate;
- (void)commitUncommittedTransactions;
- (void)activate;
- (void)serviceClient:(id)a0 requestedTransaction:(id)a1 completionHandler:(id /* block */)a2;
- (void)serviceClient:(id)a0 reportedChannelWithUUID:(id)a1 connectedAtDate:(id)a2;
- (void)serviceClient:(id)a0 reportedChannelWithUUID:(id)a1 updated:(id)a2;
- (void)addAction:(id)a0 toUncommittedTransactionForServiceClient:(id)a1;
- (void).cxx_destruct;
- (void)serviceClient:(id)a0 actionCompleted:(id)a1;
- (void)serviceClient:(id)a0 reportedChannelWithUUID:(id)a1 startedConnectingAtDate:(id)a2;
- (void)serviceClient:(id)a0 reportedIncomingTransmissionEndedForChannelWithUUID:(id)a1 reason:(long long)a2 completionHandler:(id /* block */)a3;
- (void)serviceClient:(id)a0 reportedAudioFinishedForChannelWithUUID:(id)a1;
- (void)serviceClient:(id)a0 registeredWithConfiguration:(id)a1;

@end
