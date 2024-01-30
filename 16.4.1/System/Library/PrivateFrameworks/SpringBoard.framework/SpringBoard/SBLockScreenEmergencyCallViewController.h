@protocol SBLockScreenEmergencyCallViewControllerDelegate;

@interface SBLockScreenEmergencyCallViewController : SBUIEmergencyCallHostViewController

@property (weak, nonatomic) id<SBLockScreenEmergencyCallViewControllerDelegate> delegate;

- (void)dismiss;
- (void)setBackgroundStyle:(long long)a0;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (id)tintColorForBackgroundStyle:(long long)a0 outBlurRadius:(double *)a1;
- (long long)_wallpaperStyleFromUIBackgroundStyle:(long long)a0;

@end
