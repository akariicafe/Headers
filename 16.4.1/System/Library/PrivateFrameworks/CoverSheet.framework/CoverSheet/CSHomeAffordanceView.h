@class UIColor, NSString, CSAlwaysOnHomeAffordancePillView, MTStaticColorPillView, _UILegibilitySettings, SBFHomeGrabberSettings, MTLumaDodgePillView;
@protocol CSCoverSheetContextProviding;

@interface CSHomeAffordanceView : UIView <SBSystemPointerInteractionDelegate, SBUIOptionalLegibility> {
    SBFHomeGrabberSettings *_settings;
}

@property (weak, nonatomic) MTStaticColorPillView *staticHomeAffordance;
@property (weak, nonatomic) MTLumaDodgePillView *dynamicHomeAffordance;
@property (weak, nonatomic) CSAlwaysOnHomeAffordancePillView *alwaysOnHomeAffordance;
@property (nonatomic) unsigned long long style;
@property (retain, nonatomic) UIColor *overrideColor;
@property (retain, nonatomic) id<CSCoverSheetContextProviding> coverSheetContext;
@property (nonatomic, getter=isSystemPointerInteractionEnabled) BOOL systemPointerInteractionEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;

- (struct CGSize { double x0; double x1; })suggestedSizeForContentWidth:(double)a0;
- (double)suggestedEdgeSpacing;
- (BOOL)shouldBeginPointerInteractionRequest:(id)a0 atLocation:(struct CGPoint { double x0; double x1; })a1 forView:(id)a2;
- (void)_createStaticHomeAffordance;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })pointerInteractionHitTestInsetsForView:(id)a0;
- (void)_transitionToStyle:(unsigned long long)a0 animated:(BOOL)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })extendedFrameForPointerAnimationSuppression;
- (id)styleForRegion:(id)a0 forView:(id)a1;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)_updateForLegibility;
- (void)layoutSubviews;
- (void)_createDynamicHomeAffordance;
- (id)_viewForStyle:(unsigned long long)a0;
- (id)init;
- (void)_createAlwaysOnHomeAffordance;
- (void).cxx_destruct;

@end
