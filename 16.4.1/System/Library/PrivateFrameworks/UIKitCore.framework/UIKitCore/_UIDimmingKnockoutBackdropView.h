@class NSString, UIVisualEffectView, UIView;

@interface _UIDimmingKnockoutBackdropView : UIView <UIInterfaceActionVisualBackgroundDisplaying, UIInterfaceActionVisualGroupBackgroundDisplaying> {
    UIView *dimmingKnockoutView;
    UIVisualEffectView *backdropView;
    double _alpha;
    double _currentCornerRadius;
}

@property (nonatomic) double cornerRadius;
@property (nonatomic) long long style;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setPressed:(BOOL)a0;
- (void)setAlpha:(double)a0;
- (id)initWithStyle:(long long)a0;
- (void)setHighlighted:(BOOL)a0;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateCornerRadius;
- (void)_setContinuousCornerRadius:(double)a0;
- (void).cxx_destruct;
- (void)_configureViewsWithStyle:(long long)a0;
- (id)_dimmingKnockoutBackgroundColorForBackdropStyle:(long long)a0;
- (id)_dimmingKnockoutFilterForBackdropStyle:(long long)a0;
- (void)_updateBackdropViewWithStyle:(long long)a0 alpha:(double)a1;
- (id)_vibrancyEffectForStyle:(long long)a0;
- (id)_visualEffectForStyle:(long long)a0;
- (void)setRoundedCornerPosition:(unsigned long long)a0;

@end
