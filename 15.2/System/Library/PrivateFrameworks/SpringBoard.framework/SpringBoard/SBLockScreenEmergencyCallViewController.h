@protocol SBLockScreenEmergencyCallViewControllerDelegate;

@interface SBLockScreenEmergencyCallViewController : SBUIEmergencyCallHostViewController

@property (weak, nonatomic) id<SBLockScreenEmergencyCallViewControllerDelegate> delegate;

- (void)setBackgroundStyle:(long long)a0;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (void)dismiss;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (id)tintColorForBackgroundStyle:(long long)a0 outBlurRadius:(double *)a1;
- (long long)_wallpaperStyleFromUIBackgroundStyle:(long long)a0;

@end
