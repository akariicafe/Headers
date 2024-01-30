@protocol CalDAVAccountPropertyRefreshDelegate;

@interface CalDAVAccountPropertyRefreshOperation : CalDAVOperation

@property (nonatomic) id<CalDAVAccountPropertyRefreshDelegate> delegate;
@property (nonatomic) BOOL fetchPrincipalSearchProperties;

- (void)refreshProperties;
- (void)getAccountPropertiesTask:(id)a0 completedWithError:(id)a1;

@end
