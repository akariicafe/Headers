@class NSString, CalDAVPrincipalEmailDetailsResult, NSURL, NSSet;

@interface CalDAVGetPrincipalEmailDetailsTaskGroup : CoreDAVTaskGroup <CoreDAVTaskDelegate>

@property (retain, nonatomic) CalDAVPrincipalEmailDetailsResult *principalResult;
@property (retain, nonatomic) NSURL *principalURL;
@property (readonly, retain, nonatomic) NSString *displayName;
@property (readonly, retain, nonatomic) NSSet *addresses;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_finishWithError:(id)a0;
- (void)task:(id)a0 didFinishWithError:(id)a1;
- (void)startTaskGroup;
- (void).cxx_destruct;
- (id)initWithAccountInfoProvider:(id)a0 principalURL:(id)a1 taskManager:(id)a2;
- (void)_processPropFind:(id)a0;

@end
