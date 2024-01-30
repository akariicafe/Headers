@interface CADDatabaseOperationGroup : CADOperationGroup <CADDatabaseInterface>

+ (BOOL)requiresEventOrReminderAccess;
+ (BOOL)requiresEventAccess;
+ (BOOL)requiresReminderAccess;

- (void)CADDatabaseRegisterForDetailedChangeTrackingInSource:(id)a0 reply:(id /* block */)a1;
- (void)CADDatabaseFetchChangedObjectIDsSinceSequenceNumber:(long long)a0 reply:(id /* block */)a1;
- (struct __CFSet { } *)_copyToIntCFSetRef:(id)a0;
- (void)CADDatabaseLastConfirmedSplashScreenVersion:(id /* block */)a0;
- (void)CADDatabaseGetChangesSinceSequenceNumber:(int)a0 reply:(id /* block */)a1;
- (BOOL)_CADDatabaseCanModifyCalendarDatabase;
- (void)CADDatabaseExportICSDataForCalendar:(id)a0 options:(long long)a1 reply:(id /* block */)a2;
- (void)CADDatabaseGetNextAssignableColorWithReply:(id /* block */)a0;
- (void)CADDatabaseGetUUID:(id /* block */)a0;
- (void)CADDatabaseCanModifyCalendarDatabase:(id /* block */)a0;
- (void)CADDatabaseCommitWithReply:(id /* block */)a0;
- (struct __CFArray { } *)_copyToIntCFArrayRef:(id)a0;
- (void)CADDatabaseGetSequenceNumber:(id /* block */)a0;
- (void)CADDatabaseUnregisterForDetailedChangeTracking:(id /* block */)a0;
- (id)_importEvents:(id)a0 data:(id)a1 intoCalendarWithID:(int)a2 optionsMask:(unsigned long long)a3 batchSize:(int)a4 outError:(int *)a5;
- (void)CADDatabaseMarkIndividualChangesConsumed:(id)a0 reply:(id /* block */)a1;
- (void)CADDatabaseExportICSDataForCalendarItems:(id)a0 options:(unsigned long long)a1 reply:(id /* block */)a2;
- (void)CADDatabaseSetShowsDeclinedEvents:(BOOL)a0 reply:(id /* block */)a1;
- (void)CADDatabaseRollbackWithReply:(id /* block */)a0;
- (void)CADDatabaseSaveWithReply:(id /* block */)a0;
- (void)CADDatabaseRebuildOccurrenceCacheWithReply:(id /* block */)a0;
- (void)CADDatabaseImportEvents:(id)a0 fromICSData:(id)a1 intoCalendarsWithIDs:(id)a2 optionsMask:(unsigned long long)a3 batchSize:(int)a4 reply:(id /* block */)a5;
- (void)CADDatabaseFetchObjectChangesForEntityTypes:(id)a0 insideObject:(id)a1 reply:(id /* block */)a2;
- (void)CADDatabaseMarkChangedObjectIDsConsumedUpToSequenceNumber:(long long)a0 reply:(id /* block */)a1;
- (void)CADDatabaseGetChangedEntityIDsSinceTimestamp:(double)a0 reply:(id /* block */)a1;

@end
