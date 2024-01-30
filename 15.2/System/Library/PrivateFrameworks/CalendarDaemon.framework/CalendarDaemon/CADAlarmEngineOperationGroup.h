@interface CADAlarmEngineOperationGroup : CADOperationGroup <CADAlarmEngineInterface>

+ (BOOL)requiresEventAccess;
+ (BOOL)requiresReminderAccess;
+ (id)whitelistedBundles;
+ (BOOL)requiresEventOrReminderAccess;

- (BOOL)_hasAccessToAlarmsOnCalendar:(void *)a0;
- (void)CADDatabaseGetLocationBasedAlarmsWithReply:(id /* block */)a0;
- (void)CADDatabaseGetAlarmWithUUID:(id)a0 reply:(id /* block */)a1;
- (void)CADDatabaseGetAlarmOccurrencesInRangeFromStart:(id)a0 toEnd:(id)a1 inCalendars:(id)a2 reply:(id /* block */)a3;
- (void)CADDatabaseGetVehicleTriggerAlarmsWithReply:(id /* block */)a0;

@end
