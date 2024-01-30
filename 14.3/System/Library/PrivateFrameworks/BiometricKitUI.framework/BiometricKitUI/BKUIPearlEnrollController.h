@class BKUIOrientationStateHandler, BKUIPearlCoachingController, NSString, BKUIPearlEnrollViewController, UINavigationBar;
@protocol BKUIPearlEnrollControllerDelegate, NSObject;

@interface BKUIPearlEnrollController : PSViewController <BKUIPearlCoachingControllerDelegate, BKUIPearlEnrollViewControllerDelegate> {
    BOOL _systemRotationAnimating;
    long long _orientation;
}

@property (retain, nonatomic) BKUIPearlEnrollViewController *enrollViewController;
@property (retain, nonatomic) BKUIPearlCoachingController *coachingController;
@property (nonatomic) BOOL hasBeenPortrait;
@property (retain, nonatomic) id<NSObject> rotationChangeToken;
@property (retain, nonatomic) id<NSObject> rotationLockToken;
@property (readonly, nonatomic) UINavigationBar *navbarCopy;
@property (retain, nonatomic) BKUIOrientationStateHandler *orientationStateHandler;
@property (weak, nonatomic) id<BKUIPearlEnrollControllerDelegate> delegate;
@property (nonatomic) BOOL inBuddy;
@property (nonatomic) BOOL inDemo;
@property (nonatomic) BOOL inSheet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)preloadWithCompletion:(id /* block */)a0;
+ (BOOL)isDisplayZoomEnabled;
+ (BOOL)isPearlAvailable;
+ (BOOL)isPearlInterlocked;

- (long long)preferredStatusBarStyle;
- (id)navigationItem;
- (BOOL)prefersHomeIndicatorAutoHidden;
- (id)init;
- (BOOL)canBeShownFromSuspendedState;
- (void).cxx_destruct;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;
- (void)_startObserving;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)isModalInPresentation;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)resetLayout;
- (void)viewDidDisappear:(BOOL)a0;
- (void)deviceOrientationDidChange:(id)a0;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)pearlEnrollViewController:(id)a0 finishedEnrollWithError:(id)a1;
- (void)pearlEnrollControllerCompleted:(id)a0;
- (id)initWithPreloadedState:(id)a0;
- (void)primeWithPasscode:(id)a0;
- (void)setCustomInstructionString:(id)a0 forState:(int)a1;
- (void)setCustomDetailString:(id)a0 forState:(int)a1;
- (void)_copyAndShowInternalNavBar;
- (void)setCoachingHidden:(BOOL)a0 animated:(BOOL)a1;
- (void)diffSystemAndForcedRotationOrientations;
- (void)deviceOrientationChanged:(long long)a0 duration:(double)a1;
- (void)deviceOrientationChanged:(long long)a0;
- (void)coachingSkipped;

@end
