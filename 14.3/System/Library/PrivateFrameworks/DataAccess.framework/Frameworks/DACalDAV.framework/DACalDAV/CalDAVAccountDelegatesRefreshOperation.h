@protocol CalDAVAccountDelegatesRefreshDelegate;

@interface CalDAVAccountDelegatesRefreshOperation : CalDAVOperation

@property (nonatomic) id<CalDAVAccountDelegatesRefreshDelegate> mdelegate;

- (void)refreshDelegates;
- (void)taskGroup:(id)a0 didFinishWithError:(id)a1;

@end
