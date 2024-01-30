@class NSMutableArray;

@interface CalDAVGetDelegatesTaskGroup : CalDAVGetDelegatesBaseTaskGroup

@property (nonatomic) int state;
@property (retain, nonatomic) NSMutableArray *nestedGroupPrincipalURLs;

- (void).cxx_destruct;
- (id)initWithAccountInfoProvider:(id)a0 principalURL:(id)a1 taskManager:(id)a2;
- (void)taskGroup:(id)a0 didFinishWithError:(id)a1;
- (void)startTaskGroup;
- (void)task:(id)a0 didFinishWithError:(id)a1;
- (void)_finishWithError:(id)a0 state:(int)a1;
- (void)_getGroupMembershipForURL:(id)a0 state:(int)a1;
- (void)_expandProperties;
- (void)_getChildProperties;

@end
