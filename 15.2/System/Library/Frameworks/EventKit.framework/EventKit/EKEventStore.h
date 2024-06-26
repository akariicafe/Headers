@class NSMutableDictionary, EKDaemonConnection, NSDictionary, NSObject, EKCalendar, NSTimeZone, EKAlarm, CADGenerationStampedObjectID, NSMutableArray, NSString, EKReminderStore, NSHashTable, NSSet, NSMutableSet, EKDataProtectionObserver, NSArray, CADDatabaseInitializationOptions, NSNumber;
@protocol OS_dispatch_queue;

@interface EKEventStore : NSObject <EKDaemonConnectionDelegate> {
    CADDatabaseInitializationOptions *_initializationOptions;
    CADGenerationStampedObjectID *_birthdaySourceID;
    NSMutableDictionary *_defaultCalendarsForNewEventsIDBySourceID;
    CADGenerationStampedObjectID *_suggestedEventCalendarID;
    CADGenerationStampedObjectID *_naturalLanguageSuggestedEventCalendarID;
    CADGenerationStampedObjectID *_subscribedCalendarsSourceID;
    NSMutableDictionary *_calendars;
    NSMutableDictionary *_sources;
    NSMutableDictionary *_calendarsByIdentifier;
    NSMutableDictionary *_cachedValidatedAddresses;
    NSMutableArray *_objectsPendingCommit;
    NSHashTable *_eventsNeedsGeocoding;
    NSNumber *_defaultTimedAlarmOffset;
    NSNumber *_defaultAllDayAlarmOffset;
    BOOL _allowsBirthdayCalendarModifications;
    BOOL _hasAccessToEvents;
    BOOL _hasAccessToReminders;
    BOOL _accessDetermined;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _reminderSourceMapLock;
    BOOL _isIgnoringExternalChanges;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _flagsLock;
    struct { unsigned char restoreGenerationChanged : 1; unsigned char fetchingSharedCalendarInvitationsDisallowed : 1; } _flags;
}

@property (class, copy) id /* block */ reminderStoreContainerTokenProvider;
@property (class, readonly, nonatomic) NSString *eventStoreChangedDistributedNotificationName;

@property (retain, nonatomic) NSHashTable *insertedObjects;
@property (retain, nonatomic) NSMutableSet *deletedObjects;
@property (retain, nonatomic) NSMutableSet *updatedObjects;
@property (retain, nonatomic) NSMutableSet *objectsPendingSave;
@property (retain, nonatomic) NSMutableSet *objectIDsNotSendingNotifications;
@property (nonatomic) BOOL needsCommitForRemoteChanges;
@property (retain, nonatomic) EKDaemonConnection *database;
@property (nonatomic) unsigned long long lastDatabaseNotificationTimestamp;
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
@property (readonly, nonatomic) NSArray *objectsPendingCommit;
@property (readonly, nonatomic) NSSet *deletedObjectIDsPendingCommit;
@property (retain, nonatomic) EKCalendar *defaultCalendarForNewEvents;
@property (readonly, nonatomic) NSArray *inboxRepliedSectionItems;
@property (readonly, nonatomic) BOOL inboxRepliedSectionHasContent;
@property (readonly, nonatomic) EKCalendar *suggestedEventCalendar;
@property (readonly, nonatomic) EKCalendar *naturalLanguageSuggestedEventCalendar;
@property (readonly, nonatomic) EKCalendar *defaultCalendarForNewReminders;
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

+ (id)_filteredObjectsWithIdentifiers:(id)a0 fromObjects:(id)a1;
+ (int)calDatabaseInitOptionsFromEKEventStoreInitOptions:(unsigned long long)a0;
+ (void)setDenyAccessToEvents:(BOOL)a0;
+ (void)_refreshFolderListForSource:(id)a0 isUserRequested:(BOOL)a1;
+ (Class)classForEntityName:(id)a0;
+ (void)setDenyAccessToReminders:(BOOL)a0;
+ (id)_filteredArrayWithIdentifiers:(id)a0 fromObjects:(id)a1;
+ (BOOL)_isConfirmedSuggestedEvent:(id)a0 uniqueKey:(id *)a1;
+ (BOOL)accessGrantedForEntityType:(unsigned long long)a0;
+ (BOOL)_shouldRefreshSource:(id)a0;
+ (BOOL)_skipTCCAccessCheck;
+ (id)_iMIPScheduledEvent:(id)a0 attendeesDeleted:(BOOL)a1;
+ (void)_addDaysSpannedByEvent:(id)a0 toCountedSet:(id)a1 inRange:(id)a2 withNSCalendar:(id)a3;
+ (unsigned long long)ekEventStoreInitOptionsFromCalDatabaseInitOptions:(int)a0;
+ (long long)authorizationStatusForEntityType:(unsigned long long)a0;

- (void)rollback;
- (int)sequenceNumber;
- (id)attachmentWithUUID:(id)a0;
- (BOOL)saveAttachment:(id)a0 commit:(BOOL)a1 error:(id *)a2;
- (void)refreshSourcesIfNecessary;
- (BOOL)refreshSource:(id)a0 userRequested:(BOOL)a1;
- (void)_reregisterObject:(id)a0 oldID:(id)a1;
- (void)_setNeedsCommitForRemoteChanges;
- (BOOL)commitObjects:(id)a0 error:(id *)a1;
- (id)eventObjectIDsMatchingPredicate:(id)a0;
- (id)fetchObjectsMatchingPredicate:(id)a0 completion:(id /* block */)a1;
- (void)fetchEventCountsInRange:(id)a0 inCalendars:(id)a1 exclusionOptions:(long long)a2 completion:(id /* block */)a3;
- (void)cancelFetchRequest:(id)a0;
- (id)nextEventWithCalendarIdentifiers:(id)a0 exclusionOptions:(long long)a1;
- (id)alarmWithExternalID:(id)a0;
- (void)alarmOccurrencesBetweenStartDate:(id)a0 endDate:(id)a1 inCalendars:(id)a2 completion:(id /* block */)a3;
- (void)purgeChangelog;
- (id)importICSData:(id)a0 intoCalendar:(id)a1 options:(unsigned long long)a2;
- (id)importICSData:(id)a0 intoCalendars:(id)a1 options:(unsigned long long)a2;
- (id)eventsWithExternalIdentifier:(id)a0 inCalendars:(id)a1;
- (void)locationBasedAlarmOccurrencesWithCompletion:(id /* block */)a0;
- (void)vehicleTriggerAlarmOccurrencesWithCompletion:(id /* block */)a0;
- (id)predicateForEventsWithStartDate:(id)a0 endDate:(id)a1 uniqueID:(id)a2 calendars:(id)a3;
- (id)fetchStorageUsage;
- (id)predicateForAssistantEventSearchWithTimeZone:(id)a0 startDate:(id)a1 endDate:(id)a2 title:(id)a3 location:(id)a4 notes:(id)a5 participants:(id)a6 calendars:(id)a7 limit:(long long)a8;
- (id)predicateForNotifiableEvents;
- (id)predicateForUnalertedEvents;
- (id)predicateForNotificationCenterVisibleEvents;
- (id)predicateForUnacknowledgedEvents;
- (id)predicateForUpcomingEventsWithLimit:(int)a0;
- (id)predicateForMasterEventsInCalendars:(id)a0;
- (id)eventWithUniqueId:(id)a0;
- (BOOL)hasImmediatelyEligibleTravelEvents;
- (id)predicateForUpNextEventsInCalendars:(id)a0 startDate:(id)a1 endDate:(id)a2 startDateRestrictionThreshold:(double)a3;
- (id)predicateForEventsWithStartDate:(id)a0 title:(id)a1 source:(id)a2;
- (id)predicateForNaturalLanguageSuggestedEventsWithSearchString:(id)a0;
- (id)eventsMatchingPredicate:(id)a0;
- (id)predicateForNaturalLanguageSuggestedEventsWithSearchString:(id)a0 startDate:(id)a1;
- (id)predicateForEventsCreatedFromSuggestion;
- (id)predicateForEventCreatedFromSuggestionWithOpaqueKey:(id)a0;
- (id)predicateForEventsCreatedFromSuggestionWithExtractionGroupIdentifier:(id)a0;
- (id)predicateForEventsWithStartDate:(id)a0 endDate:(id)a1 calendars:(id)a2 matchingContacts:(id)a3;
- (void)waitForSpotlightUpdates;
- (id)predicateForCalendarItemsOfType:(unsigned long long)a0 inCalendar:(id)a1;
- (id)predicateForMasterEventsWithExternalTrackingStatusInCalendar:(id)a0;
- (id)predicateForCalendarItemsOfType:(unsigned long long)a0 withUniqueIdentifier:(id)a1 inCalendar:(id)a2;
- (id)predicateForCalendarItemsOfType:(unsigned long long)a0 withUniqueIdentifier:(id)a1 inSource:(id)a2;
- (id)predicateForCalendarItemsOfType:(unsigned long long)a0 withExternalID:(id)a1 inCalendar:(id)a2;
- (id)predicateForEventsWithConferenceURL:(id)a0 limit:(long long)a1;
- (id)predicateForCalendarItemsOfType:(unsigned long long)a0 withExternalID:(id)a1 inSource:(id)a2;
- (id)predicateForMasterEventsWithStartDate:(id)a0 title:(id)a1 inCalendar:(id)a2;
- (void)unregisterForDetailedChangeTracking:(id *)a0;
- (void)clearSuperfluousChanges;
- (id)predicateForMasterEventsWithOccurrencesWithStartDate:(id)a0 endDate:(id)a1 inCalendar:(id)a2;
- (id)predicateForMasterEventsWithInvitationsAndOccurrencesAfter:(id)a0 inCalendar:(id)a1;
- (unsigned long long)addressValidationStatus:(id)a0;
- (id)eventWithIdentifier:(id)a0;
- (id)predicateForNonrecurringEventsWithStartDate:(id)a0 endDate:(id)a1 calendars:(id)a2;
- (id)predicateForIncompleteRemindersAndRemindersCompletedAfter:(id)a0 inCalendar:(id)a1;
- (unsigned long long)timeToLeaveLocationAuthorizationStatus;
- (id)calendarsForEntityType:(unsigned long long)a0;
- (void)changedObjectIDsSinceToken:(long long)a0 resultHandler:(id /* block */)a1;
- (BOOL)markIndividualChangesConsumed:(id)a0 error:(id *)a1;
- (void)cacheValidationStatusForAddress:(id)a0 status:(unsigned long long)a1;
- (void)pushSpotlightUpdatesForCalendarItemUUIDs:(id)a0;
- (id)calendarWithIdentifier:(id)a0;
- (id)eventSourceIDForReminderSourceID:(id)a0;
- (id)notificationCollectionForSource:(id)a0;
- (void)setCachedEKSourceConstraintObject:(id)a0 forKey:(id)a1;
- (void)postSyntheticRouteHypothesis:(id)a0 forEventWithExternalURL:(id)a1;
- (void)endCalDAVServerSimulation:(id)a0;
- (BOOL)backupDatabaseToDestination:(id)a0 withFormat:(unsigned long long)a1 error:(id *)a2;
- (BOOL)restoreDatabaseFromBackup:(id)a0 withFormat:(unsigned long long)a1 error:(id *)a2;
- (void)setDefaultCalendarForNewReminders:(id)a0;
- (id)eventSources;
- (id)reminderSources;
- (BOOL)shouldPermitOrganizerEmailFromJunkChecks:(id)a0;
- (BOOL)shouldPermitOrganizerPhoneNumberFromJunkChecks:(id)a0;
- (BOOL)returnEventResults;
- (BOOL)returnReminderResults;
- (id)_combineEventSources:(id)a0 withReminderSources:(id)a1;
- (void)performHoldingReminderSourceMapLock:(id /* block */)a0;
- (void)_rebuildSourceMapsWithEventSources:(id)a0 reminderSources:(id)a1;
- (id)reminderSourceMap;
- (id)eventSourceMap;
- (BOOL)canModifySuggestedEventCalendar;
- (id)objectsMatchingPredicate:(id)a0;
- (void)getMapsWithReminderSourceMap:(id *)a0 eventSourceMap:(id *)a1;
- (void)initializeEKEventStorePlusReminders;
- (id)combinedReminderAndEventSources;
- (id)combineEventCalendars:(id)a0 withReminderCalendars:(id)a1;
- (id)eventSourceForReminderSource:(id)a0;
- (void)invalidateReminderSourceMaps;
- (id)initWithBirthdayCalendarModifications;
- (BOOL)removeCalendar:(id)a0 commit:(BOOL)a1 error:(id *)a2;
- (id)localBirthdayCalendarCreateIfNeededWithError:(id *)a0;
- (BOOL)saveCalendar:(id)a0 commit:(BOOL)a1 error:(id *)a2;
- (id)predicateForMasterEventsInCalendar:(id)a0;
- (BOOL)removeEvent:(id)a0 span:(long long)a1 commit:(BOOL)a2 error:(id *)a3;
- (void)enumerateEventsMatchingPredicate:(id)a0 usingBlock:(id /* block */)a1;
- (id)refreshEverythingIfNecessary:(BOOL)a0;
- (id)initWithEKOptions:(unsigned long long)a0;
- (id)cachedConstraintsForSourceWithCADObjectID:(id)a0;
- (id)registerFetchedObjectWithID:(id)a0;
- (id)predicateForRemindersInCalendars:(id)a0;
- (BOOL)saveCalendar:(id)a0 error:(id *)a1;
- (id)publicObjectWithPersistentObject:(id)a0;
- (id)remindersMatchingPredicate:(id)a0;
- (void)_registerObject:(id)a0;
- (BOOL)removeInviteReplyNotification:(id)a0 error:(id *)a1;
- (id)eventWithUUID:(id)a0 occurrenceDate:(id)a1;
- (id)contactIdentifierForCalendarItem:(id)a0;
- (void)addContactIdentifier:(id)a0 forCalendarItem:(id)a1;
- (void)removeContactIdentifier:(id)a0 forCalendarItem:(id)a1;
- (BOOL)isSourceManaged:(id)a0;
- (BOOL)objectWithIDExists:(id)a0;
- (void)_addObjectToPendingCommits:(id)a0;
- (id)registerFetchedObjectWithID:(id)a0 withDefaultLoadedPropertyKeys:(id)a1 values:(id)a2;
- (id)eventNotificationsFilteredByShowsNotificationsFlag:(BOOL)a0 earliestExpiringNotification:(id *)a1;
- (void)_insertObject:(id)a0;
- (BOOL)save:(id *)a0;
- (void)_deleteObject:(id)a0;
- (BOOL)removeReminder:(id)a0 error:(id *)a1;
- (id)reminderWithUniqueId:(id)a0;
- (id)predicateForIncompleteRemindersWithDueDateStarting:(id)a0 ending:(id)a1 calendars:(id)a2;
- (BOOL)accessGrantedForEntityType:(unsigned long long)a0;
- (id)beginCalDAVServerSimulationWithHostname:(id)a0;
- (BOOL)commit:(id *)a0;
- (id)_allCalendars;
- (void).cxx_destruct;
- (BOOL)saveEvent:(id)a0 span:(long long)a1 commit:(BOOL)a2 error:(id *)a3;
- (void)_trackModifiedObject:(id)a0;
- (void)_objectDidReset:(id)a0;
- (id)init;
- (id)localSource;
- (id)eventForUID:(id)a0 occurrenceDate:(id)a1 checkValid:(BOOL)a2;
- (id)initWithOptions:(int)a0 path:(id)a1;
- (void)_accessStatusChanged;
- (id)initWithOptions:(int)a0 path:(id)a1 allowDelegateSources:(BOOL)a2;
- (id)initWithEKOptions:(unsigned long long)a0 path:(id)a1 changeTrackingClientId:(id)a2 enablePropertyModificationLogging:(BOOL)a3 allowDelegateSources:(BOOL)a4;
- (void)_unregisterObject:(id)a0;
- (void)_requestAccessForEntityType:(unsigned long long)a0;
- (void)requestAccessToEntityType:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)setSourceAccountManagement:(int)a0 withBundleID:(id)a1;
- (void)_handleExternalDatabaseChangeNotification:(id)a0 synchronously:(BOOL)a1;
- (void)_databaseChangedExternally:(unsigned long long)a0 processSynchronously:(BOOL)a1;
- (void)_defaultCalendarChangedExternally;
- (void)_defaultAlarmChangedExternally;
- (BOOL)setRestoreGenerationChangedAndGetPreviousValue:(BOOL)a0;
- (void)_postEventStoreChangedNotificationWithChangeType:(unsigned long long)a0 changedObjectIDs:(id)a1;
- (void)_resetAndNotifyAfterDatabaseRestoreGenerationChanged;
- (void)_removeCachedCalendarWithCADID:(id)a0;
- (void)_clearCachedSources;
- (void)_clearCachedConstraintsForSourceWithCADObjectID:(id)a0;
- (void)_detachObject:(id)a0;
- (void)_clearCachedCalendars;
- (void)_cacheCalendarWithCADObjectID:(id)a0 withDefaultLoadedPropertyValues:(id)a1 forKeys:(id)a2;
- (id)_sourceWithID:(id)a0;
- (void)_validateCADObjectIDs:(id)a0 completion:(id /* block */)a1;
- (id)_modifiedObjectIdentifiersForChangedObjectIDs:(id)a0;
- (void)setRestoreGenerationChanged:(BOOL)a0;
- (void)_loadSourcesIfNeeded;
- (void)_cacheSourceWithCADObjectID:(id)a0 withDefaultLoadedPropertyValues:(id)a1 forKeys:(id)a2;
- (id)publicObjectWithFetchedObjectID:(id)a0;
- (void)_clearAllCaches;
- (id)_localSourceWithEnableIfNeeded:(BOOL)a0;
- (void)_loadCalendarsIfNeeded;
- (BOOL)canModifyCalendarDatabase;
- (BOOL)_calendar:(id)a0 supportsEntityType:(unsigned long long)a1;
- (BOOL)shouldSaveCalendarAsEventCalendar:(id)a0;
- (BOOL)_saveCalendar:(id)a0 commit:(BOOL)a1 error:(id *)a2;
- (BOOL)shouldSaveCalendarAsReminderCalendar:(id)a0;
- (BOOL)needsGeocodingForEvent:(id)a0;
- (void)setNeedsGeocoding:(BOOL)a0 forEvent:(id)a1;
- (void)daemonRestarted;
- (id)predicateForCompletedRemindersWithCompletionDateStarting:(id)a0 ending:(id)a1 calendars:(id)a2;
- (BOOL)_removeCalendar:(id)a0 commit:(BOOL)a1 error:(id *)a2;
- (id)calendarItemWithIdentifier:(id)a0;
- (id)_eventWithEventIdentifier:(id)a0;
- (id)_eventWithRecurrenceIdentifier:(id)a0;
- (id)validatedNonDeletedPersistentObjectWithObjectID:(id)a0;
- (id)validatedNonDeletedPublicObjectWithObjectID:(id)a0;
- (id)_eventWithURI:(id)a0 checkValid:(BOOL)a1;
- (BOOL)_parseURI:(id)a0 expectedScheme:(id)a1 identifier:(id *)a2 options:(id *)a3;
- (id)closestCachedOccurrenceToDate:(double)a0 forEventUID:(int)a1;
- (id)eventWithUniqueId:(id)a0 occurrenceDate:(id)a1;
- (BOOL)_saveEvent:(id)a0 span:(long long)a1 commit:(BOOL)a2 error:(id *)a3;
- (BOOL)_isRegisteredObject:(id)a0;
- (BOOL)_removeEvent:(id)a0 span:(long long)a1 commit:(BOOL)a2 error:(id *)a3;
- (BOOL)saveReminder:(id)a0 commit:(BOOL)a1 error:(id *)a2;
- (BOOL)setInvitationStatus:(unsigned long long)a0 forEvents:(id)a1 error:(id *)a2;
- (id)_importEventsWithExternalIDs:(id)a0 fromICSData:(id)a1 intoCalendarsWithIDs:(id)a2 options:(unsigned long long)a3 batchSize:(int)a4;
- (id)ICSDataForCalendarItems:(id)a0 options:(unsigned long long)a1;
- (id)calendarWithCADID:(id)a0;
- (void)databaseRestoreGenerationChangedExternally:(int)a0;
- (id)defaultCalendarForNewEventsInDelegateSource:(id)a0;
- (void)setDefaultCalendar:(id)a0 forNewEventsInDelegateSource:(id)a1;
- (BOOL)removeReminder:(id)a0 commit:(BOOL)a1 error:(id *)a2;
- (id)_calendarItemsMatchingPredicate:(id)a0;
- (id)calendarItemsWithExternalIdentifier:(id)a0 inCalendars:(id)a1;
- (id)_calendarItemsWithExternalIdentifier:(id)a0 inCalendars:(id)a1 entityTypes:(unsigned long long)a2;
- (void)_validateReminderPredicate:(id)a0;
- (BOOL)saveEvent:(id)a0 span:(long long)a1 error:(id *)a2;
- (BOOL)_isEventNotSendingNotification:(id)a0;
- (void)_setEvent:(id)a0 isNotSendingNotification:(BOOL)a1;
- (id)_predicateForRemindersWithDate:(id)a0 useAsCompletionDate:(BOOL)a1 calendars:(id)a2 limitToCompletedOrIncomplete:(BOOL)a3 completed:(BOOL)a4 includeDatesBefore:(BOOL)a5 sortOrder:(int)a6 preloadProperties:(id)a7 maxResults:(unsigned long long)a8;
- (id)_predicateForRemindersWithDate:(id)a0 useAsCompletionDate:(BOOL)a1 calendars:(id)a2 limitToCompletedOrIncomplete:(BOOL)a3 completed:(BOOL)a4 includeDatesBefore:(BOOL)a5 sortOrder:(int)a6 preloadProperties:(id)a7;
- (void)confirmSuggestedEvent:(id)a0;
- (id)predicateForRemindersWithTitle:(id)a0 listTitle:(id)a1 limitToCompletedOrIncomplete:(BOOL)a2 completed:(BOOL)a3 dueAfter:(id)a4 dueBefore:(id)a5 searchTerm:(id)a6 sortOrder:(int)a7 maxResults:(unsigned long long)a8;
- (id)sharedCalendarInvitationsForEntityTypes:(unsigned long long)a0;
- (id)closestCachedOccurrenceToDate:(double)a0 forEventUID:(int)a1 prefersForwardSearch:(BOOL)a2;
- (void)_populateCalendarsByIdentifierIfNeeded;
- (id)_eventCalendarWithIdentifier:(id)a0;
- (BOOL)removeEvent:(id)a0 span:(long long)a1 error:(id *)a2;
- (BOOL)_isUnitTesting;
- (id)scheduledTaskCacheFetchTasksOnDay:(id)a0 maxResults:(unsigned long long)a1;
- (BOOL)fetchingSharedCalendarInvitationsDisallowed;
- (BOOL)removeResourceChanges:(id)a0 error:(id *)a1;
- (void)setFetchingSharedCalendarInvitationsDisallowed:(BOOL)a0;
- (id)resourceChangesForEntityTypes:(unsigned long long)a0;
- (id)eventNotificationsAfterDate:(id)a0;
- (BOOL)removeInviteReplyNotifications:(id)a0 error:(id *)a1;
- (id)refreshSourcesIfNecessary:(BOOL)a0;
- (id)eventNotificationsAfterDate:(id)a0 filteredByShowsNotificationsFlag:(BOOL)a1 earliestExpiringNotification:(id *)a2;
- (BOOL)_refreshDASource:(id)a0 isUserRequested:(BOOL)a1;
- (id)refreshFolderListsIfNecessary:(BOOL)a0;
- (id)eventWithUUID:(id)a0;
- (id)readWriteCalendarsForEntityType:(unsigned long long)a0;
- (void)_registerObjectImmediate:(id)a0;
- (id)_addFetchedObjectWithID:(id)a0;
- (void)_forgetRegisteredObjects;
- (BOOL)_commitObjectsWithIdentifiers:(id)a0 error:(id *)a1;
- (id)_markObjectsWithIdentifiersAsCommitted:(id)a0;
- (void)_clearEventsNeedingGeocodingWithCommittedObjects:(id)a0;
- (void)_removeCachedCalendarFromSource:(id)a0;
- (void)_fetchAndClearEventsNeedingGeocoding:(id *)a0 withCommittedObjects:(id)a1;
- (void)_validateEventPredicate:(id)a0;
- (id)predicateForEventsWithStartDate:(id)a0 endDate:(id)a1 calendars:(id)a2 prefetchHint:(long long)a3 exclusionOptions:(long long)a4;
- (id)fetchEventsMatchingPredicate:(id)a0 resultHandler:(id /* block */)a1;
- (id)predicateForEventsWithStartDate:(id)a0 endDate:(id)a1 calendarIdentifiers:(id)a2 exclusionOptions:(long long)a3;
- (void)reminderStoreChanged;
- (id)_nextEventWithFetchBlock:(id /* block */)a0 steps:(id)a1;
- (id)predicateForEventsWithStartDate:(id)a0 endDate:(id)a1 calendarIdentifiers:(id)a2 prefetchHint:(long long)a3 exclusionOptions:(long long)a4;
- (id)travelEligibleEventsInCalendars:(id)a0 startDate:(id)a1 endDate:(id)a2;
- (id)predicateForPotentialTravelEventsInCalendars:(id)a0 startDate:(id)a1 endDate:(id)a2;
- (id)predicateForEventsWithStartDate:(id)a0 endDate:(id)a1 calendars:(id)a2;
- (id)reminderSourceForEventSource:(id)a0;
- (void)dealloc;
- (long long)registerForDetailedChangeTrackingInSource:(id)a0 error:(id *)a1;
- (void)_setIsUnitTesting:(BOOL)a0;
- (void)_processChangedObjectIDsWithToken:(long long)a0 errorCode:(int)a1 changesTruncated:(BOOL)a2 latestToken:(long long)a3 changeData:(id)a4 insertCount:(int)a5 updateCount:(int)a6 deleteCount:(int)a7 resultHandler:(id /* block */)a8;
- (id)calendarWithID:(id)a0;
- (id)sourceWithIdentifier:(id)a0;
- (BOOL)removeCalendar:(id)a0 error:(id *)a1;
- (BOOL)occurrencesExistInRangeForEvent:(id)a0 startDate:(id)a1 endDate:(id)a2 mustStartInInterval:(BOOL)a3 timezone:(id)a4;
- (Class)_SGSuggestionsServiceClass;
- (id)_fetchConstraintsForSourceWithCADObjectID:(id)a0;
- (void)reset;
- (long long)registerForDetailedChangeTracking:(id *)a0;
- (void)markChangedObjectIDsConsumedUpToToken:(long long)a0;
- (void)fetchChangedObjectIDsSinceToken:(long long)a0 resultHandler:(id /* block */)a1;
- (id)_fetchPersistentNotificationCollectionForSourceWithCADObjectID:(id)a0;
- (BOOL)restoreGenerationChanged;
- (BOOL)setFetchingSharedCalendarInvitationsDisallowedAndGetPreviousValue:(BOOL)a0;
- (id)initWithAccessToDelegateSources;
- (id)initWithOptions:(int)a0 path:(id)a1 changeTrackingClientId:(id)a2 enablePropertyModificationLogging:(BOOL)a3 allowDelegateSources:(BOOL)a4;
- (void)setSourceAccountManagement:(int)a0;
- (void)_setIsSpotlightTesting:(BOOL)a0;
- (void)_simulateDaemonCrashForUnitTests;
- (id)changesSinceSequenceNumber:(int)a0;
- (void)handleExternalDatabaseChangeNotification:(id)a0;
- (id)_deletableSources;
- (id)sourcesEnabledForEntityType:(unsigned long long)a0;
- (id)getSubscribedCalendarsSourceCreateIfNeededWithError:(id *)a0;
- (id)delegateSourcesForSource:(id)a0;
- (id)parentSourceForDelegateSource:(id)a0;
- (id)localSourceEnableIfNeeded;
- (void)fetchGrantedDelegatesForSource:(id)a0 results:(id /* block */)a1;
- (void)updateGrantedDelegate:(id)a0 action:(long long)a1 source:(id)a2 completion:(id /* block */)a3;
- (id)localSubscribedCalendarSource;
- (id)localBirthdayCalendarSource;
- (id)sourceWithExternalID:(id)a0;
- (id)predicateForEventsWithStartDate:(id)a0 endDate:(id)a1 calendars:(id)a2 loadDefaultProperties:(BOOL)a3;
- (id)fetchRemindersMatchingPredicate:(id)a0 completion:(id /* block */)a1;
- (BOOL)saveSource:(id)a0 commit:(BOOL)a1 error:(id *)a2;
- (BOOL)removeSource:(id)a0 commit:(BOOL)a1 error:(id *)a2;
- (BOOL)hideCalendarsFromNotificationCenter:(id)a0 error:(id *)a1;
- (id)_deletableCalendars;
- (int)readWriteCalendarCountForEntityType:(unsigned long long)a0;
- (id)defaultLocalCalendar;
- (BOOL)deleteCalendar:(id)a0 forEntityType:(unsigned long long)a1 error:(id *)a2;
- (id)eventsWithIdentifiers:(id)a0;
- (id)eventWithUniqueIdentifier:(id)a0;
- (id)eventWithExternalURI:(id)a0;
- (id)_eventOccurrenceWithURI:(id)a0;
- (id)eventForUID:(id)a0 occurrenceDate:(id)a1;
- (id)allEventsWithUniqueId:(id)a0 occurrenceDate:(id)a1;
- (BOOL)setInvitationStatus:(unsigned long long)a0 forEvent:(id)a1 error:(id *)a2;
- (id)importICS:(id)a0 intoCalendar:(id)a1 options:(unsigned long long)a2;
- (id)ICSDataForCalendarItems:(id)a0 preventLineFolding:(BOOL)a1;
- (id)calendarWithUniqueID:(id)a0;
- (id)importEventsWithExternalIDs:(id)a0 fromICSData:(id)a1 intoCalendars:(id)a2 options:(unsigned long long)a3 batchSize:(int)a4;
- (struct CGColor { } *)copyCGColorForNewCalendar;
- (id)acquireDefaultCalendarForNewEvents;
- (id)objectWithObjectID:(id)a0;
- (id)acquireDefaultCalendarForNewReminders;
- (BOOL)_removeReminder:(id)a0 commit:(BOOL)a1 error:(id *)a2;
- (id)reminderWithExternalURI:(id)a0;
- (id)calendarItemsWithUniqueIdentifier:(id)a0 inCalendar:(id)a1;
- (id)_remindersMatchingPredicate:(id)a0;
- (id)predicateForCalendarStoreForRemindersInCalendars:(id)a0;
- (id)calendarItemsWithExternalIdentifier:(id)a0;
- (id)remindersWithExternalIdentifier:(id)a0 inCalendars:(id)a1;
- (int)countOfRemindersMatchingPredicate:(id)a0;
- (id)reminderObjectIDsMatchingPredicate:(id)a0;
- (id)publicObjectWithObjectID:(id)a0;
- (id)predicateForRemindersInCalendars:(id)a0 preloadProperties:(id)a1;
- (id)predicateForPreloadedIncompleteRemindersWithDueDate:(id)a0 calendars:(id)a1 sortOrder:(int)a2 preloadProperties:(id)a3;
- (BOOL)fetchProperties:(id)a0 forReminders:(id)a1;
- (id)predicateForPreloadedIncompleteRemindersWithDueDate:(id)a0 calendars:(id)a1 sortOrder:(int)a2 preloadProperties:(id)a3 maxResults:(unsigned long long)a4;
- (id)calendarWithExternalID:(id)a0;
- (id)calendarWithExternalURI:(id)a0;
- (void)acceptSuggestedEvent:(id)a0;
- (id)predicateForPreloadedCompletedRemindersWithDueDate:(id)a0 calendars:(id)a1 sortOrder:(int)a2 preloadProperties:(id)a3;
- (long long)countOfRemindersWithContactIdentifier:(id)a0;
- (id)remindersWithContactIdentifier:(id)a0;
- (id)predicateForRemindersWithTitle:(id)a0 listTitle:(id)a1 limitToCompletedOrIncomplete:(BOOL)a2 completed:(BOOL)a3 dueAfter:(id)a4 dueBefore:(id)a5 searchTerm:(id)a6 sortOrder:(int)a7;
- (id)doEvents:(id)a0 haveOccurrencesAfterDate:(id)a1;
- (BOOL)occurrenceCacheOccurrencesAreBeingGenerated;
- (id)occurrenceCacheGetOccurrencesForCalendars:(id)a0 onDay:(double)a1;
- (id)occurrenceCacheGetOccurrencesForCalendars:(id)a0;
- (id)scheduledTaskCacheFetchTasksOnDay:(id)a0;
- (id)scheduledTaskCacheFetchDaysAndTaskCounts;
- (void)rebuildOccurrenceCache;
- (void)insertSuggestedEventCalendar;
- (void)removeSuggestedEventCalendar;
- (void)deleteSuggestedEvent:(id)a0;
- (BOOL)saveNotification:(id)a0 commit:(BOOL)a1 error:(id *)a2;
- (BOOL)saveNotificationCollection:(id)a0 commit:(BOOL)a1 error:(id *)a2;
- (id)cachedConstraintsForSource:(id)a0;
- (void)respondToSharedCalendarInvitation:(id)a0 withStatus:(unsigned long long)a1;
- (BOOL)markResourceChangeAlertedAndSave:(id)a0 error:(id *)a1;
- (BOOL)removeResourceChange:(id)a0 error:(id *)a1;
- (BOOL)removeResourceChangesForCalendarItem:(id)a0 error:(id *)a1;
- (id)alarmWithUUID:(id)a0;
- (unsigned long long)eventNotificationCountForSource:(id)a0 excludingDelegateSources:(BOOL)a1 filteredByShowsNotificationsFlag:(BOOL)a2 excludeRowIDs:(id)a3;
- (BOOL)acknowledgeNotifications:(id)a0 error:(id *)a1;
- (BOOL)saveReminder:(id)a0 error:(id *)a1;

@end
