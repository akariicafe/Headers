@class UIColor, NSString, _UILegibilitySettings, MTStaticColorPillView, SBFHomeGrabberSettings, MTLumaDodgePillView;
@protocol CSCoverSheetContextProviding;

@interface CSHomeAffordanceView : UIView <SBSystemPointerInteractionDelegate, SBUIOptionalLegibility> {
    SBFHomeGrabberSettings *_settings;
}

@property (weak, nonatomic) MTStaticColorPillView *staticHomeAffordance;
@property (weak, nonatomic) MTLumaDodgePillView *dynamicHomeAffordance;
@property (nonatomic) unsigned long long style;
@property (retain, nonatomic) UIColor *overrideColor;
@property (retain, nonatomic) id<CSCoverSheetContextProviding> coverSheetContext;
@property (nonatomic, getter=isSystemPointerInteractionEnabled) BOOL systemPointerInteractionEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;

- (id)styleForRegion:(id)a0 forView:(id)a1;
- (BOOL)shouldBeginPointerInteractionAtLocation:(struct CGPoint { double x0; double x1; })a0 forView:(id)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })pointerInteractionHitTestInsetsForView:(id)a0;
- (void)layoutSubviews;
- (void)_updateForLegibility;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (double)suggestedEdgeSpacing;
- (struct CGSize { double x0; double x1; })suggestedSizeForContentWidth:(double)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })extendedFrameForPointerAnimationSuppression;
- (void)_createStaticHomeAffordance;
- (void)_createDynamicHomeAffordance;
- (void)_transitionToStyle:(unsigned long long)a0 animated:(BOOL)a1;
- (id)_viewForStyle:(unsigned long long)a0;

@end
