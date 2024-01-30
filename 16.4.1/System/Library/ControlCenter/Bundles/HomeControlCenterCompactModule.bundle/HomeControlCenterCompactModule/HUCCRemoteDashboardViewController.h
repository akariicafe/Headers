@protocol HUCCRemoteDashboardDelegate;

@interface HUCCRemoteDashboardViewController : _UIRemoteViewController <HUHomeControlInterface>

@property (weak, nonatomic) id<HUCCRemoteDashboardDelegate> delegate;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
+ (id)requestViewControllerWithConnectionHandler:(id /* block */)a0;

- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (void)requestDismissal;
- (void)authorizeIfLocked;
- (void)quickControlsPresentationDidUpdate:(BOOL)a0;

@end
