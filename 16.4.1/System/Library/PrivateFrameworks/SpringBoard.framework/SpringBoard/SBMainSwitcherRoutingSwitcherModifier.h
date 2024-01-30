@class NSString, SBSwitcherModifier, SBRoutingSwitcherModifier;

@interface SBMainSwitcherRoutingSwitcherModifier : SBSwitcherModifier <SBChainableModifierDelegate, SBRoutingSwitcherModifierDelegate> {
    SBRoutingSwitcherModifier *_routingModifier;
    SBSwitcherModifier *_mainModifierSubtree;
    SBSwitcherModifier *_floatingModifierSubtree;
    SBSwitcherModifier *_currentScrollableSubtree;
    SBSwitcherModifier *_activeSubtree;
    long long _currentEnvironmentMode;
    BOOL _floatingSwitcherVisible;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)canPerformKeyboardShortcutAction:(long long)a0 forBundleIdentifier:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)handleTransitionEvent:(id)a0;
- (void).cxx_destruct;
- (id)_modifierToHandleLayoutElement:(id)a0;
- (id)debugPotentialChildModifiers;
- (id)fallbackModifierForRoutingModifier:(id)a0;
- (id)handleGestureEvent:(id)a0;
- (id)homeScreenModifierForRoutingModifier:(id)a0;
- (id)initWithMainModifierSubtree:(id)a0 floatingModifierSubtree:(id)a1;
- (id)routingModifier:(id)a0 animationAttributesModifierForLayoutElement:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })routingModifier:(id)a0 containerViewBoundsForModifier:(id)a1;
- (id)routingModifier:(id)a0 event:(id)a1 forModifier:(id)a2;
- (id)routingModifier:(id)a0 filteredAppLayouts:(id)a1 forModifier:(id)a2;
- (id)routingModifier:(id)a0 filteredContinuousExposeIdentifiers:(id)a1 forModifier:(id)a2;
- (id)routingModifier:(id)a0 modifierForAppLayout:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })routingModifier:(id)a0 switcherViewBoundsForModifier:(id)a1;
- (id)scrollModifierForRoutingModifier:(id)a0;
- (id)transactionCompletionOptionsModifierForRoutingModifier:(id)a0;

@end
