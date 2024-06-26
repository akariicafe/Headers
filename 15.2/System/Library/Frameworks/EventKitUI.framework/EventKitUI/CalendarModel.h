@class _EKNotificationMonitor, NSMutableDictionary, EKEventStore, CalendarModelSceneState, EKCalendarDate, NSCalendar, EKEvent, NSString, NSSet, CalendarEventLoader, EKSource, NSArray, NSLock;
@protocol OccurrenceCacheDataSourceProtocol;

@interface CalendarModel : NSObject <CalendarEventLoaderDelegate> {
    BOOL _modelLocked;
    BOOL _notificationMonitorSetUp;
    CalendarEventLoader *_eventLoader;
    NSLock *_filterLock;
    NSArray *_visibleCalendars;
    long long _readWriteCalendarCount;
    NSArray *_delegateSources;
    long long _invitationBearingStoresExist;
    _EKNotificationMonitor *_notificationMonitor;
    id<OccurrenceCacheDataSourceProtocol> _occurrenceCacheDataSource;
    id<OccurrenceCacheDataSourceProtocol> _occurrenceCacheFilteredDataSource;
    long long _cachedFakeTodayIndex;
    NSMutableDictionary *_displayableAccountErrorCounts;
    long long _initialAccountSyncCount;
    BOOL _suspendSelectedDateChanges;
    EKCalendarDate *_suspendedSelectedDate;
    CalendarModelSceneState *_persistedSceneState;
}

@property (readonly, nonatomic) EKEventStore *eventStore;
@property (copy, nonatomic) NSCalendar *calendar;
@property (copy, nonatomic) EKCalendarDate *selectedDate;
@property (readonly, nonatomic) EKCalendarDate *selectedDay;
@property (readonly, nonatomic) long long readWriteCalendarCount;
@property (readonly, nonatomic) long long accountsInInitialSyncCount;
@property (readonly, nonatomic) BOOL currentlyLocked;
@property (nonatomic) unsigned long long firstVisibleSecond;
@property (retain, nonatomic) EKEvent *selectedOccurrence;
@property (retain, nonatomic) NSSet *selectedCalendars;
@property (copy, nonatomic) NSSet *unselectedCalendars;
@property (retain, nonatomic) NSString *searchString;
@property (nonatomic) BOOL showDayAsList;
@property (nonatomic) BOOL showMonthAsDivided;
@property (readonly, retain, nonatomic) EKSource *sourceForSelectedIdentity;
@property (retain, nonatomic) NSArray *sortedEnabledDelegates;
@property (readonly, nonatomic) BOOL containsDelegateSources;
@property (copy, nonatomic) NSString *sceneIdentifier;
@property (nonatomic) BOOL autoStartNotificationMonitor;
@property (nonatomic) BOOL allowEventLocationPrediction;

+ (id)calendarModelWithEventStore:(id)a0;
+ (unsigned long long)errorForSource:(id)a0;
+ (void)temporarilyIgnoreInvalidCredentialsErrorForSource:(id)a0;
+ (id)sortedEnabledDelegateSourcesFromStore:(id)a0;
+ (unsigned long long)errorForSubscribedCalendarChildrenOfSource:(id)a0;
+ (void)temporarilyIgnoreInsecureConnectionErrorsForCalendars:(id)a0;
+ (id)calendarModelWithDataPath:(id)a0;

- (void)_eventStoreChanged:(id)a0;
- (id)occurrencesForStartDate:(id)a0 endDate:(id)a1 preSorted:(BOOL)a2 waitForLoad:(BOOL)a3;
- (long long)numberOfCachedOccurrencesInSection:(long long)a0;
- (void)setComponentForExpandingPadding:(unsigned long long)a0;
- (id)initWithEventStore:(id)a0;
- (void)setPreferredReloadStartDate:(id)a0 endDate:(id)a1;
- (void)_tzSupportTodayRolledOver;
- (void)addOccurrenceAwaitingDeletion:(id)a0;
- (void)addOccurrenceAwaitingRefresh:(id)a0;
- (id)refreshAccountListIfNeeded:(BOOL)a0;
- (long long)sectionForCachedOccurrencesOnDate:(id)a0 sectionExistsForDay:(BOOL *)a1 usingFilter:(BOOL)a2;
- (BOOL)cachedOccurrencesAreLoaded;
- (void)updateAfterAppResume;
- (void)ensureCalendarVisibleWithId:(id)a0;
- (long long)numberOfCachedOccurrencesInSection:(long long)a0 usingFilter:(BOOL)a1;
- (void)prepareForAppSuspend;
- (BOOL)removeEvent:(id)a0 withSpan:(long long)a1 error:(id *)a2;
- (void)_recreateOccurrenceCacheDataSources;
- (long long)cachedFakeTodayIndex;
- (void)_searchResultsAvailable:(id)a0;
- (void)_performCommonInitialization;
- (id)cachedOccurrenceAtIndexPath:(id)a0;
- (BOOL)isCalendarVisibleWithID:(id)a0;
- (void)setDesiredPaddingDays:(unsigned int)a0;
- (void)_localeChanged:(id)a0;
- (BOOL)_eventBelongsToCurrentIdentity:(id)a0;
- (BOOL)countSourcesWithErrors;
- (void)startNotificationMonitor;
- (void)_createOccurrenceCacheDataSources;
- (id)cachedOccurrenceAtIndexPath:(id)a0 usingFilter:(BOOL)a1;
- (void)_notificationsExpired:(id)a0;
- (id)eventNotificationReferencesForCurrentIdentity;
- (void)setComponentForExpandingRequests:(unsigned long long)a0;
- (void)locationPrecisionDeterminedNotification:(id)a0;
- (id)refreshCalendarDataIfNeeded:(BOOL)a0;
- (BOOL)searchingOccurrences;
- (void)_sceneEnteredForeground:(id)a0;
- (id)occurrencesForDay:(id)a0 waitForLoad:(BOOL)a1;
- (id)eventNotificationReferencesForIdentity:(id)a0;
- (void)_sceneEnteredBackground:(id)a0;
- (id)_dataSourceUsingFilter:(BOOL)a0;
- (long long)sectionForCachedOccurrencesOnDate:(id)a0 usingFilter:(BOOL)a1;
- (id)calendarsForCurrentIdentityFromCalendars:(id)a0;
- (id)defaultCalendarForNewEvents;
- (void)calendarEventLoader:(id)a0 occurrencesDidUpdateBetweenStart:(double)a1 end:(double)a2 generation:(int)a3 wasEmptyLoad:(BOOL)a4;
- (id)dateForCachedOccurrencesInSection:(long long)a0 usingFilter:(BOOL)a1;
- (void)setMaxCachedDays:(unsigned int)a0;
- (void)_significantTimeChange:(id)a0;
- (void)_invalidateOccurrenceCacheDataSources;
- (void)setSelectedDateChangesDelayedUntilAfterTransition:(BOOL)a0;
- (void)fetchCachedDaysInBackgroundStartingFromSection:(long long)a0;
- (void)_notificationCountExpired:(id)a0;
- (void)_invalidateCachedOccurrences;
- (void)setSourceForSelectedIdentity:(id)a0;
- (void)fetchCachedDaysInBackgroundStartingFromSection:(long long)a0 usingFilter:(BOOL)a1;
- (void)_checkSources;
- (void).cxx_destruct;
- (void)simulateFirstLoadFinished;
- (long long)sectionForCachedOccurrencesOnDate:(id)a0;
- (id)init;
- (double)_tomorrow;
- (BOOL)cachedOccurrencesAreBeingGenerated;
- (long long)displayableAccountErrorsForSource:(id)a0;
- (long long)sectionForCachedOccurrencesOnDate:(id)a0 sectionExistsForDay:(BOOL *)a1;
- (unsigned long long)allEventNotificationsCount;
- (id)closestOccurrenceToTomorrowForEventUID:(int)a0;
- (BOOL)invitationBearingStoresExistForEvents;
- (void)_ignoredErrorsChanged;
- (id)occurrencesForStartDay:(id)a0 endDay:(id)a1 preSorted:(BOOL)a2 waitForLoad:(BOOL)a3;
- (id)allEventNotificationReferences;
- (void)_finishedFirstLoad;
- (long long)numberOfDaysWithCachedOccurrences;
- (long long)numberOfDaysWithCachedOccurrencesUsingFilter:(BOOL)a0;
- (id)initWithDataPath:(id)a0;
- (void)_reloadIfTodayDetermined;
- (void)_systemWake;
- (void)_timeZoneChanged:(id)a0;
- (id)_calendarsForCurrentIdentityFromCalendars:(id)a0 lock:(BOOL)a1;
- (void)_occurrenceCacheChanged;
- (long long)countAccountsInInitialSync;
- (void)postSelectedCalendarsChanged;
- (unsigned long long)eventNotificationsForCurrentIdentityCount;
- (void)dealloc;
- (id)_notificationMonitor;
- (BOOL)_setSelectedCalendars:(id)a0;
- (id)persistedSceneState;
- (void)setSelectedCalendarsAndRequestPreferenceSave:(id)a0;
- (void)addRespondedNotificationObjectID:(id)a0;
- (id)selectedDateOccurrences:(BOOL)a0 loadIsComplete:(BOOL *)a1;
- (void)updateSelectedDateTimeZone;
- (void)_processReloadForCacheOnly:(BOOL)a0 includingCalendars:(BOOL)a1 checkCalendarsValid:(BOOL)a2 checkSources:(BOOL)a3;
- (void)updateSourceForSelectedIdentity:(id)a0 selectedCalendars:(id)a1;
- (void)_loadVisibleCalendarsIfNeeded;
- (void)_notificationBlacklisted;
- (void)checkLocationAuthorizationAndAllowEventLocationPrediction;
- (BOOL)selectedOccurrenceIsSearchMatch;
- (id)dateForCachedOccurrencesInSection:(long long)a0;

@end
