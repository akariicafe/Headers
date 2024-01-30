@class UIImage, NSString, _UILegibilitySettings;

@interface SBUILegibilityView : _UILegibilityView <SBUILegibility>

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } hitTestEdgeInsets;
@property (nonatomic) long long tintStyle;
@property (retain, nonatomic) UIImage *tintImage;
@property (nonatomic) double strength;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (id)initWithSettings:(id)a0 strength:(double)a1 image:(id)a2 tintStyle:(long long)a3;
- (void)setSettings:(id)a0 image:(id)a1 shadowImage:(id)a2;
- (void)updateForChangedSettings:(id)a0;
- (id)_tintColorForSettings:(id)a0;

@end
