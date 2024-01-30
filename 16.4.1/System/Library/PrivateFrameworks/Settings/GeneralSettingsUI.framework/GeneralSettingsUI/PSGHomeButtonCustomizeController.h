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

- (void)willBecomeActive;
- (void)willResignActive;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;
- (id)init;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (void)loadView;
- (void)consumeAnyPressEventForButtonKind:(long long)a0;
- (void)_updateDetailText;
- (void)_makeConstraints;
- (void)barButtonTapped;
- (unsigned long long)getForceFeel;
- (void)segmentedControl:(id)a0 didSelectSegmentAtIndex:(unsigned long long)a1;
- (void)setForceFeel:(unsigned long long)a0;
- (void)setListeningForHomeButtonPresses:(BOOL)a0;

@end
