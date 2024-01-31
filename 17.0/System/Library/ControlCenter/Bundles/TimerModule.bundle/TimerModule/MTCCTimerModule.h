@class MTTimerManager, NSString, MTCCTimerBackgroundViewController, MTCCTimer, MTCCTimerViewController;

@interface MTCCTimerModule : CCUIAppLauncherModule <MTCCTimerViewControllerDelegate, MTCCTimerBackgroundViewControllerDelegate>

@property (retain, nonatomic) MTTimerManager *timerManager;
@property (retain, nonatomic) MTCCTimerViewController *timerViewController;
@property (retain, nonatomic) MTCCTimerBackgroundViewController *timerBackgroundViewController;
@property (retain, nonatomic) MTCCTimer *currentTimer;
@property (nonatomic) BOOL addButtonTapped;
@property (nonatomic) BOOL canOverrideCurrent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)firstThatMatches:(id)a0 fromTimers:(id)a1;

- (id)launchURLForTouchType:(long long)a0;
- (id)init;
- (void)timerViewController:(id)a0 timerDidChange:(id)a1;
- (void)timerBackgroundViewControllerAddButtonTapped:(id)a0 withEvent:(id)a1;
- (id)contentViewController;
- (double)defaultDuration;
- (void)reloadTimerState;
- (void)reloadTimerStateUpdateDuration:(BOOL)a0;
- (void)timerViewController:(id)a0 didExpand:(BOOL)a1;
- (id)backgroundViewController;
- (id)processChangesForNewState:(id)a0;
- (void)timerDidChange:(id)a0;
- (void).cxx_destruct;
- (void)setDefaultDuration:(double)a0;
- (void)timerViewControllerButtonTapped:(id)a0 withEvent:(id)a1;
- (void)timerBackgroundViewController:(id)a0 timerDidChange:(id)a1;
- (void)reloadTimerStateAndUpdateDuration;

@end
