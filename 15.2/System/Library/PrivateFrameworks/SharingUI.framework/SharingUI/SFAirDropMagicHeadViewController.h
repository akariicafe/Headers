@class SFMagicHeadWheelView, CMMotionManager, UILabel, NSObject;
@protocol SFAirDropMagicHeadViewControllerDelegate;

@interface SFAirDropMagicHeadViewController : UIViewController <SFMagicHeadWheelViewDelegate>

@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *nameLabel2;
@property (retain, nonatomic) UILabel *secondLabel;
@property (nonatomic) BOOL viewVisible;
@property (nonatomic) BOOL motionUpdatesStarted;
@property (retain, nonatomic) CMMotionManager *motionManager;
@property (nonatomic) double initialAngleDegrees;
@property (nonatomic) long long currentOrientation;
@property (retain, nonatomic) SFMagicHeadWheelView *wheelView;
@property (weak) NSObject<SFAirDropMagicHeadViewControllerDelegate> *delegate;
@property (nonatomic) unsigned long long numberOfDots;
@property (nonatomic) double dotsRadius;
@property (nonatomic, getter=isMagicHead) BOOL magicHead;
@property (readonly, nonatomic) BOOL shouldBeHidden;
@property (nonatomic) BOOL enabled;

- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void)start;
- (void)viewDidDisappear:(BOOL)a0;
- (void)update;
- (void).cxx_destruct;
- (void)updateLabels;
- (void)dealloc;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)stop;
- (void)magicHeadSelectedHeadRequestingDisabledState:(BOOL)a0;
- (void)magicHeadChangedFacingDegree:(double)a0;
- (void)magicHeadSelectedNodeTapped:(id)a0;
- (void)magicHeadChangedSelectionToNode:(id)a0;
- (void)magicHeadSelectedHeadRequestingSubtitleTextChangeForState:(long long)a0;
- (void)magicHeadDidStartTransferForNode:(id)a0;
- (void)magicHeadDidTerminateTransferForNode:(id)a0;
- (void)magicHeadDidFinishTransferForNode:(id)a0;
- (void)handleDeviceMotion:(id)a0;
- (void)resetSecondLabel;
- (void)calculatePreferredSize;
- (void)subscribedProgress:(id)a0 forPersonWithRealName:(id)a1;
- (id)headForRealName:(id)a0;
- (void)setSecondLabelText:(id)a0 withTextColor:(id)a1 animated:(BOOL)a2 completion:(id /* block */)a3;
- (void)updateNodes:(id)a0 withPersonToProgress:(id)a1;
- (void)resetTransferStateWithRealName:(id)a0;
- (void)userSelectedWithRealName:(id)a0;
- (void)transferCancelledToPerson:(id)a0;

@end
