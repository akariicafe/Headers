@class NSSet, CoreDAVPropFindTask, NSURL, NSString;

@interface CoreDAVUpdateACLTaskGroup : CoreDAVTaskGroup <CoreDAVPropFindTaskDelegate, CoreDAVACLTaskDelegate>

@property (retain, nonatomic) NSSet *aceItems;
@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) CoreDAVPropFindTask *fetchTask;
@property (nonatomic) int state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)taskGroupWillCancelWithError:(id)a0;
- (void)task:(id)a0 didFinishWithError:(id)a1;
- (void)startTaskGroup;
- (void).cxx_destruct;
- (void)_startGetACL;
- (void)_finishWithError:(id)a0 state:(int)a1;
- (void)_startSetACLWithAccessControlEntities:(id)a0;
- (id)initWithAccountInfoProvider:(id)a0 aceItems:(id)a1 url:(id)a2 taskManager:(id)a3;

@end
