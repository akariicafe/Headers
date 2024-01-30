@protocol SSDittoHostViewControllerDelegate;

@interface SSDittoHostViewController : _UIRemoteViewController <SSRemoteViewControllerServiceToHostInterface>

@property (weak, nonatomic) id<SSDittoHostViewControllerDelegate> delegate;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
+ (BOOL)__shouldHostRemoteTextEffectsWindow;

- (BOOL)becomeFirstResponder;
- (void).cxx_destruct;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (id)_serviceProxy;
- (unsigned long long)supportedInterfaceOrientations;
- (BOOL)_canShowWhileLocked;
- (void)dismiss;
- (void)screenshotExperienceHasDismissed;
- (void)dismissScreenshotExperience;

@end
