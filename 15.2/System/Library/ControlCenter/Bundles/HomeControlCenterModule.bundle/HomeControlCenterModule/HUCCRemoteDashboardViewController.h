@protocol HUCCRemoteDashboardDelegate;

@interface HUCCRemoteDashboardViewController : _UIRemoteViewController <HUHomeControlInterface>

@property (weak, nonatomic) id<HUCCRemoteDashboardDelegate> delegate;

+ (id)serviceViewControllerInterface;
+ (id)requestViewControllerWithConnectionHandler:(id /* block */)a0;
+ (id)exportedInterface;

- (void)viewServiceDidTerminateWithError:(id)a0;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)quickControlsPresentationDidUpdate:(BOOL)a0;
- (void)authorizeIfLocked;

@end
