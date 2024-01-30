@class MTTimerManager, NSString, MTCCTimerBackgroundViewController, MTCCTimerViewController;

@interface MTCCTimerModule : CCUIAppLauncherModule <MTCCTimerViewControllerDelegate, MTCCTimerBackgroundViewControllerDelegate>

@property (retain, nonatomic) MTTimerManager *timerManager;
@property (retain, nonatomic) MTCCTimerViewController *timerViewController;
@property (retain, nonatomic) MTCCTimerBackgroundViewController *timerBackgroundViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)backgroundViewController;
- (id)contentViewController;
- (void)timerBackgroundViewController:(id)a0 timerDidChange:(id)a1;
- (void)timerViewController:(id)a0 timerDidChange:(id)a1;
- (void)timerDidChange:(id)a0;
- (id)processChangesForNewState:(id)a0;
- (double)defaultDuration;
- (void)setDefaultDuration:(double)a0;
- (void)timerViewControllerButtonTapped:(id)a0 withEvent:(id)a1;
- (void)reloadTimerStateUpdateDuration:(BOOL)a0;
- (id)init;
- (void)reloadTimerState;
- (void)reloadTimerStateAndUpdateDuration;
- (void).cxx_destruct;

@end
