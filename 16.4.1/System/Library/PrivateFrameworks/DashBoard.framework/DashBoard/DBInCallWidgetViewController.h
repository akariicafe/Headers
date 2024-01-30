@class TUCall, DBInCallWidgetAppIconButton, NSArray, DBInCallWidgetButton, UIFocusContainerGuide, CADisplayLink, DBInCallWidgetMultiwayTitleButton, NSString, DBInCallWidgetAvatarView, UILayoutGuide, UILabel;

@interface DBInCallWidgetViewController : DBWidgetViewController <BSInvalidatable>

@property (retain, nonatomic) TUCall *currentCall;
@property (retain, nonatomic) NSArray *constraints;
@property (retain, nonatomic) NSArray *tallMultiwayOnlyConstraints;
@property (retain, nonatomic) NSArray *tallNonMultiwayConstraints;
@property (nonatomic) unsigned long long widgetStyle;
@property (nonatomic) struct CGSize { double width; double height; } lastViewSize;
@property (retain, nonatomic) DBInCallWidgetAvatarView *avatarButton;
@property (retain, nonatomic) DBInCallWidgetAppIconButton *appIconButton;
@property (retain, nonatomic) UILabel *contactNameLabel;
@property (retain, nonatomic) UILabel *callTimeLabel;
@property (retain, nonatomic) DBInCallWidgetMultiwayTitleButton *multiwayTitleButton;
@property (retain, nonatomic) DBInCallWidgetButton *muteButton;
@property (retain, nonatomic) DBInCallWidgetButton *endCallButton;
@property (retain, nonatomic) UIFocusContainerGuide *topFocusContainerGuide;
@property (retain, nonatomic) UIFocusContainerGuide *bottomFocusContainerGuide;
@property (retain, nonatomic) UIFocusContainerGuide *multiwayLabelFocusContainerGuide;
@property (retain, nonatomic) UILayoutGuide *leftButtonGuide;
@property (retain, nonatomic) UILayoutGuide *midButtonGuide;
@property (retain, nonatomic) UILayoutGuide *rightButtonGuide;
@property (retain, nonatomic) UILayoutGuide *labelContainerGuide;
@property (retain, nonatomic) UILayoutGuide *topRowGuide;
@property (retain, nonatomic) UILayoutGuide *midTopRowGuide;
@property (retain, nonatomic) UILayoutGuide *midBottomGuide;
@property (retain, nonatomic) UILayoutGuide *bottomRowGuide;
@property (retain, nonatomic) CADisplayLink *callTimeDisplayLink;
@property (nonatomic) BOOL invalidated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)buttonTapped:(id)a0;
- (void)_displayLinkFired:(id)a0;
- (void)setupConstraints;
- (void)setHidden:(BOOL)a0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)handleCallStatusChanged;
- (id)_displayNameForCall:(id)a0;
- (void)_muteStateChanged:(id)a0;
- (BOOL)_shouldUseMultilineTitleButton;
- (void)_updateUIForCallState;
- (BOOL)entireWidgetFocusable;
- (id)linearFocusItems;
- (void)updateLabelsForCurrentStyle;
- (void)widgetViewTapped;

@end
