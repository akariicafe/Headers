@class CNContactStore, CNContact, NSMutableSet, CLSCalendarEventsCache;

@interface CLSSocialServiceCalendar : CLSSocialService {
    CNContactStore *_contactStore;
    CNContact *_meContact;
    CLSCalendarEventsCache *_calendarEventsCache;
    NSMutableSet *_prefetchedDateIntervals;
}

+ (BOOL)_isEventInMeetingRoom:(id)a0;
+ (id)relevantCalendars:(id)a0;
+ (BOOL)shouldKeepEvent:(id)a0 withClueCollection:(id)a1;
+ (BOOL)_isCalendarRelevant:(id)a0;
+ (BOOL)eventAtLocation:(id)a0 withAttendeeNames:(id)a1 matchesClueCollection:(id)a2;

- (id)meContact;
- (void)enumerateEventsFromUniversalDate:(id)a0 toUniversalDate:(id)a1 usingBlock:(id /* block */)a2;
- (void)prefetchEventsFromUniversalDate:(id)a0 toUniversalDate:(id)a1 forAssetCollectionsSortedByStartDate:(id)a2 usingBlock:(id /* block */)a3;
- (id)eventsForDates:(id)a0;
- (void).cxx_destruct;
- (void)invalidateMemoryCaches;
- (id)workCalendarEventsMatchingContactIdentifiers:(id)a0 fromUniversalDate:(id)a1 toUniversalDate:(id)a2;
- (id)personsFromEventParticipants:(id)a0 excludeCurrentUser:(BOOL)a1;
- (id)eventsForClueCollection:(id)a0;
- (id)initWithProxyAtURL:(id)a0 andIntent:(unsigned long long)a1;
- (id)_fullNameWithContact:(id)a0;
- (id)eventFromProxyEvent:(id)a0;
- (BOOL)_sortedAssetCollections:(id)a0 containsEvent:(id)a1;
- (BOOL)_hasAlreadyPrefetchedEventsFromUniversalDate:(id)a0 toUniversalDate:(id)a1;
- (void)_enumerateEventsFromDate:(id)a0 toDate:(id)a1 fetchIfNeeded:(BOOL)a2 usingBlock:(id /* block */)a3;

@end
