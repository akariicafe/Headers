@class NSObject;
@protocol OS_dispatch_group, CalDAVAccountPropertyRefreshDelegate;

@interface CalDAVAccountPropertyRefreshOperation : CalDAVOperation {
    NSObject<OS_dispatch_group> *_defaultAlarmGroup;
}

@property (nonatomic) id<CalDAVAccountPropertyRefreshDelegate> delegate;
@property (nonatomic) BOOL fetchPrincipalSearchProperties;

- (void)_reallyRefreshProperties;
- (id)propPatchForProperty:(id)a0 value:(id)a1;
- (void).cxx_destruct;
- (void)refreshProperties;
- (void)getAccountPropertiesTask:(id)a0 completedWithError:(id)a1;
- (id)initWithPrincipal:(id)a0;
- (void)sendLocallyChangedPropertiesIfNeeded;

@end
