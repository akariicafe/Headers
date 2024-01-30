@interface CADEventOperationGroup : CADOperationGroup <CADEventInterface>

+ (BOOL)requiresEventOrReminderAccess;
+ (void)monitorLocationAuthorizationStatusChanges:(unsigned long long)a0;
+ (BOOL)requiresEventAccess;
+ (BOOL)requiresReminderAccess;

- (void)CADOccurrenceCacheGetOccurrenceForCalendars:(id)a0 onDay:(id)a1 reply:(id /* block */)a2;
- (void)CADOccurrenceCacheSearchWithTerm:(id)a0 inCalendars:(id)a1 responseToken:(int)a2 reply:(id /* block */)a3;
- (void)CADDatabaseGetBirthdayCalendarEnabledWithReply:(id /* block */)a0;
- (void)CADDatabaseActOnSuggestedEvent:(id)a0 action:(int)a1 validator:(id)a2 reply:(id /* block */)a3;
- (void)CADDatabaseGetTTLLocationAuthorizationStatus:(id /* block */)a0;
- (void)CADDatabaseGetAllEventsWithUniqueID:(id)a0 reply:(id /* block */)a1;
- (void)CADOccurrencesExistInRangeForEvent:(id)a0 startDate:(id)a1 endDate:(id)a2 mustStartInInterval:(BOOL)a3 timezone:(id)a4 reply:(id /* block */)a5;
- (void)CADDatabaseGetDefaultLocalCalendarWithReply:(id /* block */)a0;
- (void)CADDatabaseRemoveSuggestedEventCalendarWithReply:(id /* block */)a0;
- (void)CADDatabaseGetCountOfNotifiableEvents:(id /* block */)a0;
- (void)CADDatabaseGetSecurityScopedLocalURLWrapperForAttachment:(id)a0 reply:(id /* block */)a1;
- (void)CADDatabaseGetEventWithUniqueID:(id)a0 reply:(id /* block */)a1;
- (void)CADDatabaseSetShowsDeclinedEvents:(BOOL)a0;
- (void)CADDatabaseGetOrCreateBirthdayCalendar:(id /* block */)a0;
- (id)_getDefaultCalendarIDForNewEventsInStoreWithID:(id)a0;
- (void)CADDatabaseGetOrCreateSubscribedCalendarsSource:(id /* block */)a0;
- (void)CADDatabaseSetDefaultCalendarForNewEvents:(id)a0 delegateSource:(id)a1;
- (void)CADDatabaseShouldWhitelistOrganizerEmailFromJunkChecks:(id)a0 reply:(id /* block */)a1;
- (void)CADOccurrenceCacheCancelSearchWithReplyID:(int)a0;
- (void)CADDatabaseShouldWhitelistOrganizerPhoneNumberFromJunkChecks:(id)a0 reply:(id /* block */)a1;
- (void)CADDatabaseGetDefaultCalendarForNewEventsInDelegateSource:(id)a0 withReply:(id /* block */)a1;
- (void)CADOccurrenceCacheDoEvents:(id)a0 haveOccurrencesAfterDate:(id)a1 reply:(id /* block */)a2;
- (void)CADOccurrenceCacheGetOccurrenceDateOfEventWithRowID:(int)a0 nearestDate:(id)a1 prefersForwardSearch:(BOOL)a2 reply:(id /* block */)a3;
- (void)CADDatabaseGetCountOfUnacknowledgedEvents:(id /* block */)a0;
- (void)CADDatabaseInsertSuggestedEventCalendarWithReply:(id /* block */)a0;
- (void *)_chooseRealSubscribedCalendarStoreFromStoresAndDeleteTheOtherOnes:(struct __CFArray { } *)a0 withDatabase:(struct CalDatabase { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; int x1; struct CPRecordStore *x2; struct CalEventOccurrenceCache *x3; struct CalScheduledTaskCache *x4; struct __CFDictionary *x5; struct __CFDictionary *x6; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x7; unsigned int x8; unsigned int x9; struct __CFArray *x10; struct __CFString *x11; struct __CFArray *x12; int x13; int x14; struct __CFString *x15; struct __CFString *x16; struct __CFString *x17; int x18; id /* block */ x19; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x20; BOOL x21; struct __CFArray *x22; struct __CFArray *x23; struct __CFArray *x24; id x25; BOOL x26; BOOL x27; struct __CFSet *x28; id x29; BOOL x30; } *)a1;
- (void)CADDatabaseGetSuggestedEventCalendarWithReply:(id /* block */)a0;
- (void)CADOccurrenceCacheGetOccurrenceCountsForCalendars:(id)a0 reply:(id /* block */)a1;
- (void)CADDatabaseSetBirthdayCalendarEnabled:(BOOL)a0 withReply:(id /* block */)a1;
- (void)CADDatabaseGetEventWithEventIdentifier:(id)a0 reply:(id /* block */)a1;
- (void)CADOccurrenceCacheAreOccurrencesBeingGenerated:(id /* block */)a0;
- (void)CADDatabaseCanModifySuggestedEventCalendar:(id /* block */)a0;
- (BOOL)_CADDatabaseCanModifySuggestedEventCalendar;
- (void)CADDatabaseActOnSuggestedEvent:(id)a0 action:(int)a1 reply:(id /* block */)a2;
- (void)CADDatabaseGetNaturalLanguageSuggestedEventCalendarWithReply:(id /* block */)a0;
- (void)CADOccurrenceCacheSearchLocationsWithTerm:(id)a0 inCalendars:(id)a1 responseToken:(int)a2 reply:(id /* block */)a3;

@end
