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

+ (id)operator;
+ (void)load;
+ (BOOL)isDebugEnabled;
+ (id)defaults;
+ (id)railDefinitions;
+ (BOOL)fullMode;
+ (id)accountingGroupDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryKeys;
+ (id)entryEventIntervalDefinitions;
+ (void)setEnabled:(BOOL)a0;
+ (id)className;
+ (BOOL)isEnabled;
+ (id)entryAggregateDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryKeyForType:(id)a0 andName:(id)a1;
+ (id)storageQueueName;
+ (BOOL)isDebugEnabledForKey:(id)a0;
+ (id)entryKeyForType:(id)a0 andName:(id)a1 isDynamic:(BOOL)a2;
+ (id)entryDefinitions;
+ (id)trimConditionsWithEntryKey:(id)a0 withTrimDate:(id)a1 withDuration:(id)a2 withStartDateKey:(id)a3;
+ (id)trimConditionsWithEntryKey:(id)a0 withTrimDate:(id)a1 withCount:(id)a2 withStartDateKey:(id)a3;

- (id)init;
- (BOOL)isDebugEnabled;
- (void).cxx_destruct;
- (void)dealloc;
- (void)log;
- (void)initTaskOperatorDependancies;
- (id)entryKeys;
- (id)trimConditionsForEntryKey:(id)a0 forTrimDate:(id)a1;
- (void)flushBuffer;
- (void)logEntries:(id)a0 withGroupID:(id)a1;
- (void)logEntry:(id)a0;
- (void)initOperatorDependancies;
- (void)updateEntry:(id)a0 withBlock:(id /* block */)a1;
- (id)tablesToTrimConditionsForTrimDate:(id)a0;
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
- (double)timeIntervalSinceLastLogForEntryKey:(id)a0;
- (void)logFromCFCallback:(id)a0;
- (void)logProportionateAggregateEntry:(id)a0 withStartDate:(id)a1 withEndDate:(id)a2;

@end
