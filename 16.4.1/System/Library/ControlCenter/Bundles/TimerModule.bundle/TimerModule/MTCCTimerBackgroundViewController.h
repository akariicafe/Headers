@class NSDateComponentsFormatter, MTCCTimer, CADisplayLink, NSString, UILabel, NSMutableArray, MTCCRoundButton;
@protocol MTCCTimerBackgroundViewControllerDelegate;

@interface MTCCTimerBackgroundViewController : UIViewController <_UICursorInteractionDelegate>

@property (retain, nonatomic) MTCCRoundButton *button;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) CADisplayLink *displayLink;
@property (retain, nonatomic) NSMutableArray *currentConstraints;
@property (retain, nonatomic) NSDateComponentsFormatter *dateComponentsFormatter;
@property (weak, nonatomic) id<MTCCTimerBackgroundViewControllerDelegate> delegate;
@property (copy, nonatomic) MTCCTimer *timer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)landscapeConstraints;
- (void)setupRegularFonts;
- (void)setupAxFonts;
- (void)buttonTapped:(id)a0;
- (void)handleContentSizeChange:(id)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (id)portraitConstraints;
- (id)cursorInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (void)setupFonts;
- (BOOL)_canShowWhileLocked;
- (void)setupConstraints;
- (void)displayLinkTick:(id)a0;
- (void)dealloc;
- (void)viewDidLoad;
- (id)cursorInteraction:(id)a0 styleForRegion:(id)a1;
- (id)init;
- (id)accessibilityCappedFontForStyle:(id)a0;
- (void)viewWillLayoutSubviews;
- (void)_reloadForCurrentState;
- (void)_updateLabels;
- (void).cxx_destruct;

@end
