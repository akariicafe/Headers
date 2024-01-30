@class NSSet, NSString, NSURL, NSMutableSet;
@protocol CoreDAVTaskGroupDelegate;

@interface CalDAVModifySharedCalendarShareeListTaskGroup : CoreDAVTaskGroup <CoreDAVPostTaskDelegate>

@property (retain, nonatomic) NSSet *shareesToRemove;
@property (retain, nonatomic) NSSet *shareesToSet;
@property (retain, nonatomic) NSURL *calendarURL;
@property (retain, nonatomic) NSString *summary;
@property (retain, nonatomic) NSMutableSet *invalidSharees;
@property (nonatomic) id<CoreDAVTaskGroupDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)startTaskGroup;
- (void)task:(id)a0 didFinishWithError:(id)a1;
- (id)initWithAccountInfoProvider:(id)a0 taskManager:(id)a1;
- (id)generateModificationMessageBody;
- (id)initWithShareesToSet:(id)a0 shareesToRemove:(id)a1 summary:(id)a2 atCalendarURL:(id)a3 accountInfoProvider:(id)a4 taskManager:(id)a5;

@end
