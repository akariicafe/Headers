@class MTTimerManager, NSString, MTCCTimerBackgroundViewController, MTCCTimerViewController;

@interface MTCCTimerModule : CCUIAppLauncherModule <MTCCTimerViewControllerDelegate, MTCCTimerBackgroundViewControllerDelegate>

@property (retain, nonatomic) MTTimerManager *timerManager;
@property (retain, nonatomic) MTCCTimerViewController *timerViewController;
@property (retain, nonatomic) MTCCTimerBackgroundViewController *timerBackgroundViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setDefaultDuration:(double)a0;
- (id)backgroundViewController;
- (void)reloadTimerStateUpdateDuration:(BOOL)a0;
- (id)init;
- (void)timerDidChange:(id)a0;
- (void).cxx_destruct;
- (id)processChangesForNewState:(id)a0;
- (void)timerViewControllerButtonTapped:(id)a0 withEvent:(id)a1;
- (id)contentViewController;
- (void)timerBackgroundViewController:(id)a0 timerDidChange:(id)a1;
- (void)timerViewController:(id)a0 timerDidChange:(id)a1;
- (void)reloadTimerState;
- (void)reloadTimerStateAndUpdateDuration;
- (double)defaultDuration;

@end
