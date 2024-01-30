@class SBSwitcherModifier;
@protocol SBHistorianSwitcherModifierDelegate;

@interface SBHistorianSwitcherModifier : SBSwitcherModifier

@property (weak, nonatomic) id<SBHistorianSwitcherModifierDelegate> historianDelegate;
@property (readonly, nonatomic) SBSwitcherModifier *rootModifier;

+ (BOOL)canLogEvent:(id)a0;

- (id)handleEvent:(id)a0;
- (void)setDelegate:(id)a0;
- (void).cxx_destruct;
- (id)_eventSnapshotFromEvent:(id)a0;
- (id)_modifierStackSnapshotFromModifier:(id)a0;
- (void)_populateAppLayoutQueryMethodDescription:(id)a0 fromModifier:(id)a1 queryName:(id)a2 descriptionProvider:(id /* block */)a3;
- (void)_populateIndexedQueryMethodDescription:(id)a0 fromModifier:(id)a1 queryName:(id)a2 descriptionProvider:(id /* block */)a3 appLayouts:(id)a4;
- (void)_populateLayoutRoleInAppLayoutAtIndexQueryMethodDescription:(id)a0 fromModifier:(id)a1 queryName:(id)a2 descriptionProvider:(id /* block */)a3;
- (void)_populateLayoutRoleInAppLayoutQueryMethodDescription:(id)a0 fromModifier:(id)a1 queryName:(id)a2 descriptionProvider:(id /* block */)a3;
- (void)_populateQueryMethodDescription:(id)a0 fromModifier:(id)a1 queryName:(id)a2 descriptionProvider:(id /* block */)a3 appLayouts:(id)a4;
- (id)_querySnapshotFromModifier:(id)a0;
- (id)_responseSnapshotFromResponse:(id)a0;
- (id)initWithRootModifier:(id)a0;

@end
