@protocol SSDittoHostViewControllerDelegate;

@interface SSDittoHostViewController : _UIRemoteViewController <SSRemoteViewControllerServiceToHostInterface>

@property (weak, nonatomic) id<SSDittoHostViewControllerDelegate> delegate;

+ (id)exportedInterface;
+ (BOOL)__shouldHostRemoteTextEffectsWindow;
+ (id)serviceViewControllerInterface;

- (void)dismiss;
- (BOOL)becomeFirstResponder;
- (BOOL)_canShowWhileLocked;
- (id)_serviceProxy;
- (unsigned long long)supportedInterfaceOrientations;
- (void).cxx_destruct;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (void)dismissScreenshotExperience;
- (void)screenshotExperienceHasDismissed;

@end
