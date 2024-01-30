@class NSURL, NSString;

@interface CalDAVModifyCalendarSharingLevelTaskGroup : CoreDAVTaskGroup <CoreDAVPropPatchTaskDelegate>

@property (nonatomic) int action;
@property (retain, nonatomic) NSURL *url;
@property (nonatomic) int state;
@property (retain, nonatomic) NSURL *publishedURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)finishWithError:(id)a0;
- (void).cxx_destruct;
- (void)startTaskGroup;
- (void)task:(id)a0 didFinishWithError:(id)a1;
- (id)initWithAccountInfoProvider:(id)a0 taskManager:(id)a1;
- (id)initWithSharingAction:(int)a0 atCalendarURL:(id)a1 accountInfoProvider:(id)a2 taskManager:(id)a3;

@end
