@class NSURL, NSSet, NSString;

@interface CalDAVRetrieveSharedCalendarShareesTaskGroup : CoreDAVTaskGroup <CoreDAVPropFindTaskDelegate>

@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) NSSet *sharees;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)startTaskGroup;
- (void)task:(id)a0 didFinishWithError:(id)a1;
- (id)initWithAccountInfoProvider:(id)a0 taskManager:(id)a1;
- (id)initWithCalendarURL:(id)a0 accountInfoProvider:(id)a1 taskManager:(id)a2;

@end
