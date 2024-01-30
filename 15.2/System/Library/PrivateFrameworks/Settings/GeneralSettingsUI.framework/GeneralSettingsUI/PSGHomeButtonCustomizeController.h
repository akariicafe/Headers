@class NSString, BFFPaneHeaderView, PSGCircleSegmentedControl, UITapGestureRecognizer;
@protocol PSGHomeButtonCustomizeControllerDelegate, BSInvalidatable;

@interface PSGHomeButtonCustomizeController : UIViewController <PSGCircleSegmentedControlDelegate, SBSHardwareButtonEventConsuming> {
    BFFPaneHeaderView *_headerView;
    PSGCircleSegmentedControl *_segmentedControl;
    UITapGestureRecognizer *_menuButtonRecognizer;
    id<BSInvalidatable> _eventConsumerToken;
    BOOL _visible;
    BOOL _forceFeelValueChanged;
    BOOL _reachabilityEnabled;
}

@property (weak, nonatomic) id<PSGHomeButtonCustomizeControllerDelegate> delegate;
@property (nonatomic) BOOL usesDoneButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)willResignActive;
- (void)viewWillDisappear:(BOOL)a0;
- (void)willBecomeActive;
- (void)loadView;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;
- (void)consumeAnyPressEventForButtonKind:(long long)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)_makeConstraints;
- (void)_updateDetailText;
- (void)segmentedControl:(id)a0 didSelectSegmentAtIndex:(unsigned long long)a1;
- (void)setListeningForHomeButtonPresses:(BOOL)a0;
- (void)barButtonTapped;
- (unsigned long long)getForceFeel;
- (void)setForceFeel:(unsigned long long)a0;

@end
