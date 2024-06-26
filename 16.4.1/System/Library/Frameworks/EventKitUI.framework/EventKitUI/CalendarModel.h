@class _EKNotificationMonitor, NSMutableDictionary, EKEventStore, CalendarModelSceneState, EKCalendarDate, EKUIPasteboardManager, NSMutableArray, NSCalendar, EKEvent, NSSet, NSString, CalendarEventLoader, EKSource, CUIKUndoManager, NSArray, NSLock;
@protocol OccurrenceCacheDataSourceProtocol;

@interface CalendarModel : NSObject <CalendarEventLoaderDelegate> {
    BOOL _modelLocked;
    BOOL _notificationMonitorSetUp;
    CalendarEventLoader *_eventLoader;
    unsigned long long _focusFilterMode;
    NSLock *_filterLock;
    NSArray *_visibleCalendars;
    NSSet *_unselectedCalendarsForFocusMode;
    BOOL _hasLoadedUnselectedCalendarsForFocusMode;
    long long _readWriteCalendarCount;
    NSArray *_delegateSources;
    long long _invitationBearingStoresExist;
    _EKNotificationMonitor *_notificationMonitor;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _dataSourceLock;
    id<OccurrenceCacheDataSourceProtocol> _occurrenceCacheDataSource;
    id<OccurrenceCacheDataSourceProtocol> _occurrenceCacheFilteredDataSource;
    long long _cachedFakeTodayIndex;
    NSMutableDictionary *_displayableAccountErrorCounts;
    long long _initialAccountSyncCount;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _selectedDateLock;
    EKCalendarDate *_selectedDate;
    BOOL _suspendSelectedDateChanges;
    EKCalendarDate *_suspendedSelectedDate;
    CalendarModelSceneState *_persistedSceneState;
    NSMutableArray *_selectedOccurrences;
}

@property (readonly, nonatomic) EKEventStore *eventStore;
@property (copy, nonatomic) NSCalendar *calendar;
@property (readonly, nonatomic) EKUIPasteboardManager *pasteboardManager;
@property (readonly, nonatomic) CUIKUndoManager *undoManager;
@property (copy, nonatomic) EKCalendarDate *selectedDate;
@property (readonly, nonatomic) EKCalendarDate *selectedDay;
@property (readonly, nonatomic) long long readWriteCalendarCount;
@property (readonly, nonatomic) long long accountsInInitialSyncCount;
@property (readonly, nonatomic) BOOL currentlyLocked;
@property (nonatomic) unsigned long long firstVisibleSecond;
@property (retain, nonatomic) EKEvent *selectedOccurrence;
@property (copy, nonatomic) NSArray *selectedOccurrences;
@property (retain, nonatomic) NSSet *selectedCalendars;
@property (readonly, nonatomic) NSSet *selectedCalendarsIgnoringFocus;
@property (copy, nonatomic) NSSet *unselectedCalendars;
@property (readonly, nonatomic) NSSet *unselectedCalendarsIgnoringFocus;
@property (readonly, nonatomic) NSSet *unselectedCalendarsForFocusMode;
@property (nonatomic) unsigned long long focusFilterMode;
@property (nonatomic) BOOL disableFocusFiltering;
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
+ (id)calendarModelWithDataPath:(id)a0;
+ (unsigned long long)errorForSubscribedCalendarChildrenOfSource:(id)a0;
+ (unsigned long long)errorForSource:(id)a0;
+ (void)temporarilyIgnoreInsecureConnectionErrorsForCalendars:(id)a0;
+ (void)temporarilyIgnoreInvalidCredentialsErrorForSource:(id)a0;
+ (id)sortedEnabledDelegateSourcesFromStore:(id)a0;

- (id)initWithEventStore:(id)a0;
- (id)occurrencesForStartDate:(id)a0 endDate:(id)a1 preSorted:(BOOL)a2 waitForLoad:(BOOL)a3;
- (void)setPreferredReloadStartDate:(id)a0 endDate:(id)a1;
- (void)_eventStoreChanged:(id)a0;
- (id)dateForCachedOccurrencesInSection:(long long)a0;
- (void)setSelectedCalendarsAndRequestPreferenceSave:(id)a0 reason:(id)a1;
- (void)updateSelectedDateTimeZone;
- (void)_timeZoneChanged:(id)a0;
- (void)setMaxCachedDays:(unsigned int)a0;
- (void)_focusModeConfigurationChanged:(id)a0;
- (void)setComponentForExpandingPadding:(unsigned long long)a0;
- (void)addOccurrenceAwaitingDeletion:(id)a0;
- (void)_recreateOccurrenceCacheDataSources;
- (void)setComponentForExpandingRequests:(unsigned long long)a0;
- (id)cachedOccurrenceAtIndexPath:(id)a0 usingFilter:(BOOL)a1;
- (void)addOccurrenceAwaitingRefresh:(id)a0;
- (id)dateForCachedOccurrencesInSection:(long long)a0 usingFilter:(BOOL)a1;
- (long long)cachedFakeTodayIndex;
- (void)_sceneEnteredBackground:(id)a0;
- (id)closestOccurrenceToTomorrowForEventUID:(int)a0;
- (void)calendarEventLoader:(id)a0 occurrencesDidUpdateBetweenStart:(double)a1 end:(double)a2 generation:(int)a3 wasEmptyLoad:(BOOL)a4;
- (id)_calendarsEnabledInFocus:(id)a0;
- (id)eventNotificationReferencesForCurrentIdentityIgnoringFilter;
- (id)cachedSpecialDayDataForSection:(long long)a0;
- (void)_notificationsLoaded:(id)a0;
- (id)occurrencesForStartDay:(id)a0 endDay:(id)a1 preSorted:(BOOL)a2 waitForLoad:(BOOL)a3;
- (void)deselectOccurrence:(id)a0;
- (void)_invalidateCachedOccurrences;
- (void)_occurrenceCacheChangedNotificationHandler;
- (BOOL)_setSelectedCalendars:(id)a0;
- (void)fetchCachedDaysInBackgroundStartingFromSection:(long long)a0;
- (unsigned long long)eventNotificationsForCurrentIdentityIgnoringFilterCount;
- (id)refreshAccountListIfNeeded:(BOOL)a0;
- (long long)sectionForCachedOccurrencesOnDate:(id)a0 sectionExistsForDay:(BOOL *)a1;
- (void)fetchCachedDaysInBackgroundStartingFromSection:(long long)a0 usingFilter:(BOOL)a1;
- (void)simulateFirstLoadFinished;
- (long long)numberOfDaysWithCachedOccurrencesUsingFilter:(BOOL)a0;
- (id)allCalendarsForCurrentIdentity;
- (void)_localeChanged:(id)a0;
- (void)setDesiredPaddingDays:(unsigned int)a0;
- (void)_invalidateOccurrenceCacheDataSources;
- (long long)countAccountsInInitialSync;
- (void)_occurrenceCacheChanged;
- (void)ensureCalendarVisibleWithId:(id)a0;
- (void)_performCommonInitialization;
- (id)_unselectedCalendarsForFocusMode;
- (void)_searchResultsAvailable:(id)a0;
- (void)locationPrecisionDeterminedNotification:(id)a0;
- (id)calendarsForCurrentIdentityFromCalendars:(id)a0;
- (id)eventNotificationReferencesForCurrentIdentity;
- (BOOL)selectedOccurrenceIsSearchMatch;
- (long long)numberOfCachedOccurrencesInSection:(long long)a0;
- (void)_significantTimeChange:(id)a0;
- (void)_createOccurrenceCacheDataSources;
- (id)eventNotificationReferencesForIdentity:(id)a0;
- (void)checkLocationAuthorizationAndAllowEventLocationPrediction;
- (void)prepareForAppSuspend;
- (id)occurrencesForDay:(id)a0 waitForLoad:(BOOL)a1;
- (unsigned long long)eventNotificationsForCurrentIdentityCount;
- (void)_checkSources;
- (void)_setupUndoManager;
- (void)setSourceForSelectedIdentity:(id)a0;
- (double)_tomorrow;
- (void)_tzSupportTodayRolledOver;
- (void)dealloc;
- (void)_executeBlockWithOccurrenceCacheDataSources:(id /* block */)a0;
- (void)_finishedFirstLoad;
- (id)eventNotificationReferencesForIdentity:(id)a0 ignoringFilter:(BOOL)a1;
- (void)selectOccurrence:(id)a0;
- (id)allEventNotificationReferences;
- (void)setSelectedOccurrence:(id)a0 forceChange:(BOOL)a1;
- (BOOL)_shouldShowNotification:(id)a0;
- (void)postSelectedCalendarsChanged;
- (long long)numberOfCachedOccurrencesInSection:(long long)a0 usingFilter:(BOOL)a1;
- (id)persistedSceneState;
- (void)updateAfterAppResume;
- (void)_notificationsExpired:(id)a0;
- (id)selectedDateOccurrences:(BOOL)a0 loadIsComplete:(BOOL *)a1;
- (id)closestOccurrenceToTomorrowForEventObjectID:(id)a0;
- (BOOL)removeEvent:(id)a0 withSpan:(long long)a1 error:(id *)a2;
- (void)_setFocusFilterMode:(unsigned long long)a0 force:(BOOL)a1;
- (unsigned long long)allEventNotificationsCount;
- (void)_notificationBlacklisted;
- (void)_systemWake;
- (BOOL)invitationBearingStoresExistForEvents;
- (BOOL)isCalendarVisibleWithID:(id)a0;
- (id)init;
- (long long)displayableAccountErrorsForSource:(id)a0;
- (void)_setSelectedOccurrences:(id)a0 forceChange:(BOOL)a1;
- (BOOL)countSourcesWithErrors;
- (void)startNotificationMonitor;
- (long long)sectionForCachedOccurrencesOnDate:(id)a0;
- (void)_reloadIfTodayDetermined;
- (void)_deselectOccurrence:(id)a0 notify:(BOOL)a1;
- (void)_selectOccurrence:(id)a0 notify:(BOOL)a1;
- (void)setFocusFilterMode:(unsigned long long)a0 force:(BOOL)a1;
- (void)_processReloadForCacheOnly:(BOOL)a0 includingCalendars:(BOOL)a1 checkCalendarsValid:(BOOL)a2 checkSources:(BOOL)a3;
- (void)addRespondedNotificationObjectID:(id)a0;
- (void)_sceneEnteredForeground:(id)a0;
- (long long)sectionForCachedOccurrencesOnDate:(id)a0 usingFilter:(BOOL)a1;
- (id)indexPathsForOccurrence:(id)a0 usingFilter:(BOOL)a1;
- (id)refreshCalendarDataIfNeeded:(BOOL)a0;
- (id)defaultCalendarForNewEvents;
- (long long)numberOfDaysWithCachedOccurrences;
- (BOOL)searchingOccurrences;
- (id)_calendarsForCurrentIdentityFromCalendars:(id)a0 lock:(BOOL)a1;
- (id)_dataSourceUsingFilter:(BOOL)a0;
- (id)cachedOccurrenceAtIndexPath:(id)a0;
- (void)_loadVisibleCalendarsIfNeeded;
- (void)_ignoredErrorsChanged;
- (BOOL)_eventBelongsToCurrentIdentity:(id)a0;
- (void).cxx_destruct;
- (id)initWithDataPath:(id)a0;
- (id)_eventNotificationsForCurrentIdentityIgnoringFilter:(BOOL)a0;
- (long long)sectionForCachedOccurrencesOnDate:(id)a0 sectionExistsForDay:(BOOL *)a1 usingFilter:(BOOL)a2;
- (void)updateSourceForSelectedIdentity:(id)a0 selectedCalendars:(id)a1;
- (void)fetchDaysStartingFromSection:(long long)a0 sectionsToLoadInBothDirections:(long long)a1;
- (void)setSelectedDateChangesDelayedUntilAfterTransition:(BOOL)a0;
- (unsigned long long)_eventNotificationCountForCurrentIdentityIgnoringFilter:(BOOL)a0;
- (id)_notificationMonitor;
- (BOOL)cachedOccurrencesAreLoaded;

@end
