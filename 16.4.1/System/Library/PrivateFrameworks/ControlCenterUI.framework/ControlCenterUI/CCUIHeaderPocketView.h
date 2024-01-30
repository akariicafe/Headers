@class CCUISensorAttributionCompactControl, NSString, CCUIStatusBar, NSObject, UIView, SBUIChevronView, CCUISensorAttributionExpandedViewController;
@protocol OS_dispatch_group, CCUIHeaderPocketViewSensorAttributionDelegate, CCUIStatusBarDelegate;

@interface CCUIHeaderPocketView : UIView <CCUIHeaderPocketViewSensorAttributionDelegate, CCUISensorAttributionCompactControlDelegate> {
    UIView *_headerBackgroundView;
    UIView *_headerLineView;
    SBUIChevronView *_headerChevronView;
    CCUISensorAttributionCompactControl *_compactSensorAttributionControl;
    CCUISensorAttributionExpandedViewController *_sensorAttributionExpandedViewController;
    UIView *_sensorAttributionExpandedWrapperView;
    double _sensorAttributionControlTouchDownDate;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _sensorAttributionEdgeInsets;
    NSObject<OS_dispatch_group> *_expandedViewControllerCloseDispatchGroup;
}

@property (nonatomic) unsigned long long mode;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } contentBounds;
@property (readonly, nonatomic) CCUIStatusBar *statusBar;
@property (weak, nonatomic) id<CCUIStatusBarDelegate> statusBarDelegate;
@property (retain, nonatomic) UIView *statusLabelView;
@property (weak, nonatomic) id<CCUIHeaderPocketViewSensorAttributionDelegate> headerPocketViewDelegate;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } edgeInsets;
@property (nonatomic) double backgroundAlpha;
@property (nonatomic) UIView *customBackgroundView;
@property (nonatomic) double chevronAlpha;
@property (nonatomic) double statusBarAlpha;
@property (nonatomic) double sensorStatusViewAlpha;
@property (nonatomic) double contentAlphaMultiplier;
@property (nonatomic) double verticalContentTranslation;
@property (nonatomic) long long interfaceOrientation;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } contentTransform;
@property (nonatomic) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } compactScaleTransform;
@property (nonatomic) unsigned long long chevronState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleCompactControlTouchBeganEvent;
- (void)willOpenExpandedSensorAttributionViewController;
- (double)yOriginForCompactControlForFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isSensorAttributionViewControllerExpanded;
- (void)didCloseExpandedSensorAttributionViewController;
- (void)sensorAttributionsChanged:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentBounds;
- (void)_updateAlpha;
- (void)setCompactScaleTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (void)dismissSensorAttributionExpandedView:(BOOL)a0 completion:(id /* block */)a1;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })compactScaleTransform;
- (void)addSensorAttributionViewControllerAsChildOfViewController:(id)a0;
- (double)additionalHeightForOrientation:(long long)a0;
- (id)_newDefaultBackgroundView;
- (void)setSensorAttributionEdgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })compactModeFrameForSensorView;
- (void)_updateContentTransform;
- (void)layoutSubviews;
- (unsigned long long)chevronState;
- (void)handleCompactControlCompactionEvent;
- (void)setMode:(unsigned long long)a0 orientationHint:(long long)a1;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)handleCompactControlExpansionEvent;
- (void)_setHeaderBackgroundView:(id)a0;
- (void)_preheatEntityIconsForAttributions:(id)a0;
- (void)setChevronState:(unsigned long long)a0;
- (BOOL)isDisplayingSensorStatus;
- (BOOL)hitTestedViewIsCompactSensorAttributionView:(id)a0;
- (void).cxx_destruct;

@end
