@interface ICDocCamNavigationController : UINavigationController

- (BOOL)shouldAutorotate;
- (BOOL)_canShowWhileLocked;
- (long long)_preferredModalPresentationStyle;
- (unsigned long long)supportedInterfaceOrientations;
- (void)prepareForDismissal;
- (id)initWithImageCache:(id)a0 docCamDelegate:(id)a1 remoteDocCamDelegate:(id)a2;

@end
