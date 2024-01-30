@class CalDAVGetPrincipalEmailDetailsTaskGroup, NSSet, NSURL, NSMutableSet, NSMutableArray, NSString;

@interface CalDAVGetDelegatesBaseTaskGroup : CoreDAVTaskGroup <CoreDAVTaskDelegate, CoreDAVTaskGroupDelegate>

@property (retain, nonatomic) CalDAVGetPrincipalEmailDetailsTaskGroup *getPrincipalEmailDetailsTaskGroup;
@property (retain, nonatomic) NSURL *principalURL;
@property (retain, nonatomic) NSMutableArray *readPrincipalURLs;
@property (retain, nonatomic) NSMutableArray *writePrincipalURLs;
@property (retain, nonatomic) NSMutableSet *writeDetails;
@property (retain, nonatomic) NSMutableSet *readDetails;
@property (nonatomic) BOOL serverSupportsExpandPropertyReport;
@property (readonly, retain, nonatomic) NSSet *readOnlyPrincipalDetails;
@property (readonly, retain, nonatomic) NSSet *readWritePrincipalDetails;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)task:(id)a0 didFinishWithError:(id)a1;
- (void).cxx_destruct;
- (void)taskGroup:(id)a0 didFinishWithError:(id)a1;
- (id)initWithAccountInfoProvider:(id)a0 principalURL:(id)a1 taskManager:(id)a2;
- (id)_mappingsForPrincipalDetails;
- (id)_popFromArray:(id)a0;
- (void)_getPrincipalDetailsForURL:(id)a0;
- (void)_processDetailsFromMultiStatus:(id)a0 allowWrite:(BOOL)a1;

@end
