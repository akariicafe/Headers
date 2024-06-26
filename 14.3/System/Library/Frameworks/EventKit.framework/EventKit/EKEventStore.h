@class NSMutableDictionary, EKDaemonConnection, NSDictionary, EKAlarm, NSObject, NSTimeZone, EKCalendar, NSString, EKReminderStore, NSHashTable, EKDataProtectionObserver, NSMutableSet, CADDatabaseInitializationOptions, NSArray, EKObjectID, NSNumber;
@protocol OS_dispatch_queue, CalCalendarDataContainerProvider;

@interface EKEventStore : NSObject <EKDaemonConnectionDelegate> {
    CADDatabaseInitializationOptions *_initializationOptions;
    EKObjectID *_localSourceID;
    EKObjectID *_birthdaySourceID;
    NSMutableDictionary *_defaultCalendarsForNewEventsIDBySourceID;
    EKObjectID *_defaultCalendarForNewRemindersID;
    EKObjectID *_suggestedEventCalendarID;
    EKObjectID *_naturalLanguageSuggestedEventCalendarID;
    EKObjectID *_subscribedCalendarsSourceID;
    NSMutableDictionary *_calendars;
    NSMutableDictionary *_sources;
    NSMutableDictionary *_cachedValidatedAddresses;
    NSNumber *_defaultTimedAlarmOffset;
    NSNumber *_defaultAllDayAlarmOffset;
    BOOL _allowsBirthdayCalendarModifications;
    BOOL _hasAccessToEvents;
    BOOL _hasAccessToReminders;
    BOOL _accessDetermined;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _reminderSourceMapLock;
}

@property (class, copy) id /* block */ reminderStoreContainerTokenProvider;
@property (class, readonly, nonatomic) NSString *eventStoreChangedDistributedNotificationName;

@property (retain, nonatomic) NSHashTable *insertedObjects;
@property (retain, nonatomic) NSMutableSet *deletedObjects;
@property (retain, nonatomic) NSMutableSet *updatedObjects;
@property (retain, nonatomic) NSMutableSet *objectsPendingCommit;
@property (retain, nonatomic) NSMutableSet *objectsPendingSave;
@property (nonatomic) BOOL needsCommitForRemoteChanges;
@property (retain, nonatomic) EKDaemonConnection *database;
@property (nonatomic) double lastDatabaseNotificationTimestamp;
@property (nonatomic) unsigned int flags;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *calendarSourcesAndDefaultsQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *registeredQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *unsavedChangesQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *dbChangedQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *constraintsCacheQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *notificationCollectionCacheQueue;
@property (retain, nonatomic) EKDataProtectionObserver *dataProtectionObserver;
@property (retain, nonatomic) NSMutableDictionary *_cachedConstraints;
@property (retain, nonatomic) NSMutableDictionary *_cachedNotificationCollections;
@property (readonly, nonatomic) EKReminderStore *reminderStore;
@property (retain, nonatomic) NSDictionary *reminderSourceIDToEventSourceIDMapping;
@property (retain, nonatomic) NSDictionary *eventSourceIDToReminderSourceIDMapping;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int x0; } *reminderSourceMapLock;
@property (retain, nonatomic) NSMutableDictionary *registeredObjects;
@property (retain, nonatomic) EKCalendar *defaultCalendarForNewEvents;
@property (readonly, nonatomic) NSArray *inboxRepliedSectionItems;
@property (readonly, nonatomic) BOOL inboxRepliedSectionHasContent;
@property (readonly, nonatomic) EKCalendar *suggestedEventCalendar;
@property (readonly, nonatomic) EKCalendar *naturalLanguageSuggestedEventCalendar;
@property (readonly, nonatomic) BOOL automaticLocationGeocodingAllowed;
@property (readonly, nonatomic) unsigned long long lastConfirmedSplashScreenVersion;
@property (readonly, nonatomic) BOOL allowsBirthdayModifications;
@property (copy, nonatomic) NSTimeZone *timeZone;
@property (readonly, copy, nonatomic) NSString *databasePath;
@property (readonly, nonatomic) EKAlarm *defaultTimedAlarm;
@property (readonly, nonatomic) EKAlarm *defaultAllDayAlarm;
@property (readonly, nonatomic) int unacknowledgedEventCount;
@property (readonly, nonatomic) int notifiableEventCount;
@property (readonly, nonatomic) BOOL isDataProtected;
@property (nonatomic) BOOL showDeclinedEvents;
@property (readonly, nonatomic) id<CalCalendarDataContainerProvider> calendarDataContainerProvider;
@property (nonatomic) BOOL birthdayCalendarEnabled;
@property (readonly) EKDaemonConnection *connection;
@property (readonly, nonatomic) NSArray *eventNotifications;
@property (readonly, nonatomic) unsigned long long eventNotificationCount;
@property (readonly, nonatomic) NSString *eventStoreIdentifier;
@property (readonly, nonatomic) NSArray *delegateSources;
@property (readonly, nonatomic) NSArray *sources;
@property (readonly, nonatomic) NSArray *calendars;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)authorizationStatusForEntityType:(unsigned long long)a0;
+ (unsigned long long)ekEventStoreInitOptionsFromCalDatabaseInitOptions:(int)a0;
+ (int)calDatabaseInitOptionsFromEKEventStoreInitOptions:(unsigned long long)a0;
+ (BOOL)_skipTCCAccessCheck;
+ (BOOL)accessGrantedForEntityType:(unsigned long long)a0;
+ (Class)classForEntityName:(id)a0;
+ (id)_filteredObjectsWithIdentifiers:(id)a0 fromObjects:(id)a1;
+ (BOOL)_isConfirmedSuggestedEvent:(id)a0 uniqueKey:(id *)a1;
+ (void)_addDaysSpannedByEvent:(id)a0 toCountedSet:(id)a1 inRange:(id)a2 withNSCalendar:(id)a3;
+ (void)setDenyAccessToEvents:(BOOL)a0;
+ (void)setDenyAccessToReminders:(BOOL)a0;

- (BOOL)save:(id *)a0;
- (id)_predicateForRemindersWithDate:(id)a0 useAsCompletionDate:(BOOL)a1 calendars:(id)a2 limitToCompletedOrIncomplete:(BOOL)a3 completed:(BOOL)a4 includeDatesBefore:(BOOL)a5 sortOrder:(int)a6 preloadProperties:(id)a7 maxResults:(unsigned long long)a8;
- (void)rollback;
- (id)predicateForRemindersWithTitle:(id)a0 listTitle:(id)a1 limitToCompletedOrIncomplete:(BOOL)a2 completed:(BOOL)a3 dueAfter:(id)a4 dueBefore:(id)a5 searchTerm:(id)a6 sortOrder:(int)a7 maxResults:(unsigned long long)a8;
- (id)initWithEKOptions:(unsigned long long)a0 path:(id)a1 changeTrackingClientId:(id)a2 enablePropertyModificationLogging:(BOOL)a3 allowDelegateSources:(BOOL)a4;
- (void)_detachObject:(id)a0;
- (id)_sourceWithID:(id)a0;
- (void)_requestAccessForEntityType:(unsigned long long)a0;
- (void)_clearCachedSources;
- (void)requestAccessToEntityType:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)setSourceAccountManagement:(int)a0 withBundleID:(id)a1;
- (void)_defaultCalendarChangedExternally;
- (void)_handleExternalDatabaseChangeNotification:(id)a0 synchronously:(BOOL)a1;
- (void)_databaseChangedExternally:(unsigned long long)a0 processSynchronously:(BOOL)a1;
- (void)_defaultAlarmChangedExternally;
- (void)_postEventStoreChangedNotificationWithChangeType:(unsigned long long)a0 changedObjectIDs:(id)a1;
- (void)_unregisterObject:(id)a0;
- (BOOL)accessGrantedForEntityType:(unsigned long long)a0;
- (void)_removeCachedCalendarWithID:(id)a0;
- (void)_clearCachedConstraintsForSourceWithObjectID:(id)a0;
- (void)_clearCachedCalendars;
- (id)eventWithUniqueId:(id)a0;
- (void)_cacheCalendarWithObjectID:(id)a0 withDefaultLoadedPropertyValues:(id)a1 forKeys:(id)a2;
- (void)_validateObjectIDs:(id)a0 completion:(id /* block */)a1;
- (BOOL)_isUnitTesting;
- (void)_cacheSourceWithObjectID:(id)a0 withDefaultLoadedPropertyValues:(id)a1 forKeys:(id)a2;
- (void)_saveWithoutNotify;
- (void)_loadSourcesIfNeeded;
- (void)_logMainThreadFetchWarningIfNeeded;
- (id)publicObjectWithFetchedObjectID:(id)a0;
- (void)_loadCalendarsIfNeeded;
- (int)sequenceNumber;
- (id)_predicateForRemindersWithDate:(id)a0 useAsCompletionDate:(BOOL)a1 calendars:(id)a2 limitToCompletedOrIncomplete:(BOOL)a3 completed:(BOOL)a4 includeDatesBefore:(BOOL)a5 sortOrder:(int)a6 preloadProperties:(id)a7;
- (id)contactIdentifierForCalendarItem:(id)a0;
- (void)addContactIdentifier:(id)a0 forCalendarItem:(id)a1;
- (void)removeContactIdentifier:(id)a0 forCalendarItem:(id)a1;
- (id)init;
- (BOOL)_calendar:(id)a0 supportsEntityType:(unsigned long long)a1;
- (BOOL)shouldSaveCalendarAsEventCalendar:(id)a0;
- (BOOL)_saveCalendar:(id)a0 commit:(BOOL)a1 error:(id *)a2;
- (BOOL)shouldSaveCalendarAsReminderCalendar:(id)a0;
- (BOOL)_removeCalendar:(id)a0 commit:(BOOL)a1 error:(id *)a2;
- (id)calendarItemWithIdentifier:(id)a0;
- (id)_eventWithEventIdentifier:(id)a0;
- (id)_eventWithRecurrenceIdentifier:(id)a0;
- (BOOL)_parseURI:(id)a0 expectedScheme:(id)a1 identifier:(id *)a2 options:(id *)a3;
- (id)_eventWithURI:(id)a0 checkValid:(BOOL)a1;
- (id)closestCachedOccurrenceToDate:(double)a0 forEventUID:(int)a1;
- (id)eventForUID:(id)a0 occurrenceDate:(id)a1 checkValid:(BOOL)a2;
- (void)_processChangedObjectIDsWithToken:(long long)a0 errorCode:(int)a1 changesTruncated:(BOOL)a2 latestToken:(long long)a3 changeData:(id)a4 insertCount:(int)a5 updateCount:(int)a6 deleteCount:(int)a7 resultHandler:(id /* block */)a8;
- (id)eventWithUniqueId:(id)a0 occurrenceDate:(id)a1;
- (BOOL)_saveEvent:(id)a0 span:(long long)a1 commit:(BOOL)a2 error:(id *)a3;
- (BOOL)_removeEvent:(id)a0 span:(long long)a1 commit:(BOOL)a2 error:(id *)a3;
- (id)importICSData:(id)a0 intoCalendar:(id)a1 options:(unsigned long long)a2;
- (id)_importEventsWithExternalIDs:(id)a0 fromICSData:(id)a1 intoCalendarsWithIDs:(id)a2 options:(unsigned long long)a3 batchSize:(int)a4;
- (void)_addObjectToPendingCommits:(id)a0;
- (id)ICSDataForCalendarItems:(id)a0 options:(long long)a1;
- (id)defaultCalendarForNewEventsInDelegateSource:(id)a0;
- (BOOL)saveReminder:(id)a0 commit:(BOOL)a1 error:(id *)a2;
- (id)localSource;
- (void)setDefaultCalendar:(id)a0 forNewEventsInDelegateSource:(id)a1;
- (BOOL)removeReminder:(id)a0 commit:(BOOL)a1 error:(id *)a2;
- (id)_calendarItemsMatchingPredicate:(id)a0;
- (id)calendarItemsWithExternalIdentifier:(id)a0 inCalendars:(id)a1;
- (void)_validateReminderPredicate:(id)a0;
- (id)_calendarItemsWithExternalIdentifier:(id)a0 inCalendars:(id)a1 entityTypes:(unsigned long long)a2;
- (void)confirmSuggestedEvent:(id)a0;
- (id)closestCachedOccurrenceToDate:(double)a0 forEventUID:(int)a1 prefersForwardSearch:(BOOL)a2;
- (id)sharedCalendarInvitationsForEntityTypes:(unsigned long long)a0;
- (id)scheduledTaskCacheFetchTasksOnDay:(id)a0 maxResults:(unsigned long long)a1;
- (BOOL)saveEvent:(id)a0 span:(long long)a1 error:(id *)a2;
- (BOOL)removeEvent:(id)a0 span:(long long)a1 error:(id *)a2;
- (BOOL)_saveAndRollbackIfNeededForEvent:(id)a0 span:(long long)a1;
- (BOOL)removeResourceChanges:(id)a0 error:(id *)a1;
- (id)_addFetchedObjectWithID:(id)a0;
- (void).cxx_destruct;
- (id)resourceChangesForEntityTypes:(unsigned long long)a0;
- (BOOL)removeInviteReplyNotifications:(id)a0 error:(id *)a1;
- (BOOL)_refreshDASource:(id)a0 isUserRequested:(BOOL)a1;
- (id)refreshSourcesIfNecessary:(BOOL)a0;
- (void)_registerObjectImmediate:(id)a0;
- (void)_forgetRegisteredObjects;
- (BOOL)_commitObjectsWithIdentifiers:(id)a0 error:(id *)a1;
- (BOOL)saveEvent:(id)a0 span:(long long)a1 commit:(BOOL)a2 error:(id *)a3;
- (void)_removeCachedCalendarFromSource:(id)a0;
- (void)_validateEventPredicate:(id)a0;
- (id)predicateForEventsWithStartDate:(id)a0 endDate:(id)a1 calendars:(id)a2 prefetchHint:(long long)a3 exclusionOptions:(long long)a4;
- (BOOL)shouldWhitelistOrganizerEmailFromJunkChecks:(id)a0;
- (BOOL)shouldWhitelistOrganizerPhoneNumberFromJunkChecks:(id)a0;
- (id)fetchEventsMatchingPredicate:(id)a0 resultHandler:(id /* block */)a1;
- (id)ownedSources;
- (id)predicateForEventsWithStartDate:(id)a0 endDate:(id)a1 calendarIdentifiers:(id)a2 prefetchHint:(long long)a3 exclusionOptions:(long long)a4;
- (id)travelEligibleEventsInCalendars:(id)a0 startDate:(id)a1 endDate:(id)a2;
- (id)predicateForRemindersWithTitle:(id)a0 listTitle:(id)a1 limitToCompletedOrIncomplete:(BOOL)a2 completed:(BOOL)a3 dueAfter:(id)a4 dueBefore:(id)a5 searchTerm:(id)a6 sortOrder:(int)a7;
- (id)predicateForPotentialTravelEventsInCalendars:(id)a0 startDate:(id)a1 endDate:(id)a2;
- (id)predicateForEventsWithStartDate:(id)a0 endDate:(id)a1 calendars:(id)a2;
- (long long)registerForDetailedChangeTrackingInSource:(id)a0 error:(id *)a1;
- (id)_fetchConstraintsForSourceWithObjectID:(id)a0;
- (void)_setIsUnitTesting:(BOOL)a0;
- (id)_fetchPersistentNotificationCollectionForSourceWithObjectID:(id)a0;
- (void)reset;
- (id)initWithAccessToDelegateSources;
- (void)setSourceAccountManagement:(int)a0;
- (id)changesSinceSequenceNumber:(int)a0;
- (id)initWithOptions:(int)a0 path:(id)a1 changeTrackingClientId:(id)a2 enablePropertyModificationLogging:(BOOL)a3 allowDelegateSources:(BOOL)a4;
- (void)_simulateDaemonCrashForUnitTests;
- (void)handleExternalDatabaseChangeNotification:(id)a0;
- (id)_deletableSources;
- (id)sourcesEnabledForEntityType:(unsigned long long)a0;
- (id)getSubscribedCalendarsSourceCreateIfNeededWithError:(id *)a0;
- (id)delegateSourcesForSource:(id)a0;
- (void)fetchGrantedDelegatesForSource:(id)a0 results:(id /* block */)a1;
- (void)updateGrantedDelegatePermission:(id)a0 source:(id)a1 completion:(id /* block */)a2;
- (id)sourceWithExternalID:(id)a0;
- (id)localSubscribedCalendarSource;
- (id)localBirthdayCalendarSource;
- (BOOL)saveSource:(id)a0 commit:(BOOL)a1 error:(id *)a2;
- (BOOL)removeSource:(id)a0 commit:(BOOL)a1 error:(id *)a2;
- (BOOL)hideCalendarsFromNotificationCenter:(id)a0 error:(id *)a1;
- (id)_deletableCalendars;
- (int)readWriteCalendarCountForEntityType:(unsigned long long)a0;
- (void)purgeChangelog;
- (BOOL)deleteCalendar:(id)a0 forEntityType:(unsigned long long)a1 error:(id *)a2;
- (id)eventsWithIdentifiers:(id)a0;
- (id)_eventOccurrenceWithURI:(id)a0;
- (id)eventForUID:(id)a0 occurrenceDate:(id)a1;
- (id)allEventsWithUniqueId:(id)a0 occurrenceDate:(id)a1;
- (BOOL)setInvitationStatus:(unsigned long long)a0 forEvent:(id)a1 error:(id *)a2;
- (BOOL)setInvitationStatus:(unsigned long long)a0 forEvents:(id)a1 error:(id *)a2;
- (id)importICS:(id)a0 intoCalendar:(id)a1 options:(unsigned long long)a2;
- (id)importEventsWithExternalIDs:(id)a0 fromICSData:(id)a1 intoCalendars:(id)a2 options:(unsigned long long)a3 batchSize:(int)a4;
- (id)ICSDataForCalendarItems:(id)a0 preventLineFolding:(BOOL)a1;
- (struct CGColor { } *)copyCGColorForNewCalendar;
- (id)defaultLocalCalendar;
- (id)reminderWithExternalURI:(id)a0;
- (void)dealloc;
- (id)acquireDefaultCalendarForNewEvents;
- (id)acquireDefaultCalendarForNewReminders;
- (void)setDefaultCalendarForNewReminders:(id)a0;
- (BOOL)_removeReminder:(id)a0 commit:(BOOL)a1 error:(id *)a2;
- (id)calendarItemsWithUniqueIdentifier:(id)a0 inCalendar:(id)a1;
- (id)calendarItemsWithExternalIdentifier:(id)a0;
- (id)remindersWithExternalIdentifier:(id)a0 inCalendars:(id)a1;
- (id)_remindersMatchingPredicate:(id)a0;
- (int)countOfRemindersMatchingPredicate:(id)a0;
- (id)reminderObjectIDsMatchingPredicate:(id)a0;
- (BOOL)fetchProperties:(id)a0 forReminders:(id)a1;
- (id)alarmWithUUID:(id)a0;
- (id)eventWithIdentifier:(id)a0;
- (id)predicateForRemindersInCalendars:(id)a0 preloadProperties:(id)a1;
- (id)doEvents:(id)a0 haveOccurrencesAfterDate:(id)a1;
- (id)predicateForPreloadedIncompleteRemindersWithDueDate:(id)a0 calendars:(id)a1 sortOrder:(int)a2 preloadProperties:(id)a3;
- (id)calendarWithExternalID:(id)a0;
- (id)predicateForPreloadedIncompleteRemindersWithDueDate:(id)a0 calendars:(id)a1 sortOrder:(int)a2 preloadProperties:(id)a3 maxResults:(unsigned long long)a4;
- (id)eventWithUUID:(id)a0;
- (id)predicateForPreloadedCompletedRemindersWithDueDate:(id)a0 calendars:(id)a1 sortOrder:(int)a2 preloadProperties:(id)a3;
- (id)calendarWithExternalURI:(id)a0;
- (id)defaultCalendarForNewReminders;
- (long long)countOfRemindersWithContactIdentifier:(id)a0;
- (id)remindersWithContactIdentifier:(id)a0;
- (BOOL)occurrenceCacheOccurrencesAreBeingGenerated;
- (id)occurrenceCacheGetOccurrencesForCalendars:(id)a0 onDay:(double)a1;
- (id)occurrenceCacheGetOccurrencesForCalendars:(id)a0;
- (void)rebuildOccurrenceCache;
- (id)scheduledTaskCacheFetchDaysAndTaskCounts;
- (id)scheduledTaskCacheFetchTasksOnDay:(id)a0;
- (void)insertSuggestedEventCalendar;
- (void)removeSuggestedEventCalendar;
- (void)acceptSuggestedEvent:(id)a0;
- (void)deleteSuggestedEvent:(id)a0;
- (BOOL)saveNotification:(id)a0 commit:(BOOL)a1 error:(id *)a2;
- (BOOL)markResourceChangeAlertedAndSave:(id)a0 error:(id *)a1;
- (BOOL)saveNotificationCollection:(id)a0 commit:(BOOL)a1 error:(id *)a2;
- (void)respondToSharedCalendarInvitation:(id)a0 withStatus:(unsigned long long)a1;
- (BOOL)removeResourceChange:(id)a0 error:(id *)a1;
- (void)acceptAlternateTimeProposalNotification:(id)a0 forAttendee:(id)a1 commit:(BOOL)a2 error:(id *)a3;
- (BOOL)acknowledgeNotifications:(id)a0 error:(id *)a1;
- (id)calendarWithID:(id)a0;
- (void)declineAlternateTimeProposalNotification:(id)a0 forAttendee:(id)a1 commit:(BOOL)a2 error:(id *)a3;
- (BOOL)removeResourceChangesForCalendarItem:(id)a0 error:(id *)a1;
- (unsigned long long)eventNotificationCountForSource:(id)a0 excludingDelegateSources:(BOOL)a1 filteredByShowsNotificationsFlag:(BOOL)a2 excludeRowIDs:(id)a3;
- (BOOL)saveReminder:(id)a0 error:(id *)a1;
- (void)refreshSourcesIfNecessary;
- (BOOL)refreshSource:(id)a0 userRequested:(BOOL)a1;
- (void)_reregisterObject:(id)a0 oldID:(id)a1;
- (BOOL)occurrencesExistInRangeForEvent:(id)a0 startDate:(id)a1 endDate:(id)a2 mustStartInInterval:(BOOL)a3 timezone:(id)a4;
- (void)_setNeedsCommitForRemoteChanges;
- (BOOL)commitObjects:(id)a0 error:(id *)a1;
- (id)eventObjectIDsMatchingPredicate:(id)a0;
- (void)cancelFetchRequest:(id)a0;
- (Class)_SGSuggestionsServiceClass;
- (id)fetchObjectsMatchingPredicate:(id)a0 completion:(id /* block */)a1;
- (void)fetchEventCountsInRange:(id)a0 inCalendars:(id)a1 exclusionOptions:(long long)a2 completion:(id /* block */)a3;
- (void)alarmOccurrencesBetweenStartDate:(id)a0 endDate:(id)a1 inCalendars:(id)a2 completion:(id /* block */)a3;
- (void)locationBasedAlarmOccurrencesWithCompletion:(id /* block */)a0;
- (void)vehicleTriggerAlarmOccurrencesWithCompletion:(id /* block */)a0;
- (id)predicateForNotificationCenterVisibleEvents;
- (void)clearSuperfluousChanges;
- (id)predicateForCompletedRemindersWithCompletionDateStarting:(id)a0 ending:(id)a1 calendars:(id)a2;
- (id)predicateForEventsWithStartDate:(id)a0 endDate:(id)a1 calendarIdentifiers:(id)a2 exclusionOptions:(long long)a3;
- (id)predicateForNotifiableEvents;
- (id)publicObjectWithObjectID:(id)a0;
- (id)predicateForAssistantEventSearchWithTimeZone:(id)a0 startDate:(id)a1 endDate:(id)a2 title:(id)a3 location:(id)a4 notes:(id)a5 participants:(id)a6 calendars:(id)a7 limit:(long long)a8;
- (id)predicateForUnacknowledgedEvents;
- (id)predicateForUnalertedEvents;
- (id)predicateForUpcomingEventsWithLimit:(int)a0;
- (id)fetchStorageUsage;
- (id)predicateForMasterEventsInCalendars:(id)a0;
- (BOOL)hasImmediatelyEligibleTravelEvents;
- (id)predicateForEventsCreatedFromSuggestion;
- (id)predicateForUpNextEventsInCalendars:(id)a0 startDate:(id)a1 endDate:(id)a2 startDateRestrictionThreshold:(double)a3;
- (unsigned long long)addressValidationStatus:(id)a0;
- (id)predicateForEventsWithStartDate:(id)a0 title:(id)a1 source:(id)a2;
- (id)predicateForNaturalLanguageSuggestedEventsWithSearchString:(id)a0;
- (id)predicateForEventCreatedFromSuggestionWithOpaqueKey:(id)a0;
- (id)predicateForMasterEventsWithExternalTrackingStatusInCalendar:(id)a0;
- (id)predicateForEventsCreatedFromSuggestionWithExtractionGroupIdentifier:(id)a0;
- (id)predicateForCalendarItemsOfType:(unsigned long long)a0 inCalendar:(id)a1;
- (id)predicateForEventsWithStartDate:(id)a0 endDate:(id)a1 calendars:(id)a2 matchingContacts:(id)a3;
- (BOOL)markIndividualChangesConsumed:(id)a0 error:(id *)a1;
- (id)predicateForCalendarItemsOfType:(unsigned long long)a0 withUniqueIdentifier:(id)a1 inCalendar:(id)a2;
- (void)cacheValidationStatusForAddress:(id)a0 status:(unsigned long long)a1;
- (id)calendarWithIdentifier:(id)a0;
- (id)predicateForCalendarItemsOfType:(unsigned long long)a0 withUniqueIdentifier:(id)a1 inSource:(id)a2;
- (void)pushSpotlightUpdatesForCalendarItemUUIDs:(id)a0;
- (id)predicateForCalendarItemsOfType:(unsigned long long)a0 withExternalID:(id)a1 inCalendar:(id)a2;
- (id)predicateForCalendarItemsOfType:(unsigned long long)a0 withExternalID:(id)a1 inSource:(id)a2;
- (id)predicateForMasterEventsWithStartDate:(id)a0 title:(id)a1 inCalendar:(id)a2;
- (void)setCachedEKSourceConstraintObject:(id)a0 forKey:(id)a1;
- (id)predicateForMasterEventsWithOccurrencesWithStartDate:(id)a0 endDate:(id)a1 inCalendar:(id)a2;
- (unsigned long long)timeToLeaveLocationAuthorizationStatus;
- (id)predicateForMasterEventsWithInvitationsAndOccurrencesAfter:(id)a0 inCalendar:(id)a1;
- (void)unregisterForDetailedChangeTracking:(id *)a0;
- (id)predicateForNonrecurringEventsWithStartDate:(id)a0 endDate:(id)a1 calendars:(id)a2;
- (id)notificationCollectionForSource:(id)a0;
- (id)predicateForIncompleteRemindersAndRemindersCompletedAfter:(id)a0 inCalendar:(id)a1;
- (void)changedObjectIDsSinceToken:(long long)a0 resultHandler:(id /* block */)a1;
- (void)postSyntheticRouteHypothesis:(id)a0 forEventWithExternalURL:(id)a1;
- (void)endCalDAVServerSimulation:(id)a0;
- (id)importICSData:(id)a0 intoCalendars:(id)a1 options:(unsigned long long)a2;
- (id)eventsWithExternalIdentifier:(id)a0 inCalendars:(id)a1;
- (id)predicateForRemindersInCalendars:(id)a0;
- (id)eventSources;
- (BOOL)returnEventResults;
- (id)reminderSources;
- (BOOL)returnReminderResults;
- (void)performHoldingReminderSourceMapLock:(id /* block */)a0;
- (id)_combineEventSources:(id)a0 withReminderSources:(id)a1;
- (void)_rebuildSourceMapsWithEventSources:(id)a0 reminderSources:(id)a1;
- (id)reminderSourceMap;
- (id)eventSourceMap;
- (id)combinedReminderAndEventSources;
- (void)getMapsWithReminderSourceMap:(id *)a0 eventSourceMap:(id *)a1;
- (void)initializeEKEventStorePlusReminders;
- (id)eventSourceForReminderSource:(id)a0;
- (id)combineEventCalendars:(id)a0 withReminderCalendars:(id)a1;
- (void)invalidateReminderSourceMaps;
- (id)initWithBirthdayCalendarModifications;
- (BOOL)removeCalendar:(id)a0 commit:(BOOL)a1 error:(id *)a2;
- (id)localBirthdayCalendarCreateIfNeededWithError:(id *)a0;
- (BOOL)saveCalendar:(id)a0 commit:(BOOL)a1 error:(id *)a2;
- (id)initWithEKOptions:(unsigned long long)a0;
- (id)predicateForMasterEventsInCalendar:(id)a0;
- (BOOL)removeEvent:(id)a0 span:(long long)a1 commit:(BOOL)a2 error:(id *)a3;
- (void)enumerateEventsMatchingPredicate:(id)a0 usingBlock:(id /* block */)a1;
- (void)_registerObject:(id)a0;
- (BOOL)removeInviteReplyNotification:(id)a0 error:(id *)a1;
- (id)registerFetchedObjectWithID:(id)a0 withDefaultLoadedPropertyKeys:(id)a1 values:(id)a2;
- (id)eventNotificationsFilteredByShowsNotificationsFlag:(BOOL)a0 earliestExpiringNotification:(id *)a1;
- (id)beginCalDAVServerSimulationWithHostname:(id)a0;
- (void)_trackModifiedObject:(id)a0;
- (long long)registerForDetailedChangeTracking:(id *)a0;
- (void)markChangedObjectIDsConsumedUpToToken:(long long)a0;
- (void)fetchChangedObjectIDsSinceToken:(long long)a0 resultHandler:(id /* block */)a1;
- (BOOL)commit:(id *)a0;
- (id)readWriteCalendarsForEntityType:(unsigned long long)a0;
- (id)predicateForIncompleteRemindersWithDueDateStarting:(id)a0 ending:(id)a1 calendars:(id)a2;
- (id)eventSourceIDForReminderSourceID:(id)a0;
- (id)predicateForEventsWithStartDate:(id)a0 endDate:(id)a1 calendars:(id)a2 loadDefaultProperties:(BOOL)a3;
- (id)eventsMatchingPredicate:(id)a0;
- (id)objectsMatchingPredicate:(id)a0;
- (id)registerFetchedObjectWithID:(id)a0;
- (BOOL)removeCalendar:(id)a0 error:(id *)a1;
- (id)cachedConstraintsForSourceWithObjectID:(id)a0;
- (id)publicObjectWithPersistentObject:(id)a0;
- (BOOL)objectWithIDExists:(id)a0;
- (void)_insertObject:(id)a0;
- (BOOL)canModifySuggestedEventCalendar;
- (id)sourceWithIdentifier:(id)a0;
- (BOOL)removeReminder:(id)a0 error:(id *)a1;
- (void)_deleteObject:(id)a0;
- (void)daemonRestarted;
- (BOOL)isSourceManaged:(id)a0;
- (BOOL)saveCalendar:(id)a0 error:(id *)a1;
- (BOOL)canModifyCalendarDatabase;
- (void)reminderStoreChanged;
- (id)reminderSourceForEventSource:(id)a0;
- (id)eventWithUUID:(id)a0 occurrenceDate:(id)a1;
- (id)fetchRemindersMatchingPredicate:(id)a0 completion:(id /* block */)a1;
- (id)calendarsForEntityType:(unsigned long long)a0;
- (id)_allCalendars;
- (id)objectWithObjectID:(id)a0;
- (id)cachedConstraintsForSource:(id)a0;
- (id)remindersMatchingPredicate:(id)a0;
- (id)initWithOptions:(int)a0 path:(id)a1;
- (id)initWithOptions:(int)a0 path:(id)a1 allowDelegateSources:(BOOL)a2;
- (void)_accessStatusChanged;

@end
