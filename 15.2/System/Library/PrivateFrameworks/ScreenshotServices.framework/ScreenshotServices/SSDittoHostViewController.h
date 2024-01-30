@protocol SSDittoHostViewControllerDelegate;

@interface SSDittoHostViewController : _UIRemoteViewController <SSRemoteViewControllerServiceToHostInterface>

@property (weak, nonatomic) id<SSDittoHostViewControllerDelegate> delegate;

+ (id)serviceViewControllerInterface;
+ (BOOL)__shouldHostRemoteTextEffectsWindow;
+ (id)exportedInterface;

- (void)viewServiceDidTerminateWithError:(id)a0;
- (void)dismiss;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (id)_serviceProxy;
- (BOOL)becomeFirstResponder;
- (void)screenshotExperienceHasDismissed;
- (void)dismissScreenshotExperience;

@end
