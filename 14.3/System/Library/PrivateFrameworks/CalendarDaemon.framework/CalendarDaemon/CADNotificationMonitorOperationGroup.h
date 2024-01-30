@interface CADNotificationMonitorOperationGroup : CADOperationGroup <CADNotificationMonitorInterface>

+ (BOOL)requiresEventOrReminderAccess;
+ (BOOL)requiresEventAccess;
+ (id)whitelistedBundles;
+ (BOOL)requiresReminderAccess;

- (void)CADResourceChange:(id)a0 setAlertedWithError:(id /* block */)a1;
- (void)CADDatabaseGetInboxRepliedSectionItems:(id /* block */)a0;
- (void)CADDatabaseGetResourceChanges:(id /* block */)a0;
- (void)CADDatabaseGetSharedCalendarInvitationsWithReply:(id /* block */)a0;
- (void)CADEventSetInvitationStatus:(int)a0 forEvent:(id)a1 error:(id /* block */)a2;
- (void)CADInviteReplyNotification:(id)a0 setAlertedWithError:(id /* block */)a1;
- (void)CADDatabaseGetNotificationCountForSourceWithExternalIdentifier:(id)a0 excludingDelegateSources:(BOOL)a1 filteredByShowsNotificationsFlag:(BOOL)a2 reply:(id /* block */)a3;
- (void)CADCalendarSetClearedFromNotificationCenter:(id)a0 error:(id /* block */)a1;
- (void)CADDatabaseGetInviteReplyNotifications:(id /* block */)a0;
- (void)CADCalendar:(id)a0 setAlertedWithError:(id /* block */)a1;
- (void)CADEvent:(id)a0 setAlertedWithError:(id /* block */)a1;
- (void)CADDatabaseGetEventNotificationItemsFilteredByShowsNotificationsFlag:(BOOL)a0 calculateEarliestExpirationDate:(BOOL)a1 reply:(id /* block */)a2;

@end
