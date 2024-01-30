@class SBBiometricMonitorView;

@interface SBBiometricMonitorViewController : UIViewController

@property (readonly, retain, nonatomic) SBBiometricMonitorView *monitorView;

- (void)loadView;

@end
