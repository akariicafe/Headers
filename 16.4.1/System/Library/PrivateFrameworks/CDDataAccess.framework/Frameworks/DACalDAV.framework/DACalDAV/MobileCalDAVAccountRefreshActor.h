@class CalDiagAccountSync, NSString, NSArray, NSMutableDictionary, DATransaction, NSObject, CalDAVRefreshContext, NSMutableSet, MobileCalDAVAccount, NSMutableArray;
@protocol OS_dispatch_group;

@interface MobileCalDAVAccountRefreshActor : NSObject <CalDAVAccountPropertyRefreshDelegate, CalDAVCalendarPropertyRefreshDelegate, CalDAVCalendarSyncDelegate, CalDAVAccountDelegatesRefreshDelegate> {
    DATransaction *_transaction;
}

@property (weak, nonatomic) MobileCalDAVAccount *account;
@property (retain, nonatomic) CalDAVRefreshContext *context;
@property (nonatomic) BOOL shouldCancel;
@property (nonatomic) BOOL didFinish;
@property (nonatomic) BOOL refreshing;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (retain, nonatomic) NSMutableDictionary *pathsToCTags;
@property (retain, nonatomic) NSMutableDictionary *pathsToSyncTokens;
@property (retain, nonatomic) NSMutableArray *calendarsToRefresh;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *outstandingOperationGroup;
@property (retain, nonatomic) NSMutableSet *outstandingTaskGroups;
@property (retain, nonatomic) NSMutableSet *outstandingTasks;
@property (nonatomic) int state;
@property (retain, nonatomic) NSString *calendarHomeSyncToken;
@property (retain, nonatomic) CalDiagAccountSync *accountSyncDiagnostics;
@property (retain, nonatomic) NSArray *attachmentUUIDsToUpload;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)refresh;
- (void)dealloc;
- (void)teardown;
- (void).cxx_destruct;
- (id)initWithAccount:(id)a0 context:(id)a1;
- (void)cancelWithCompletion:(id /* block */)a0;
- (id)_powerLogInfoDictionary;
- (void)calendarRefreshForPrincipal:(id)a0 completedWithNewCTags:(id)a1 newSyncTokens:(id)a2 calendarHomeSyncToken:(id)a3 updatedCalendars:(id)a4 error:(id)a5;
- (void)calendarSyncForPrincipal:(id)a0 calendar:(id)a1 completedWithError:(id)a2;
- (void)propertyRefreshForPrincipal:(id)a0 completedWithError:(id)a1;
- (id)_refreshedSyncTokenForCalendar:(id)a0;
- (void)_calendarCollectionsWereRefreshed;
- (void)_clearMoveChange:(id)a0;
- (void)_handleMoveTaskComplete:(id)a0 moveItem:(id)a1;
- (void)_refreshAccountProperties;
- (void)_refreshCalendarProperties;
- (void)_refreshDelegateAccountProperties;
- (void)_refreshRegularCalendars;
- (BOOL)_refreshShouldContinue;
- (void)_refreshSpecialCalendars;
- (id)_refreshedCtagForCalendar:(id)a0;
- (BOOL)_sendMoveForItem:(id)a0;
- (void)_sendMoveTasks;
- (void)_sendResultToAccount;
- (void)_syncCalendar:(id)a0;
- (void)_teardownAllOutstandingOperations;
- (void)_uploadAttachments;
- (void)_waitForStateTransition;
- (void)delegateRefreshForPrincipal:(id)a0 completedWithError:(id)a1;
- (id)_attachmentUUIDsToUpload;

@end
