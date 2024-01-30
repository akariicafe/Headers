@class NSURL, NSString, CoreDAVPropFindTask;
@protocol CoreDAVTaskGroupDelegate;

@interface CalDAVUpdateFreeBusySetTaskGroup : CoreDAVTaskGroup <CoreDAVPropFindTaskDelegate, CoreDAVPropPatchTaskDelegate>

@property (retain, nonatomic) NSURL *inboxURL;
@property (retain, nonatomic) NSURL *urlToAdd;
@property (retain, nonatomic) NSString *suffixToFilterOut;
@property (retain, nonatomic) CoreDAVPropFindTask *fetchTask;
@property (nonatomic) int state;
@property (nonatomic) id<CoreDAVTaskGroupDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startTaskGroup;
- (void)taskGroupWillCancelWithError:(id)a0;
- (void)propFindTask:(id)a0 parsedResponses:(id)a1 error:(id)a2;
- (void).cxx_destruct;
- (void)_finishWithError:(id)a0 state:(int)a1;
- (void)propPatchTask:(id)a0 parsedResponses:(id)a1 error:(id)a2;
- (void)_startFetchFreeBusySet;
- (void)_startPropPatchWithURLs:(id)a0;
- (id)initWithAccountInfoProvider:(id)a0 inboxURL:(id)a1 urlToAdd:(id)a2 suffixToFilterOut:(id)a3 taskManager:(id)a4;

@end
