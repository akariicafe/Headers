@class NSError, NSString;
@protocol CalDAVCalendarSyncDelegate, CalDAVCalendar;

@interface CalDAVCalendarSyncOperation : CalDAVOperation {
    NSError *_savedError;
    NSString *_nextCtag;
    NSString *_nextSyncToken;
    id<CalDAVCalendar> _calendar;
    NSError *_reportJunkError;
    unsigned long long _currentStage;
}

@property (nonatomic) id<CalDAVCalendarSyncDelegate> delegate;
@property (nonatomic) BOOL getScheduleTags;
@property (nonatomic) BOOL getScheduleChanges;

- (void)_finishWithError:(id)a0;
- (void).cxx_destruct;
- (void)_reportJunk;
- (void)containerSyncTask:(id)a0 completedWithNewCTag:(id)a1 newSyncToken:(id)a2 addedOrModified:(id)a3 removed:(id)a4 error:(id)a5;
- (void)containerSyncTask:(id)a0 retrievedAddedOrModifiedActions:(id)a1 removed:(id)a2;
- (id)copyAllLocalURLsInFolderWithURL:(id)a0;
- (id)copyLocalETagsForURLs:(id)a0 inFolderWithURL:(id)a1;
- (BOOL)setLocalETag:(id)a0 forItemWithURL:(id)a1 inFolderWithURL:(id)a2;
- (BOOL)syncDeleteTask:(id)a0 error:(id)a1;
- (BOOL)syncPutTask:(id)a0 completedWithNewETag:(id)a1 error:(id)a2;
- (void)_advanceStage;
- (id)_distantFutureEndDate;
- (void)_performNextStage;
- (void)_processAddedOrModified:(id)a0 removed:(id)a1;
- (void)_splitRecurrences;
- (void)_syncCalendar;
- (void)_syncEventsForMerge;
- (id)initWithPrincipal:(id)a0 calendar:(id)a1 nextCtag:(id)a2 nextSyncToken:(id)a3;
- (void)recurrenceSplitAction:(id)a0 completedWithUpdatedETag:(id)a1 updatedScheduleTag:(id)a2 createdURL:(id)a3 createdETag:(id)a4 createdScheduleTag:(id)a5;
- (void)recurrenceSplitAction:(id)a0 failedWithError:(id)a1;
- (BOOL)setLocalScheduleTag:(id)a0 forItemWithURL:(id)a1 inFolderWithURL:(id)a2;
- (void)syncCalendar;

@end
