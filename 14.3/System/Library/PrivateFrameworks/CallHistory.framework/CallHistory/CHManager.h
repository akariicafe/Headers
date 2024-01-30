@class NSArray, CHPhoneBookIOSManager, NSPredicate, NSDate, NSString;
@protocol SyncManagerProtocol;

@interface CHManager : CHSynchronizedLoggable

@property (nonatomic, getter=isContactsDisabled) BOOL contactsDisabled;
@property (readonly, nonatomic) CHPhoneBookIOSManager *phoneBookManager;
@property (retain, nonatomic) NSArray *recentCalls;
@property long long numberOfUnseenMissedCalls;
@property (retain) id<SyncManagerProtocol> syncManager;
@property BOOL cacheIsDirty;
@property BOOL reCoalesce;
@property (retain, nonatomic, getter=uncoalescedRecentCallsSync) NSArray *uncoalescedRecentCalls;
@property (retain) NSArray *uncoalescedUnFilteredRecentCalls;
@property (nonatomic) BOOL showsFaceTimeVideoCalls;
@property (nonatomic) BOOL showsFaceTimeAudioCalls;
@property (nonatomic) BOOL showsTelephonyCalls;
@property (nonatomic) BOOL generateSyncTransactions;
@property (nonatomic) unsigned int limitingCallTypes;
@property (copy, nonatomic) NSDate *limitingStartDate;
@property (copy, nonatomic) NSDate *limitingEndDate;
@property (copy, nonatomic) NSArray *limitingCallKinds;
@property (retain, nonatomic) NSPredicate *postFetchingPredicate;
@property (copy, nonatomic) NSString *coalescingStrategy;

+ (unsigned int)CHCallStatusForCallWithDuration:(double)a0 isOriginated:(BOOL)a1 isAnswered:(BOOL)a2;
+ (id)limitingCallKindsForCallType:(unsigned int)a0;

- (void)setLimitingCallTypesSync:(unsigned int)a0;
- (double)callTimersGetIncoming;
- (void)markAllCallsAsReadWithPredicate:(id)a0;
- (id)latestRecentCallMatchingPredicate:(id)a0;
- (void)registerForNotifications;
- (void)deleteTheseCallsSync:(id)a0;
- (id)init;
- (void)deleteCallAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)recentCallsWithPredicate:(id)a0;
- (double)callTimersGetOutgoing;
- (id)getLimitsDictionary;
- (void)currentLocaleChanged:(id)a0;
- (void)dealloc;
- (void)addMultipleCallsToCallHistory:(id)a0;
- (void)setRead:(BOOL)a0 forCallsWithPredicate:(id)a1 completion:(id /* block */)a2;
- (id)applyPredicate:(id)a0 toCalls:(id)a1;
- (void)handleCallHistoryDatabaseChangedInternalNotification:(id)a0;
- (void)deleteTheseCalls:(id)a0;
- (void)updateBytesOfDataUsedFor:(id)a0 with:(id)a1;
- (long long)deleteCallsWithPredicate:(id)a0;
- (void)deleteAllCalls;
- (id)latestCallMatchingNormalizedRemoteParticipantHandleValues:(id)a0;
- (void)setInitialLimitingCallKinds:(id)a0;
- (void)addToCallHistory:(id)a0;
- (id)fetchRecentCallsSyncWithCoalescing:(BOOL)a0;
- (void)clearDatabase;
- (id)callsWithPredicate:(id)a0 limit:(unsigned long long)a1 offset:(unsigned long long)a2 batchSize:(unsigned long long)a3;
- (void)deleteCallsWithPredicate:(id)a0 completion:(id /* block */)a1;
- (id)callIdentifiersWithPredicate:(id)a0 limit:(unsigned long long)a1 offset:(unsigned long long)a2 batchSize:(unsigned long long)a3;
- (void)flush;
- (id)coalescedCallsWithPredicate:(id)a0 limit:(unsigned long long)a1 offset:(unsigned long long)a2 batchSize:(unsigned long long)a3;
- (void)setDefaultInitValues;
- (long long)setRead:(BOOL)a0 forCallsWithPredicate:(id)a1;
- (void)handleCallHistoryContactStoreChangedInternalNotification:(id)a0;
- (unsigned long long)coalescedCallCountWithPredicate:(id)a0;
- (void)deleteCall:(id)a0;
- (id)coalescedCallsWithCalls:(id)a0 usingStrategy:(id)a1;
- (id)unCoalesceCall:(id)a0;
- (void)callTimersReset;
- (unsigned long long)countCallsWithPredicate:(id)a0;
- (void)deleteAllCallsSync;
- (unsigned long long)countCallsWithPredicateSync:(id)a0;
- (void)setOutgoingLocalParticipantUUID:(id)a0 forRecentCallsMatchingPredicate:(id)a1;
- (unsigned long long)callCountWithPredicate:(id)a0;
- (id)initWithFetchingLimitsDictionary:(id)a0 andCoalescingStrategy:(id)a1 andPostFetchingPredicate:(id)a2 withQueue:(id)a3;
- (double)callTimersGetLifetime;
- (void)setLimitingCallKindsSync:(id)a0;

@end
