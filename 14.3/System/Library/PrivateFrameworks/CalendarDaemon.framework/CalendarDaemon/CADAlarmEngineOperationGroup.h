@interface CADAlarmEngineOperationGroup : CADOperationGroup <CADAlarmEngineInterface>

+ (BOOL)requiresEventOrReminderAccess;
+ (BOOL)requiresEventAccess;
+ (id)whitelistedBundles;
+ (BOOL)requiresReminderAccess;

- (void)CADDatabaseGetLocationBasedAlarmsWithReply:(id /* block */)a0;
- (void)CADDatabaseGetAlarmWithUUID:(id)a0 reply:(id /* block */)a1;
- (BOOL)_hasAccessToAlarmsOnCalendar:(void *)a0;
- (void)CADDatabaseGetAlarmOccurrencesInRangeFromStart:(id)a0 toEnd:(id)a1 inCalendars:(id)a2 reply:(id /* block */)a3;
- (void)CADDatabaseGetVehicleTriggerAlarmsWithReply:(id /* block */)a0;

@end
