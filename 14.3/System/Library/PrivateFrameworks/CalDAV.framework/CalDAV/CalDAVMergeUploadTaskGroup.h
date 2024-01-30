@class CalDAVBulkUploadTaskGroup;
@protocol CalDAVCalendar, CalDAVPrincipal;

@interface CalDAVMergeUploadTaskGroup : CoreDAVTaskGroup

@property (retain, nonatomic) CalDAVBulkUploadTaskGroup *uploadTaskGroup;
@property (retain, nonatomic) id<CalDAVCalendar> calendar;
@property (retain, nonatomic) id<CalDAVPrincipal> principal;
@property (nonatomic) BOOL shouldTrySyncTokenForBulkUpload;

- (void).cxx_destruct;
- (void)dealloc;
- (void)cancelTaskGroup;
- (void)startTaskGroup;
- (id)dataContentType;
- (id)initWithCalendar:(id)a0 principal:(id)a1 accountInfoProvider:(id)a2 taskManager:(id)a3;
- (void)_performBulkUpload;
- (void)_performRegularUpload;

@end
