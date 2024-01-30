@class NSMutableArray, NSNumber, NSString, NSXPCInterface, NSObject, EMRemoteConnection;
@protocol OS_os_log, EFCancelable, EFScheduler;

@interface EMOutgoingMessageRepository : NSObject <EFLoggable, EMOutgoingMessageRepositoryInterfaceObserver>

@property (class, readonly) NSXPCInterface *remoteInterface;
@property (class, readonly) NSObject<OS_os_log> *log;

@property (retain) EMRemoteConnection *connection;
@property (retain, nonatomic) id<EFCancelable> registrationCancelable;
@property (retain, nonatomic) id<EFScheduler> scheduler;
@property (readonly, nonatomic) NSMutableArray *observers;
@property (retain, nonatomic) NSNumber *pendingMessages;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)signpostLog;

- (id)initWithRemoteConnection:(id)a0;
- (unsigned long long)signpostID;
- (id)saveDraftMessage:(id)a0 mailboxObjectID:(id)a1 previousDraftObjectID:(id)a2;
- (void)deleteDraftsInMailbox:(id)a0 documentID:(id)a1 previousDraftObjectID:(id)a2;
- (void).cxx_destruct;
- (void)processAllQueuedMessages;
- (void)suspendDeliveryQueue;
- (void)removeObserver:(id)a0;
- (void)dealloc;
- (BOOL)outboxContainsMessageFromAccount:(id)a0;
- (void)addObserver:(id)a0;
- (void)updateObservers;
- (void)resumeDeliveryQueue;
- (id)deliverMessage:(id)a0 usingMailDrop:(BOOL)a1;
- (BOOL)isProcessing;
- (void)_restartObservingUnsentChangesIfNecessary;
- (void)numberOfPendingMessagesChanged:(id)a0;
- (void)_startObservingUnsentChangesIfNecessary;
- (unsigned long long)numberOfPendingMessages;

@end
