@class NSSet, NSString, NSURL, NSMutableSet;
@protocol CoreDAVTaskGroupDelegate;

@interface CalDAVModifySharedCalendarShareeListTaskGroup : CoreDAVTaskGroup <CoreDAVPostTaskDelegate>

@property (retain, nonatomic) NSSet *shareesToRemove;
@property (retain, nonatomic) NSSet *shareesToSet;
@property (retain, nonatomic) NSURL *calendarURL;
@property (retain, nonatomic) NSString *summary;
@property (retain, nonatomic) NSMutableSet *invalidSharees;
@property BOOL muteNotifications;
@property (nonatomic) id<CoreDAVTaskGroupDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startTaskGroup;
- (void)task:(id)a0 didFinishWithError:(id)a1;
- (id)initWithAccountInfoProvider:(id)a0 taskManager:(id)a1;
- (void).cxx_destruct;
- (id)generateModificationMessageBody;
- (id)initWithShareesToSet:(id)a0 shareesToRemove:(id)a1 muteNotifications:(BOOL)a2 summary:(id)a3 atCalendarURL:(id)a4 accountInfoProvider:(id)a5 taskManager:(id)a6;

@end
