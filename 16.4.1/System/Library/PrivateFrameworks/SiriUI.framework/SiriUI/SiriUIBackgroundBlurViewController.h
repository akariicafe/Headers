@class SiriUIBackgroundBlurView;
@protocol SiriUIBackgroundBlurViewControllerDelegate;

@interface SiriUIBackgroundBlurViewController : UIViewController

@property (retain, nonatomic) SiriUIBackgroundBlurView *backgroundBlurView;
@property (nonatomic) BOOL backgroundBlurIsVisible;
@property (nonatomic) long long backgroundBlurVisibleReason;
@property (weak, nonatomic) id<SiriUIBackgroundBlurViewControllerDelegate> backgroundBlurViewControllerDelegate;

- (BOOL)_canShowWhileLocked;
- (void)viewDidLoad;
- (id)initWithDelegate:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)requestBackgroundBlurVisible:(BOOL)a0 forReason:(long long)a1;

@end
