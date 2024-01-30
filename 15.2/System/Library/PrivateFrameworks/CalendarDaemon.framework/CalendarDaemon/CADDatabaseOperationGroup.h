@interface CADDatabaseOperationGroup : CADOperationGroup <CADDatabaseInterface>

+ (BOOL)requiresEventAccess;
+ (BOOL)requiresReminderAccess;
+ (BOOL)requiresEventOrReminderAccess;

- (void)CADDatabaseInsert:(id)a0 delete:(id)a1 update:(id)a2 andCommit:(id /* block */)a3;
- (void)CADDatabaseGetChangedEntityIDsSinceTimestamp:(double)a0 reply:(id /* block */)a1;
- (void)CADDatabaseMarkIndividualChangesConsumed:(id)a0 reply:(id /* block */)a1;
- (struct __CFSet { } *)_copyToIntCFSetRef:(id)a0;
- (void)CADDatabaseGetNextAssignableColorWithReply:(id /* block */)a0;
- (id)_insertObjectsWithTemporaryObjectIDs:(id)a0 database:(struct CalDatabase { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; int x1; struct CPRecordStore *x2; struct CalEventOccurrenceCache *x3; struct CalScheduledTaskCache *x4; struct __CFDictionary *x5; struct __CFDictionary *x6; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x7; unsigned int x8; unsigned int x9; struct __CFArray *x10; struct __CFString *x11; struct __CFArray *x12; int x13; int x14; struct __CFString *x15; struct __CFURL *x16; struct __CFString *x17; struct __CFString *x18; int x19; id /* block */ x20; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x21; BOOL x22; struct __CFArray *x23; struct __CFArray *x24; struct __CFArray *x25; struct __CFArray *x26; id x27; BOOL x28; BOOL x29; BOOL x30; struct __CFSet *x31; id x32; id x33; int x34; BOOL x35; BOOL x36; } *)a1 error:(int *)a2;
- (struct __CFArray { } *)_copyToIntCFArrayRef:(id)a0;
- (void)CADDatabaseGetSequenceNumber:(id /* block */)a0;
- (void)CADDatabaseUnregisterForDetailedChangeTracking:(id /* block */)a0;
- (int)_updatePropertiesAndRelations:(id)a0 database:(struct CalDatabase { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; int x1; struct CPRecordStore *x2; struct CalEventOccurrenceCache *x3; struct CalScheduledTaskCache *x4; struct __CFDictionary *x5; struct __CFDictionary *x6; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x7; unsigned int x8; unsigned int x9; struct __CFArray *x10; struct __CFString *x11; struct __CFArray *x12; int x13; int x14; struct __CFString *x15; struct __CFURL *x16; struct __CFString *x17; struct __CFString *x18; int x19; id /* block */ x20; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x21; BOOL x22; struct __CFArray *x23; struct __CFArray *x24; struct __CFArray *x25; struct __CFArray *x26; id x27; BOOL x28; BOOL x29; BOOL x30; struct __CFSet *x31; id x32; id x33; int x34; BOOL x35; BOOL x36; } *)a1 insertedObjectMap:(id)a2;
- (void)CADDatabaseRegisterForDetailedChangeTrackingInSource:(id)a0 reply:(id /* block */)a1;
- (int)preflightObjectID:(id)a0;
- (void)CADDatabaseImportEvents:(id)a0 fromICSData:(id)a1 intoCalendarsWithIDs:(id)a2 optionsMask:(unsigned long long)a3 batchSize:(int)a4 reply:(id /* block */)a5;
- (int)preflightAccessForDeletes:(id)a0 updates:(id)a1;
- (void)CADDatabaseMigrateSubscribedCalendar:(id)a0 toSource:(id)a1 reply:(id /* block */)a2;
- (void)CADDatabaseRollbackWithReply:(id /* block */)a0;
- (void)CADDatabaseMarkChangedObjectIDsConsumedUpToSequenceNumber:(long long)a0 reply:(id /* block */)a1;
- (void)CADDatabaseLastConfirmedSplashScreenVersion:(id /* block */)a0;
- (void)CADDatabaseRebuildOccurrenceCacheWithReply:(id /* block */)a0;
- (void)CADDatabaseCanModifyCalendarDatabase:(id /* block */)a0;
- (id)_insert:(id)a0 delete:(id)a1 update:(id)a2 database:(struct CalDatabase { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; int x1; struct CPRecordStore *x2; struct CalEventOccurrenceCache *x3; struct CalScheduledTaskCache *x4; struct __CFDictionary *x5; struct __CFDictionary *x6; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x7; unsigned int x8; unsigned int x9; struct __CFArray *x10; struct __CFString *x11; struct __CFArray *x12; int x13; int x14; struct __CFString *x15; struct __CFURL *x16; struct __CFString *x17; struct __CFString *x18; int x19; id /* block */ x20; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x21; BOOL x22; struct __CFArray *x23; struct __CFArray *x24; struct __CFArray *x25; struct __CFArray *x26; id x27; BOOL x28; BOOL x29; BOOL x30; struct __CFSet *x31; id x32; id x33; int x34; BOOL x35; BOOL x36; } *)a3 error:(int *)a4;
- (BOOL)_CADDatabaseCanModifyCalendarDatabase;
- (void)CADDatabaseFetchObjectChangesForEntityTypes:(id)a0 insideObject:(id)a1 reply:(id /* block */)a2;
- (void)CADDatabaseFetchChangedObjectIDsSinceSequenceNumber:(long long)a0 reply:(id /* block */)a1;
- (void)CADDatabaseSetShowsDeclinedEvents:(BOOL)a0 reply:(id /* block */)a1;
- (int)_deleteObjects:(id)a0 database:(struct CalDatabase { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; int x1; struct CPRecordStore *x2; struct CalEventOccurrenceCache *x3; struct CalScheduledTaskCache *x4; struct __CFDictionary *x5; struct __CFDictionary *x6; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x7; unsigned int x8; unsigned int x9; struct __CFArray *x10; struct __CFString *x11; struct __CFArray *x12; int x13; int x14; struct __CFString *x15; struct __CFURL *x16; struct __CFString *x17; struct __CFString *x18; int x19; id /* block */ x20; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x21; BOOL x22; struct __CFArray *x23; struct __CFArray *x24; struct __CFArray *x25; struct __CFArray *x26; id x27; BOOL x28; BOOL x29; BOOL x30; struct __CFSet *x31; id x32; id x33; int x34; BOOL x35; BOOL x36; } *)a1;
- (void)CADDatabaseGetChangesSinceSequenceNumber:(int)a0 reply:(id /* block */)a1;
- (void)CADDatabaseExportICSDataForCalendar:(id)a0 options:(unsigned long long)a1 reply:(id /* block */)a2;
- (void)CADDatabaseExportICSDataForCalendarItems:(id)a0 options:(unsigned long long)a1 reply:(id /* block */)a2;
- (void)CADDatabaseGetUUID:(id /* block */)a0;
- (id)_importEvents:(id)a0 data:(id)a1 intoCalendarWithID:(int)a2 optionsMask:(unsigned long long)a3 batchSize:(int)a4 outError:(int *)a5;

@end
