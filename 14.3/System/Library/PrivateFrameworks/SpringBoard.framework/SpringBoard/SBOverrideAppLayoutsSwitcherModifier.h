@class NSArray;

@interface SBOverrideAppLayoutsSwitcherModifier : SBSwitcherModifier {
    NSArray *_appLayouts;
    unsigned long long _appLayoutsGenerationCount;
}

- (id)appLayouts;
- (void).cxx_destruct;
- (unsigned long long)appLayoutsGenerationCount;
- (void)didMoveToParentModifier:(id)a0;
- (void)setState:(long long)a0;
- (id)initWithAppLayouts:(id)a0;

@end
