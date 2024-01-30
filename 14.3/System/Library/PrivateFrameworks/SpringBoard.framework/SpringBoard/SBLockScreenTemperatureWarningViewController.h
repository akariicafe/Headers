@class NSString, SBLockScreenTemperatureWarningView;

@interface SBLockScreenTemperatureWarningViewController : SBLockOverlayViewController {
    SBLockScreenTemperatureWarningView *_warningView;
}

@property (readonly, weak, nonatomic) NSString *slideToUnlockText;

- (void).cxx_destruct;
- (void)loadView;
- (id)initWithNibName:(id)a0 bundle:(id)a1;

@end
