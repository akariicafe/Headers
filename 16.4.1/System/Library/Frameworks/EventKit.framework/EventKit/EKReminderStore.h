@class NSString, NSArray, NSMutableDictionary, REMStore, NSMutableSet, EKEventStore, NSObject, NSMutableArray;
@protocol OS_os_log, OS_dispatch_queue;

@interface EKReminderStore : NSObject <EKUpdatedReminderBackingObjectProvider> {
    NSObject<OS_dispatch_queue> *_queue;
    NSArray *_sources;
    NSMutableDictionary *_cachedConstraints;
    NSArray *_lists;
    NSMutableSet *_newObjectsIDs;
    NSMutableDictionary *_updatedObjects;
    NSMutableSet *_objectIDsToCommit;
    NSMutableDictionary *_deletedObjects;
    NSMutableArray *_objectsToReset;
    NSMutableArray *_remindersNeedingMove;
    NSMutableDictionary *_movedRemindersIDMap;
    NSObject<OS_dispatch_queue> *_queryQueue;
    NSMutableDictionary *queryCompletionHandlers;
}

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly, nonatomic) REMStore *remStore;
@property (readonly, weak) EKEventStore *eventStore;
@property (readonly) NSArray *sources;
@property (readonly) NSArray *calendars;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)frozenClassForReminderClass:(Class)a0;
+ (BOOL)isNotFoundError:(id)a0;
+ (id)uniqueIdentifierForREMObject:(id)a0;

- (BOOL)saveObject:(id)a0 withFrozenObject:(id)a1 error:(id *)a2;
- (id)existingUpdatedObject:(id)a0;
- (id)resetBackingLocationWithBackingLocation:(id)a0;
- (id)frozenObjectForReminderObject:(id)a0;
- (id)createNewReminder;
- (id)backingCalendarWithIdentifier:(id)a0;
- (id)frozenCalendarFromCalendar:(id)a0 error:(id *)a1;
- (id)remindersWithExternalIdentifier:(id)a0;
- (id)sourceWithIdentifier:(id)a0;
- (void)_loadAccounts;
- (id)predicateForCalendarStoreForRemindersInCalendars:(id)a0;
- (void)remindersChanged;
- (id)fetchRemindersMatchingPredicate:(id)a0 completion:(id /* block */)a1;
- (id)initWithEventStore:(id)a0 token:(id)a1;
- (id)reminderWithIdentifier:(id)a0;
- (BOOL)commit:(id *)a0;
- (id)predicateForRemindersInCalendars:(id)a0;
- (BOOL)removeCalendar:(id)a0 error:(id *)a1;
- (id)cachedConstraintsForSource:(id)a0;
- (id)_moveRemindersToNewLists:(id)a0 error:(id *)a1;
- (BOOL)saveCalendar:(id)a0 error:(id *)a1;
- (id)remindersMatchingPredicate:(id)a0;
- (void)_checkPredicate:(id)a0;
- (BOOL)isSourceManaged:(id)a0;
- (id)createNewReminderCalendar;
- (id)calendarWithIdentifier:(id)a0;
- (void)fillInPath:(id)a0 usingParents:(id)a1;
- (id)predicateForCompletedRemindersWithCompletionDateStarting:(id)a0 ending:(id)a1 calendars:(id)a2;
- (void)_loadAccountsIfNeeded;
- (void)_loadListsIfNeeded;
- (id)_fetchAndCacheConstraintsForFrozenSource:(id)a0;
- (BOOL)removeReminder:(id)a0 error:(id *)a1;
- (void)_loadLists;
- (id /* block */)completionBlockForFetchRequestToken:(id)a0 remove:(BOOL)a1;
- (id)predicateForIncompleteRemindersWithDueDateStarting:(id)a0 ending:(id)a1 calendars:(id)a2;
- (id)frozenAlarmForREMAlarms:(id)a0;
- (id)backingReminderWithIdentifier:(id)a0;
- (BOOL)saveReminder:(id)a0 error:(id *)a1;
- (id)newFrozenObjectForReminderObject:(id)a0 withChanges:(id)a1;
- (id)resetBackingAlarmWithBackingAlarm:(id)a0;
- (id)reminderWithUniqueId:(id)a0;
- (id)defaultCalendarForNewReminders;
- (void).cxx_destruct;
- (id)_allLists;
- (void)reset;
- (void)_reminderCopiedToNewList:(id)a0;
- (BOOL)_commit:(id *)a0 error:(id *)a1;

@end
