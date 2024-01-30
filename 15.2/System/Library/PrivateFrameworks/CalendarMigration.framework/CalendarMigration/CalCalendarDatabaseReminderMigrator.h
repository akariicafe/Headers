@class NSString;
@protocol CalReminderKitProvider, CalReminderMigrationDefaultsProvider;

@interface CalCalendarDatabaseReminderMigrator : NSObject <CalMigrator>

@property (readonly, nonatomic) id<CalReminderKitProvider> reminderKitProvider;
@property (readonly, nonatomic) id<CalReminderMigrationDefaultsProvider> defaultsProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_preCheckStoreForPossibleMigrationDisablingRemindersIfNeeded:(const void *)a0 withContext:(id)a1 accountType:(long long *)a2 identifier:(id *)a3;
+ (BOOL)_attemptMigrationForStore:(const void *)a0 withContext:(id)a1;
+ (void)_removeRemindersDataAfterSuccessfulMigrationFromDatabase:(struct CalDatabase { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; int x1; struct CPRecordStore *x2; struct CalEventOccurrenceCache *x3; struct CalScheduledTaskCache *x4; struct __CFDictionary *x5; struct __CFDictionary *x6; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x7; unsigned int x8; unsigned int x9; struct __CFArray *x10; struct __CFString *x11; struct __CFArray *x12; int x13; int x14; struct __CFString *x15; struct __CFURL *x16; struct __CFString *x17; struct __CFString *x18; int x19; id /* block */ x20; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x21; BOOL x22; struct __CFArray *x23; struct __CFArray *x24; struct __CFArray *x25; struct __CFArray *x26; id x27; BOOL x28; BOOL x29; BOOL x30; struct __CFSet *x31; id x32; id x33; int x34; BOOL x35; BOOL x36; } *)a0 withContext:(id)a1;
+ (id)_identifierForStore:(const void *)a0;
+ (long long)_accountTypeForStore:(const void *)a0;
+ (void)_setWasMigratedAndClearSyncTokenInAllCalendarsForStore:(const void *)a0 withContext:(id)a1;
+ (id)_attemptAccountMigrationForStore:(const void *)a0 withContext:(id)a1 accountType:(long long *)a2;
+ (void)_migrateReminderListsInStore:(const void *)a0 withContext:(id)a1 accountChangeItem:(id)a2 accountType:(long long)a3;
+ (BOOL)_shouldMigrateCalendarAsReminderList:(const void *)a0;
+ (void)_visitCalendarForMigrationAsReminderList:(const void *)a0 withContext:(id)a1 accountChangeItem:(id)a2 accountType:(long long)a3;
+ (id)_identifierForCalendar:(const void *)a0;
+ (void)_migrateCalendarAsReminderList:(const void *)a0 withContext:(id)a1 accountChangeItem:(id)a2 accountType:(long long)a3;
+ (id)_colorStringForCalendar:(const void *)a0;
+ (void)_migrateRemindersInCalendar:(const void *)a0 withContext:(id)a1 listChangeItem:(id)a2;
+ (void)_migrateReminder:(const void *)a0 withContext:(id)a1 listChangeItem:(id)a2;
+ (id)_identifierForReminder:(const void *)a0;

- (void).cxx_destruct;
- (id)initWithReminderKitProvider:(id)a0 defaultsProvider:(id)a1;
- (BOOL)attemptMigrationWithCalendarDatabase:(struct CalDatabase { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; int x1; struct CPRecordStore *x2; struct CalEventOccurrenceCache *x3; struct CalScheduledTaskCache *x4; struct __CFDictionary *x5; struct __CFDictionary *x6; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x7; unsigned int x8; unsigned int x9; struct __CFArray *x10; struct __CFString *x11; struct __CFArray *x12; int x13; int x14; struct __CFString *x15; struct __CFURL *x16; struct __CFString *x17; struct __CFString *x18; int x19; id /* block */ x20; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x21; BOOL x22; struct __CFArray *x23; struct __CFArray *x24; struct __CFArray *x25; struct __CFArray *x26; id x27; BOOL x28; BOOL x29; BOOL x30; struct __CFSet *x31; id x32; id x33; int x34; BOOL x35; BOOL x36; } *)a0;
- (BOOL)_attemptMigrationWithHomeDirectory:(id)a0;
- (BOOL)_attemptMigrationWithCalendarDatabase:(struct CalDatabase { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; int x1; struct CPRecordStore *x2; struct CalEventOccurrenceCache *x3; struct CalScheduledTaskCache *x4; struct __CFDictionary *x5; struct __CFDictionary *x6; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x7; unsigned int x8; unsigned int x9; struct __CFArray *x10; struct __CFString *x11; struct __CFArray *x12; int x13; int x14; struct __CFString *x15; struct __CFURL *x16; struct __CFString *x17; struct __CFString *x18; int x19; id /* block */ x20; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x21; BOOL x22; struct __CFArray *x23; struct __CFArray *x24; struct __CFArray *x25; struct __CFArray *x26; id x27; BOOL x28; BOOL x29; BOOL x30; struct __CFSet *x31; id x32; id x33; int x34; BOOL x35; BOOL x36; } *)a0;
- (BOOL)_attemptMigrationForDatabase:(struct CalDatabase { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; int x1; struct CPRecordStore *x2; struct CalEventOccurrenceCache *x3; struct CalScheduledTaskCache *x4; struct __CFDictionary *x5; struct __CFDictionary *x6; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x7; unsigned int x8; unsigned int x9; struct __CFArray *x10; struct __CFString *x11; struct __CFArray *x12; int x13; int x14; struct __CFString *x15; struct __CFURL *x16; struct __CFString *x17; struct __CFString *x18; int x19; id /* block */ x20; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x21; BOOL x22; struct __CFArray *x23; struct __CFArray *x24; struct __CFArray *x25; struct __CFArray *x26; id x27; BOOL x28; BOOL x29; BOOL x30; struct __CFSet *x31; id x32; id x33; int x34; BOOL x35; BOOL x36; } *)a0 inCalendarDirectory:(id)a1 withContext:(id)a2;
- (void)_performPreMigrationTasksInCalendarDirectory:(id)a0 withContext:(id)a1;
- (BOOL)_performMigrationForCalendarDatabase:(struct CalDatabase { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; int x1; struct CPRecordStore *x2; struct CalEventOccurrenceCache *x3; struct CalScheduledTaskCache *x4; struct __CFDictionary *x5; struct __CFDictionary *x6; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x7; unsigned int x8; unsigned int x9; struct __CFArray *x10; struct __CFString *x11; struct __CFArray *x12; int x13; int x14; struct __CFString *x15; struct __CFURL *x16; struct __CFString *x17; struct __CFString *x18; int x19; id /* block */ x20; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x21; BOOL x22; struct __CFArray *x23; struct __CFArray *x24; struct __CFArray *x25; struct __CFArray *x26; id x27; BOOL x28; BOOL x29; BOOL x30; struct __CFSet *x31; id x32; id x33; int x34; BOOL x35; BOOL x36; } *)a0 inCalendarDirectory:(id)a1 withContext:(id)a2;
- (BOOL)attemptMigrationWithHomeDirectory:(id)a0;

@end
