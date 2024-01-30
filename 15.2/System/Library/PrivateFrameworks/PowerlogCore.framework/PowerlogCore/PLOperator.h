@class PLTimer, NSMutableDictionary, PLCoreStorage, NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface PLOperator : NSObject

@property (retain) NSMutableDictionary *filterDefinitions;
@property (retain) NSMutableDictionary *filterDeltaLastEntryIDs;
@property (retain) NSMutableArray *bufferedEntries;
@property (retain) PLTimer *triggerBufferFlush;
@property (retain) NSMutableDictionary *lastLogDateForEntryKey;
@property (readonly, weak) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, weak) NSObject<OS_dispatch_queue> *storageQueue;
@property (readonly, weak) PLCoreStorage *storage;
@property (readonly, weak) NSString *className;
@property (readonly, weak) NSString *storageQueueName;
@property (retain) NSMutableDictionary *localCache;

+ (id)entryEventBackwardDefinitions;
+ (id)defaults;
+ (id)entryEventNoneDefinitions;
+ (id)className;
+ (id)entryEventPointDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)entryAggregateDefinitions;
+ (id)operator;
+ (void)setEnabled:(BOOL)a0;
+ (id)entryKeys;
+ (BOOL)isEnabled;
+ (BOOL)isDebugEnabled;
+ (BOOL)fullMode;
+ (id)accountingGroupDefinitions;
+ (id)entryEventForwardDefinitions;
+ (void)load;
+ (id)railDefinitions;
+ (id)entryKeyForType:(id)a0 andName:(id)a1;
+ (id)storageQueueName;
+ (BOOL)isDebugEnabledForKey:(id)a0;
+ (id)entryKeyForType:(id)a0 andName:(id)a1 isDynamic:(BOOL)a2;
+ (id)entryDefinitions;
+ (id)trimConditionsWithEntryKey:(id)a0 withTrimDate:(id)a1 withDuration:(id)a2 withStartDateKey:(id)a3;
+ (id)trimConditionsWithEntryKey:(id)a0 withTrimDate:(id)a1 withCount:(id)a2 withStartDateKey:(id)a3;
+ (id)createEntriesForMetrics:(id)a0 withData:(id)a1;

- (id)entryKeys;
- (void)updateEntry:(id)a0 withBlock:(id /* block */)a1;
- (BOOL)isDebugEnabled;
- (void)logEntry:(id)a0;
- (void)log;
- (void).cxx_destruct;
- (id)trimConditionsForEntryKey:(id)a0 forTrimDate:(id)a1;
- (id)init;
- (void)dealloc;
- (void)logEntries:(id)a0 withGroupID:(id)a1;
- (void)flushBuffer;
- (void)initTaskOperatorDependancies;
- (void)initOperatorDependancies;
- (id)tablesToTrimConditionsForTrimDate:(id)a0;
- (void)logForSubsystem:(id)a0 category:(id)a1 data:(id)a2;
- (BOOL)isDebugEnabledForKey:(id)a0;
- (id)entryDefinitions;
- (void)subscribeNotificationsForEntries;
- (id)defaultObjectForKey:(id)a0;
- (BOOL)shouldWriteEntry:(id)a0 withDebug:(BOOL)a1;
- (void)enableBufferFlushTimer:(unsigned long long)a0;
- (void)postEntries:(id)a0;
- (void)postEntries:(id)a0 withGroupID:(id)a1;
- (BOOL)postFilteredNotificationForEntry:(id)a0 withFilteredDefition:(id)a1 withNotificationName:(id)a2;
- (void)logRequestNotification:(id)a0;
- (void)setupFilterRequest:(id)a0;
- (BOOL)defaultBoolForKey:(id)a0;
- (double)defaultDoubleForKey:(id)a0;
- (long long)defaultLongForKey:(id)a0;
- (id)initForTest;
- (double)timeIntervalSinceLastLogForEntryKey:(id)a0;
- (void)logFromCFCallback:(id)a0;
- (void)logProportionateAggregateEntry:(id)a0 withStartDate:(id)a1 withEndDate:(id)a2;

@end
