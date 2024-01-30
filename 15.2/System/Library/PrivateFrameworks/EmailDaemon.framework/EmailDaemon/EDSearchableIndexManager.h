@class EDPersistenceDatabase, EDSearchableIndex, NSString, EDSearchableIndexPersistence, EDSearchableIndexScheduler, NSObject;
@protocol OS_os_log;

@interface EDSearchableIndexManager : NSObject <EFLoggable, EDMessageChangeHookResponder>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (nonatomic) BOOL needsReindex;
@property (nonatomic) BOOL needsToScheduleRecurringActivity;
@property (readonly, nonatomic) EDSearchableIndexPersistence *persistence;
@property (readonly, nonatomic) EDSearchableIndexScheduler *scheduler;
@property (readonly, nonatomic) EDPersistenceDatabase *database;
@property (readonly, nonatomic) EDSearchableIndex *index;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)scheduleRecurringActivity;
- (void)persistenceDidChangeFlags:(id)a0 messages:(id)a1 generationWindow:(id)a2;
- (void)test_tearDown;
- (id)initWithDatabase:(id)a0 hookResponder:(id)a1;
- (void).cxx_destruct;
- (void)persistenceDidDeleteMessages:(id)a0 generationWindow:(id)a1;
- (void)persistenceDidAddMessages:(id)a0 generationWindow:(id)a1;
- (void)enableIndexingAndBeginScheduling:(BOOL)a0;
- (void)enableIndexingAndBeginScheduling:(BOOL)a0 budgetConfiguration:(id)a1;
- (void)persistenceWillBeginUpdates;
- (void)persistenceDidFinishUpdates;
- (void)persistenceDidUpdateData:(id)a0 message:(id)a1;
- (void)persistenceDidAddLabels:(id)a0 removeLabels:(id)a1 messages:(id)a2 generationWindow:(id)a3;
- (void)_removeAllItemsFromIndexAndWait:(BOOL)a0 options:(unsigned long long)a1;
- (void)_removeItemsForPersistedMessages:(id)a0;
- (void)removeAllItemsFromIndexAndWait:(BOOL)a0 skipInvalidation:(BOOL)a1;
- (void)setNeedsReindex;

@end
