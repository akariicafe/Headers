@class CoreDAVPropFindTask, ICSDocument, NSURL, NSString;
@protocol CoreDAVTaskGroupDelegate;

@interface CalDAVGetOfficeHoursTaskGroup : CoreDAVTaskGroup <CoreDAVPropFindTaskDelegate>

@property (retain, nonatomic) NSURL *inboxURL;
@property (retain, nonatomic) CoreDAVPropFindTask *fetchTask;
@property (retain, nonatomic) ICSDocument *calendarAvailability;
@property (nonatomic) id<CoreDAVTaskGroupDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startTaskGroup;
- (void)_finishWithError:(id)a0;
- (void)propFindTask:(id)a0 parsedResponses:(id)a1 error:(id)a2;
- (void).cxx_destruct;
- (id)initWithAccountInfoProvider:(id)a0 inboxURL:(id)a1 taskManager:(id)a2;

@end
