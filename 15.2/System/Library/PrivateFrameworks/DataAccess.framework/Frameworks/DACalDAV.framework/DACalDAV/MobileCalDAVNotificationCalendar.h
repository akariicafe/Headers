@class CalDiagNotificationCollectionSync;

@interface MobileCalDAVNotificationCalendar : MobileCalDAVCalendar

@property (retain, nonatomic) CalDiagNotificationCollectionSync *notificationCollectionSyncDiagnostics;

- (BOOL)isNotification;
- (void).cxx_destruct;
- (id)initWithCalendarURL:(id)a0 calendar:(void *)a1 principal:(id)a2 title:(id)a3;
- (BOOL)setEtag:(id)a0 forItemAtURL:(id)a1;
- (BOOL)_removeCalendarItemWithURL:(id)a0;
- (BOOL)shouldCalendarBeHidden;
- (BOOL)setScheduleTag:(id)a0 forItemAtURL:(id)a1;
- (BOOL)setURL:(id)a0 forResourceWithUUID:(id)a1;
- (id)etagsForItemURLs:(id)a0;
- (BOOL)updateResourcesFromServer:(id)a0;
- (id)allItemURLs;
- (Class)appSpecificCalendarItemClass;
- (void)prepareMergeSyncActionsWithCompletionBlock:(id /* block */)a0;
- (void)clearEventChanges;
- (void)prepareSyncActionsWithCompletionBlock:(id /* block */)a0;
- (void)recordDiagnosticsForAccountSync:(id)a0;
- (void *)_copyNotificationWithExternalID:(id)a0;
- (void *)_copyNotificationWithUniqueIdentifier:(id)a0 inCalendar:(void *)a1 orStore:(void *)a2;

@end
