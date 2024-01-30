@interface CADNotificationUtilities : NSObject

+ (int)_gatherSuggestionResourceChangeNotification:(const void *)a0 withContext:(id)a1;
+ (BOOL)_storeIsDelegate:(const void *)a0;
+ (int)CADDatabaseGetEventNotificationItemsWithDatabase:(struct CalDatabase { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; int x1; struct CPRecordStore *x2; struct CalEventOccurrenceCache *x3; struct CalScheduledTaskCache *x4; struct __CFDictionary *x5; struct __CFDictionary *x6; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x7; unsigned int x8; unsigned int x9; struct __CFArray *x10; struct __CFString *x11; struct __CFArray *x12; int x13; int x14; struct __CFString *x15; struct __CFURL *x16; struct __CFString *x17; struct __CFString *x18; int x19; id /* block */ x20; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x21; BOOL x22; struct __CFArray *x23; struct __CFArray *x24; struct __CFArray *x25; struct __CFArray *x26; id x27; BOOL x28; BOOL x29; BOOL x30; struct __CFSet *x31; id x32; id x33; int x34; BOOL x35; BOOL x36; } *)a0 afterDate:(id)a1 forSourceWithExternalIdentifier:(id)a2 excludingDelegateSources:(BOOL)a3 filteredByShowsNotificationsFlag:(BOOL)a4 earliestExpirationDate:(id *)a5 notificationTypes:(id *)a6 rowIDs:(id *)a7 occurrenceDates:(id *)a8;
+ (void)_logNotificationCountsForNotificationTypes:(id)a0;
+ (id)_stringForNotificationType:(int)a0;
+ (int)_gatherSharedCalendarResponsesAndResourceChangesWithContext:(id)a0;
+ (int)_gatherSharedCalendarInvitationsWithContext:(id)a0;
+ (int)_gatherSharedCalendarResourceChangeNotification:(const void *)a0 withContext:(id)a1;
+ (BOOL)storeIsReadOnlyDelegate:(const void *)a0;
+ (int)_gatherEventInvitationsAndRepliesWithContext:(id)a0;
+ (int)_gatherSharedCalendarInviteReplyNotification:(const void *)a0 withContext:(id)a1;

@end
