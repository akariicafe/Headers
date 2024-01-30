@class CalDiagInboxCollectionSync;

@interface MobileCalDAVInboxCalendar : MobileCalDAVCalendar

@property (retain, nonatomic) CalDiagInboxCollectionSync *inboxCollectionSyncDiagnostics;

- (BOOL)isScheduleInbox;
- (void).cxx_destruct;
- (id)initWithCalendarURL:(id)a0 calendar:(void *)a1 principal:(id)a2 title:(id)a3;
- (BOOL)shouldCalendarBeHidden;
- (id)etagsForItemURLs:(id)a0;
- (BOOL)updateResourcesFromServer:(id)a0;
- (BOOL)deleteResourcesAtURLs:(id)a0;
- (id)allItemURLs;
- (void)recordDiagnosticsForAccountSync:(id)a0;
- (void *)_copyEventActionWithURL:(id)a0 forCalItemWithUniqueIdentifier:(id)a1;
- (void)setETag:(id)a0 forInvitationAtURL:(id)a1 uniqueIdentifier:(id)a2;
- (BOOL)_removeInvitationWithURL:(id)a0;

@end
