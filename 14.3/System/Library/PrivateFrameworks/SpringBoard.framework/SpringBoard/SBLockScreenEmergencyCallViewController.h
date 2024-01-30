@protocol SBLockScreenEmergencyCallViewControllerDelegate;

@interface SBLockScreenEmergencyCallViewController : SBUIEmergencyCallHostViewController

@property (weak, nonatomic) id<SBLockScreenEmergencyCallViewControllerDelegate> delegate;

- (void)setBackgroundStyle:(long long)a0;
- (void).cxx_destruct;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (id)tintColorForBackgroundStyle:(long long)a0 outBlurRadius:(double *)a1;
- (BOOL)_canShowWhileLocked;
- (void)dismiss;
- (long long)_wallpaperStyleFromUIBackgroundStyle:(long long)a0;

@end
