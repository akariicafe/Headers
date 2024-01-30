@interface CalDAVGetGrantedDelegatesTaskGroup : CalDAVGetDelegatesBaseTaskGroup

@property (nonatomic) int state;
@property (nonatomic) BOOL fetchPrincipalDetails;

- (id)initWithAccountInfoProvider:(id)a0 principalURL:(id)a1 taskManager:(id)a2;
- (void)taskGroup:(id)a0 didFinishWithError:(id)a1;
- (void)startTaskGroup;
- (void)task:(id)a0 didFinishWithError:(id)a1;
- (void)_finishWithError:(id)a0 state:(int)a1;
- (void)_getChildProperties;
- (id)_urlAppendingSegmentWithAllowWrite:(BOOL)a0;
- (void)_expandPropertiesWithAllowWrite:(BOOL)a0;
- (void)_fetchOnlyHrefs;

@end
