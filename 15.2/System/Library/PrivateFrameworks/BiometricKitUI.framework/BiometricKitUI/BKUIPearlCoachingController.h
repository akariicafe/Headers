@class UIButton, BKUIPearlCoachingDeviceView, BKUIPearlInstructionView;
@protocol BKUIPearlCoachingControllerDelegate;

@interface BKUIPearlCoachingController : UIViewController

@property (retain, nonatomic) BKUIPearlCoachingDeviceView *deviceView;
@property (retain, nonatomic) BKUIPearlInstructionView *instructionView;
@property (retain, nonatomic) UIButton *escapeHatchButton;
@property (readonly, nonatomic, getter=isDeviceFlat) BOOL deviceFlat;
@property long long orientation;
@property (nonatomic) BOOL inBuddy;
@property (nonatomic) BOOL inSheet;
@property (nonatomic) BOOL isDisplayZoomEnabled;
@property (weak, nonatomic) id<BKUIPearlCoachingControllerDelegate> delegate;

- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)deviceOrientationChanged;
- (void).cxx_destruct;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (BOOL)needsToShow;
- (void)stopCoachingAnimation;
- (void)updateInstructionText;
- (void)escapeHatchButtonPressed:(id)a0;
- (BOOL)resetDeviceView;
- (BOOL)didOrientationChange;
- (void)handleRotation;

@end
