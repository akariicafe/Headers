@class SBFFluidBehaviorSettings, NSArray;
@protocol SBShelfExpansionSwitcherModifierDelegate;

@interface SBShelfExpansionSwitcherModifier : SBTransitionSwitcherModifier {
    BOOL _expand;
    unsigned long long _style;
    struct CGPoint { double x; double y; } _target;
    double _perIndexResponseIncrement;
    double _dismissalScale;
    SBFFluidBehaviorSettings *_settings;
    SBFFluidBehaviorSettings *_ropeSettings;
    double _bezierCurvePointYDeltaFromTarget;
    double _bezierCurveXExponent;
    double _bezierCurveYExponent;
    double _bezierCurveScaleExponent;
    struct CGPoint { double x; double y; } _cached_scrollViewContentOffset;
    unsigned long long _cached_appLayoutsGenCount;
    NSArray *_cached_visibleOrderedAppLayouts;
    unsigned long long _topMostLayoutElements_lastAppLayoutsGenCount;
    long long _topMostLayoutElements_lastOrientation;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _topMostLayoutElements_lastContainerViewBounds;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _topMostLayoutElements_lastSwitcherViewBounds;
    struct CGPoint { double x; double y; } _topMostLayoutElements_lastContentOffset;
    NSArray *_topMostLayoutElements_lastElements;
}

@property (readonly, weak, nonatomic) id<SBShelfExpansionSwitcherModifierDelegate> animationDelegate;

- (double)scaleForIndex:(unsigned long long)a0;
- (BOOL)shouldUpdateAnimatableProperty:(id)a0;
- (id)transitionWillBegin;
- (unsigned long long)transactionCompletionOptions;
- (double)opacityForLayoutRole:(long long)a0 inAppLayout:(id)a1 atIndex:(unsigned long long)a2;
- (double)shelfBackgroundBlurOpacity;
- (void)didMoveToParentModifier:(id)a0;
- (id)animatablePropertyIdentifiers;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForIndex:(unsigned long long)a0;
- (id)animationAttributesForLayoutElement:(id)a0;
- (id)topMostLayoutElements;
- (BOOL)isFocusEnabledForAppLayout:(id)a0;
- (long long)updateModeForAnimatableProperty:(id)a0;
- (double)shadowOpacityForLayoutRole:(long long)a0 atIndex:(unsigned long long)a1;
- (double)modelValueForAnimatableProperty:(id)a0 currentValue:(double)a1 creating:(BOOL)a2;
- (id)settingsForAnimatableProperty:(id)a0;
- (void).cxx_destruct;
- (BOOL)shouldInterruptForRemovalEvent:(id)a0;
- (struct CGPoint { double x0; double x1; })_bezierPointFromTime:(double)a0 start:(struct CGPoint { double x0; double x1; })a1 target:(struct CGPoint { double x0; double x1; })a2;
- (BOOL)_isEffectivelyInShelf;
- (BOOL)_isMovingFromLeadingToTrailing;
- (double)_presentationValueForIndex:(unsigned long long)a0;
- (id)_visibleOrderedAppLayouts;
- (id)handleAnimatablePropertyChangedEvent:(id)a0;
- (id)initWithTransitionID:(id)a0 expand:(BOOL)a1 style:(unsigned long long)a2 target:(struct CGPoint { double x0; double x1; })a3 animationDelegate:(id)a4;

@end
