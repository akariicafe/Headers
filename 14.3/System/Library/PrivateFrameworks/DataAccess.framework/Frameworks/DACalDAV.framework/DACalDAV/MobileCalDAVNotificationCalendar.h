@class CalDiagNotificationCollectionSync;

@interface MobileCalDAVNotificationCalendar : MobileCalDAVCalendar

@property (retain, nonatomic) CalDiagNotificationCollectionSync *notificationCollectionSyncDiagnostics;

- (id)etagsForItemURLs:(id)a0;
- (BOOL)updateResourcesFromServer:(id)a0;
- (id)initWithCalendarURL:(id)a0 calendar:(void *)a1 principal:(id)a2 title:(id)a3;
- (void).cxx_destruct;
- (id)allItemURLs;
- (Class)appSpecificCalendarItemClass;
- (void)prepareMergeSyncActionsWithCompletionBlock:(id /* block */)a0;
- (void)clearEventChanges;
- (void)prepareSyncActionsWithCompletionBlock:(id /* block */)a0;
- (void)recordDiagnosticsForAccountSync:(id)a0;
- (void *)_copyNotificationWithExternalID:(id)a0;
- (void *)_copyNotificationWithUniqueIdentifier:(id)a0 inCalendar:(void *)a1 orStore:(void *)a2;
- (BOOL)_handleInviteNotification:(id)a0 withResource:(id)a1 uid:(id)a2;
- (void)_handleInviteReply:(id)a0 withResource:(id)a1 owningNotification:(id)a2 uid:(id)a3;
- (BOOL)_handleResourceChanged:(id)a0 withResource:(id)a1 uid:(id)a2;
- (void *)_copyCalendarForReplyItem:(id)a0;
- (void *)_copyCalItemFromAnyCalendarWithExternalID:(id)a0;
- (void *)_createResourceChange:(id)a0 withType:(unsigned int)a1 forNotification:(void *)a2 withRecurrenceID:(id)a3;
- (void *)_createResourceChange:(id)a0 withType:(unsigned int)a1 forNotification:(void *)a2;
- (id)_changedAttributesFromCalendarChanges:(id)a0;
- (BOOL)setEtag:(id)a0 forItemAtURL:(id)a1;
- (BOOL)_removeCalendarItemWithURL:(id)a0;
- (BOOL)shouldCalendarBeHidden;
- (BOOL)isNotification;
- (BOOL)setScheduleTag:(id)a0 forItemAtURL:(id)a1;
- (BOOL)setURL:(id)a0 forResourceWithUUID:(id)a1;

@end
