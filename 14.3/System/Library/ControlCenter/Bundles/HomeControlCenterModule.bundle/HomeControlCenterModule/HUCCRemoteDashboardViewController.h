@protocol HUCCRemoteDashboardDelegate;

@interface HUCCRemoteDashboardViewController : _UIRemoteViewController <HUHomeControlInterface>

@property (weak, nonatomic) id<HUCCRemoteDashboardDelegate> delegate;

+ (id)requestViewControllerWithConnectionHandler:(id /* block */)a0;
+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void).cxx_destruct;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (BOOL)_canShowWhileLocked;
- (void)quickControlsPresentationDidUpdate:(BOOL)a0;
- (void)authorizeIfLocked;

@end
