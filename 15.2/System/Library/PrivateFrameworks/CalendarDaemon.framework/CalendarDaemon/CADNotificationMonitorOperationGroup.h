@interface CADNotificationMonitorOperationGroup : CADOperationGroup <CADNotificationMonitorInterface>

+ (BOOL)requiresEventAccess;
+ (BOOL)requiresReminderAccess;
+ (id)whitelistedBundles;
+ (BOOL)requiresEventOrReminderAccess;

- (void)CADDatabaseGetInboxRepliedSectionItems:(id /* block */)a0;
- (void)CADDatabaseGetNotificationCountForSourceWithExternalIdentifier:(id)a0 excludingDelegateSources:(BOOL)a1 filteredByShowsNotificationsFlag:(BOOL)a2 reply:(id /* block */)a3;
- (void)CADInviteReplyNotification:(id)a0 setAlertedWithError:(id /* block */)a1;
- (void)CADDatabaseGetInviteReplyNotifications:(id /* block */)a0;
- (void)CADCalendarSetClearedFromNotificationCenter:(id)a0 error:(id /* block */)a1;
- (void)CADDatabaseGetSharedCalendarInvitationsWithReply:(id /* block */)a0;
- (void)CADEventSetInvitationStatus:(int)a0 forEvents:(id)a1 error:(id /* block */)a2;
- (void)CADDatabaseGetResourceChanges:(id /* block */)a0;
- (void)CADDatabaseGetEventNotificationItemsAfterDate:(id)a0 filteredByShowsNotificationsFlag:(BOOL)a1 calculateEarliestExpirationDate:(BOOL)a2 reply:(id /* block */)a3;
- (void)CADResourceChange:(id)a0 setAlertedWithError:(id /* block */)a1;
- (void)CADEvent:(id)a0 setAlertedWithError:(id /* block */)a1;
- (void)CADCalendar:(id)a0 setAlertedWithError:(id /* block */)a1;

@end
