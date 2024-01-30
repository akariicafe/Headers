@class MTCompanionSyncSession, NSMutableDictionary, SYService, MTExponentialBackOffTimer, NSString, NSObject;
@protocol MTSyncServiceDelegate, NAScheduler, OS_dispatch_queue, MTSyncStatusProvider;

@interface MTCompanionSyncService : NSObject <SYServiceDelegate, MTSyncStatusProviderDelegate, MTSyncService>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (retain, nonatomic) id<NAScheduler> serializer;
@property (retain, nonatomic) SYService *service;
@property (retain, nonatomic) id<MTSyncStatusProvider> syncStatusProvider;
@property (retain, nonatomic) MTCompanionSyncSession *sendingSession;
@property (retain, nonatomic) MTCompanionSyncSession *receivingSession;
@property (retain, nonatomic) NSMutableDictionary *pendingRequests;
@property (retain, nonatomic) MTExponentialBackOffTimer *retryTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<MTSyncServiceDelegate> delegate;

+ (BOOL)shouldRetryForError:(id)a0;

- (BOOL)service:(id)a0 startSession:(id)a1 error:(id *)a2;
- (BOOL)service:(id)a0 startSendingSession:(id)a1 error:(id *)a2;
- (id)service:(id)a0 willPreferSession:(id)a1 overSession:(id)a2;
- (BOOL)resume:(id *)a0;
- (void).cxx_destruct;
- (void)service:(id)a0 sessionEnded:(id)a1 error:(id)a2;
- (void)syncStatusProvider:(id)a0 didChangeSyncStatus:(unsigned long long)a1;
- (id)initWithSyncStatusProvider:(id)a0;
- (void)_requestSync:(unsigned long long)a0;
- (BOOL)service:(id)a0 startReceivingSession:(id)a1 error:(id *)a2;
- (void)suspend;
- (void)service:(id)a0 sendingSessionEnded:(id)a1 error:(id)a2;
- (void)_retryRequest;
- (void)service:(id)a0 receivingSessionEnded:(id)a1 error:(id)a2;
- (id)requestSync:(unsigned long long)a0;

@end
