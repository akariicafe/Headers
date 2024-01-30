@class NSArray, NSOrderedSet;

@interface SBOverrideAppLayoutsSwitcherModifier : SBSwitcherModifier {
    NSArray *_appLayouts;
    unsigned long long _appLayoutsGenerationCount;
    NSOrderedSet *_continuousExposeIdentifiers;
}

- (unsigned long long)appLayoutsGenerationCount;
- (id)appLayouts;
- (void)didMoveToParentModifier:(id)a0;
- (void).cxx_destruct;
- (void)setState:(long long)a0;
- (id)initWithAppLayouts:(id)a0;

@end
