@class CCUIStatusBar, CCUISensorStatusView, UIView, SBUIChevronView;
@protocol CCUIStatusBarDelegate;

@interface CCUIHeaderPocketView : UIView {
    UIView *_headerBackgroundView;
    UIView *_headerLineView;
    SBUIChevronView *_headerChevronView;
}

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } contentBounds;
@property (readonly, nonatomic) CCUIStatusBar *statusBar;
@property (weak, nonatomic) id<CCUIStatusBarDelegate> statusBarDelegate;
@property (retain, nonatomic) UIView *statusLabelView;
@property (readonly, nonatomic) CCUISensorStatusView *sensorStatusView;
@property (nonatomic) unsigned long long mode;
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

- (void)_updateAlpha;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentBounds;
- (void)setChevronState:(unsigned long long)a0;
- (void).cxx_destruct;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })compactScaleTransform;
- (id)_newDefaultBackgroundView;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (void)setCompactScaleTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)addSensorStatusForStatusType:(unsigned long long)a0 sensorActivityData:(id)a1;
- (double)additionalHeightForOrientation:(long long)a0;
- (unsigned long long)chevronState;
- (void)_setHeaderBackgroundView:(id)a0;
- (void)_updateContentTransform;
- (void)removeSensorStatusForSensorType:(unsigned long long)a0;

@end
