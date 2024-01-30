@class UIColor, NSString, _SBFVibrantSettings, UIView;

@interface SBUIChevronView : UIView <_SBFVibrantView> {
    UIView *_leftGrabberView;
    UIView *_rightGrabberView;
    double _animationDuration;
    double _alphaComponent;
    UIView *_tintView;
    UIView *_backgroundView;
    BOOL _unified;
    UIView *_alphaContainerView;
}

@property (nonatomic) double animationDuration;
@property (nonatomic) long long state;
@property (retain, nonatomic) UIColor *color;
@property (retain, nonatomic) _SBFVibrantSettings *vibrantSettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setState:(long long)a0 animated:(BOOL)a1;
- (BOOL)_setState:(long long)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithColor:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setBackgroundView:(id)a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)configureForLightStyle;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForGrabberView:(id)a0 forState:(long long)a1 unified:(BOOL)a2;
- (void)_layoutGrabberView:(id)a0 forState:(long long)a1;
- (BOOL)_setUnified:(BOOL)a0;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })_transformForGrabberView:(id)a0 forState:(long long)a1;

@end
