@class MobileCalDAVAccount;

@interface MobileCalDAVNotificationCalendar : MobileCalDAVCalendar

@property (readonly, nonatomic) MobileCalDAVAccount *daAccount;
@property (nonatomic) int mostRecentNotificationChangeIndex;

- (id)_notifications;
- (id)etagsForItemURLs:(id)a0;
- (BOOL)updateResourcesFromServer:(id)a0;
- (id)daPrincipal;
- (id)allItemURLs;
- (Class)appSpecificCalendarItemClass;
- (void)prepareMergeSyncActionsWithCompletionBlock:(id /* block */)a0;
- (void)clearEventChanges;
- (void)prepareSyncActionsWithCompletionBlock:(id /* block */)a0;
- (void)recordDiagnosticsForAccountSync:(id)a0;
- (id)_copyNotificationWithExternalID:(id)a0;
- (BOOL)_handleInviteNotification:(id)a0 withResource:(id)a1 uid:(id)a2;
- (BOOL)_handleInviteReply:(id)a0 withResource:(id)a1 owningNotification:(id)a2 uid:(id)a3;
- (BOOL)_handleResourceChanged:(id)a0 withResource:(id)a1 uid:(id)a2;
- (id)_changedAttributesFromCalendarChanges:(id)a0;
- (BOOL)setEtag:(id)a0 forItemAtURL:(id)a1;
- (BOOL)_removeCalendarItemWithURL:(id)a0;
- (BOOL)isNotification;
- (BOOL)setScheduleTag:(id)a0 forItemAtURL:(id)a1;
- (BOOL)setURL:(id)a0 forResourceWithUUID:(id)a1;
- (id)initWithCalendarURL:(id)a0 list:(id)a1 principal:(id)a2 title:(id)a3;
- (id)_accountLoggingDescription;
- (id)_copyNotificationWithUniqueIdentifier:(id)a0;

@end
