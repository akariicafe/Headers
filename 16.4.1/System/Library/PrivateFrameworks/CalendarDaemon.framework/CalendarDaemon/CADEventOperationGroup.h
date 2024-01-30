@interface CADEventOperationGroup : CADOperationGroup <CADEventInterface>

+ (void)monitorLocationAuthorizationStatusChanges:(unsigned long long)a0;
+ (BOOL)requiresEventAccess;

- (void)CADDatabaseSetBirthdayCalendarEnabled:(BOOL)a0 withReply:(id /* block */)a1;
- (void)CADDatabaseGetDefaultCalendarForNewEventsInDelegateSource:(id)a0 withReply:(id /* block */)a1;
- (void)CADOccurrenceCacheGetOccurrenceCountsForCalendars:(id)a0 reply:(id /* block */)a1;
- (void)CADDatabaseGetDefaultLocalCalendarWithReply:(id /* block */)a0;
- (void)CADDatabaseRemoveSuggestedEventCalendarWithReply:(id /* block */)a0;
- (void)CADOccurrenceCacheSearchLocationsWithTerm:(id)a0 inCalendars:(id)a1 responseToken:(int)a2 reply:(id /* block */)a3;
- (void)CADOccurrenceCacheGetOccurrencesForCalendars:(id)a0 onDay:(id)a1 reply:(id /* block */)a2;
- (void)CADOccurrenceCacheSearchWithTerm:(id)a0 inCalendars:(id)a1 responseToken:(int)a2 reply:(id /* block */)a3;
- (void)CADOccurrencesExistInRangeForEvent:(id)a0 startDate:(id)a1 endDate:(id)a2 mustStartInInterval:(BOOL)a3 timezone:(id)a4 reply:(id /* block */)a5;
- (void)CADDatabaseCanModifySuggestedEventCalendar:(id /* block */)a0;
- (void)CADDatabaseInsertSuggestedEventCalendarWithReply:(id /* block */)a0;
- (void)CADDatabaseGetBirthdayCalendarEnabledWithReply:(id /* block */)a0;
- (void)CADDatabaseGetEventWithUniqueID:(id)a0 reply:(id /* block */)a1;
- (void)CADOccurrenceCacheCancelSearchWithReplyID:(int)a0;
- (void)CADDatabaseGetAllEventsWithUniqueID:(id)a0 reply:(id /* block */)a1;
- (void)CADOccurrenceCacheGetOccurrenceDateOfEventWithObjectID:(id)a0 nearestDate:(id)a1 prefersForwardSearch:(BOOL)a2 reply:(id /* block */)a3;
- (void)CADDatabaseGetEventWithEventIdentifier:(id)a0 reply:(id /* block */)a1;
- (void)CADDatabaseGetNaturalLanguageSuggestedEventCalendarWithReply:(id /* block */)a0;
- (id)_getDefaultCalendarIDForNewEventsInStoreWithID:(id)a0 inDatabase:(struct CalDatabase { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; int x1; struct CPRecordStore *x2; struct CalEventOccurrenceCache *x3; struct CalScheduledTaskCache *x4; struct __CFDictionary *x5; struct __CFDictionary *x6; struct os_unfair_lock_s { unsigned int x0; } x7; unsigned int x8; unsigned int x9; struct __CFArray *x10; struct __CFString *x11; struct __CFArray *x12; int x13; int x14; struct __CFString *x15; struct __CFURL *x16; struct __CFString *x17; struct __CFString *x18; unsigned long long x19; int x20; int x21; int x22; id /* block */ x23; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x24; BOOL x25; struct __CFArray *x26; struct __CFArray *x27; struct __CFArray *x28; struct __CFArray *x29; id x30; BOOL x31; BOOL x32; struct __CFSet *x33; id x34; id x35; id x36; int x37; id x38; id x39; id x40; char *x41; unsigned int x42; unsigned int x43; int x44; BOOL x45; BOOL x46; BOOL x47; BOOL x48; BOOL x49; BOOL x50; } *)a1 defaultExists:(BOOL *)a2;
- (void)CADDatabaseShouldPermitOrganizerEmailFromJunkChecks:(id)a0 reply:(id /* block */)a1;
- (BOOL)_CADDatabaseCanModifySuggestedEventCalendar;
- (void)CADDatabaseSetDefaultCalendarForNewEvents:(id)a0 delegateSource:(id)a1 reply:(id /* block */)a2;
- (void)CADOccurrenceCacheDoEvents:(id)a0 haveOccurrencesAfterDate:(id)a1 reply:(id /* block */)a2;
- (void)CADDatabaseGetTTLLocationAuthorizationStatus:(id /* block */)a0;
- (void)CADDatabaseGetAttachmentWithUUID:(id)a0 reply:(id /* block */)a1;
- (void)CADDatabaseGetAttachmentUUIDWithExternalID:(id)a0 store:(id)a1 reply:(id /* block */)a2;
- (void)CADDatabaseGetOrCreateBirthdayCalendar:(id /* block */)a0;
- (void)CADDatabaseGetOrCreateSubscribedCalendarsSource:(id /* block */)a0;
- (void)CADDatabaseShouldPermitOrganizerPhoneNumberFromJunkChecks:(id)a0 reply:(id /* block */)a1;
- (void)CADDatabaseGetSuggestedEventCalendarWithReply:(id /* block */)a0;
- (id)_mergeDaysAndOccurrenceCounts:(id)a0 withCounts:(id)a1;

@end
