@class NSMutableArray, NSNumber, NSString, NSXPCInterface, NSObject, EMRemoteConnection;
@protocol OS_os_log, EFCancelable, EFScheduler;

@interface EMOutgoingMessageRepository : NSObject <EFLoggable, EMOutgoingMessageRepositoryInterfaceObserver> {
    _Atomic BOOL _hasStartedObservingUnsentChanges;
}

@property (class, readonly) NSXPCInterface *remoteInterface;
@property (class, readonly) NSObject<OS_os_log> *log;

@property (retain) EMRemoteConnection *connection;
@property (retain) id<EFCancelable> registrationCancelable;
@property (readonly, nonatomic) id<EFScheduler> scheduler;
@property (readonly, nonatomic) NSMutableArray *observers;
@property (retain, nonatomic) NSNumber *pendingMessages;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)signpostLog;

- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (unsigned long long)signpostID;
- (BOOL)isProcessing;
- (id)initWithRemoteConnection:(id)a0;
- (void)suspendDeliveryQueue;
- (void)resumeDeliveryQueue;
- (void)processAllQueuedMessages;
- (void)numberOfPendingMessagesChanged:(id)a0;
- (void)_restartObservingUnsentChangesIfNecessary;
- (void)_startObservingUnsentChangesIfNecessary;
- (void)updateObservers;
- (id)saveDraftMessage:(id)a0 mailboxObjectID:(id)a1 previousDraftObjectID:(id)a2;
- (void)deleteDraftsInMailbox:(id)a0 documentID:(id)a1 previousDraftObjectID:(id)a2;
- (id)deliverMessage:(id)a0 usingMailDrop:(BOOL)a1;
- (BOOL)outboxContainsMessageFromAccount:(id)a0;
- (unsigned long long)numberOfPendingMessages;

@end
