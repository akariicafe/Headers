@class NSArray, NSString, NSMutableArray;

@interface CalCalendarDatabaseReminderMigrationContext : CalReminderMigrationContext <CalPrivacySafePathProvider> {
    NSMutableArray *_storesToDisableReminders;
    NSMutableArray *_storesToDelete;
    NSMutableArray *_storesToSetWasMigrated;
    NSMutableArray *_calendarsToDisableReminders;
    NSMutableArray *_calendarsToClearSyncToken;
    NSMutableArray *_calendarsToDelete;
}

@property (readonly, nonatomic) NSArray *storesToDisableReminders;
@property (readonly, nonatomic) NSArray *storesToDelete;
@property (readonly, nonatomic) NSArray *storesToSetWasMigrated;
@property (readonly, nonatomic) NSArray *calendarsToDisableReminders;
@property (readonly, nonatomic) NSArray *calendarsToClearSyncToken;
@property (readonly, nonatomic) NSArray *calendarsToDelete;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)reminderMigrationContextWithReminderKitProvider:(id)a0;

- (void).cxx_destruct;
- (BOOL)_isCalendarOwnedByExistingStoreToDelete:(void *)a0;
- (void)_removeCalendarsToDeleteInStore:(void *)a0;
- (void)addCalendarToClearSyncToken:(void *)a0;
- (void)addCalendarToDelete:(void *)a0;
- (void)addCalendarToDisableReminders:(void *)a0;
- (void)addStoreToDelete:(void *)a0;
- (void)addStoreToDisableReminders:(void *)a0;
- (void)addStoreToSetWasMigrated:(void *)a0;
- (id)privacySafePathForURLInCalendarDirectory:(id)a0;

@end
