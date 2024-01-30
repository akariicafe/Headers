@class NSObject;
@protocol OS_dispatch_group, CalDAVAccountPropertyRefreshDelegate;

@interface CalDAVAccountPropertyRefreshOperation : CalDAVOperation {
    NSObject<OS_dispatch_group> *_defaultAlarmGroup;
}

@property (nonatomic) id<CalDAVAccountPropertyRefreshDelegate> delegate;
@property (nonatomic) BOOL fetchPrincipalSearchProperties;

- (id)propPatchForProperty:(id)a0 value:(id)a1;
- (void)sendLocallyChangedPropertiesIfNeeded;
- (id)initWithPrincipal:(id)a0;
- (void)getAccountPropertiesTask:(id)a0 completedWithError:(id)a1;
- (BOOL)shouldKeepDefaultAlarmError:(id)a0;
- (void)refreshProperties;
- (BOOL)shouldRefreshDefaultAlarms;
- (void)propFindTask:(id)a0 parsedResponses:(id)a1 error:(id)a2;
- (void)_finishCalDAVAccountPropertyRefreshOperationWithError:(id)a0;
- (void)_refreshDefaultAlarms;
- (void).cxx_destruct;
- (void)_reallyRefreshProperties;
- (id)_copyHomePropertiesPropFindElements;

@end
