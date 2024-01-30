@class NSString, SBLockScreenTemperatureWarningView;

@interface SBLockScreenTemperatureWarningViewController : SBLockOverlayViewController {
    SBLockScreenTemperatureWarningView *_warningView;
}

@property (readonly, weak, nonatomic) NSString *slideToUnlockText;

- (void)loadView;
- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;

@end
