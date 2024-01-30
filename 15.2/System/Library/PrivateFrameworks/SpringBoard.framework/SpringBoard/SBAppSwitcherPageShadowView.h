@class SBAppSwitcherSettings, NSString, UIBezierPath, SBMedusaSettings, UIView, SBFView;

@interface SBAppSwitcherPageShadowView : SBFView <PTSettingsKeyObserver> {
    SBAppSwitcherSettings *_switcherSettings;
    SBMedusaSettings *_medusaSettings;
    SBFView *_diffuseShadowView;
    SBFView *_rimShadowView;
    double _rimShadowRadius;
    double _rimShadowOpacity;
    double _diffuseShadowRadius;
    double _diffuseShadowOpacity;
    struct CGSize { double width; double height; } _diffuseShadowOffset;
    double _diffuseShadowRadiusWhileTouched;
    double _diffuseShadowOpacityWhileTouched;
    struct CGSize { double width; double height; } _diffuseShadowOffsetWhileTouched;
    double _diffuseShadowRadiusWhileCursorHovered;
    double _diffuseShadowOpacityWhileCursorHovered;
    struct CGSize { double width; double height; } _diffuseShadowOffsetWhileCursorHovered;
}

@property (readonly, nonatomic) UIView *_diffuseShadowView;
@property (readonly, nonatomic) UIView *_rimShadowView;
@property (nonatomic) double switcherCardScale;
@property (nonatomic) long long style;
@property (nonatomic) unsigned long long highlightType;
@property (retain, nonatomic) UIBezierPath *shadowPath;
@property (nonatomic) double shadowOffset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (void)_updateShadowViews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 style:(long long)a1;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (void)_setContinuousCornerRadius:(double)a0;
- (void)_applyPrototypeSettingsToConstants;
- (void)_updateShadowParameters;

@end
