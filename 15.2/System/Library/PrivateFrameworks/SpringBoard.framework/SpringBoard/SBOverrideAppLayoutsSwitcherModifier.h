@class NSArray;

@interface SBOverrideAppLayoutsSwitcherModifier : SBSwitcherModifier {
    NSArray *_appLayouts;
    unsigned long long _appLayoutsGenerationCount;
}

- (id)appLayouts;
- (void)setState:(long long)a0;
- (unsigned long long)appLayoutsGenerationCount;
- (void)didMoveToParentModifier:(id)a0;
- (void).cxx_destruct;
- (id)initWithAppLayouts:(id)a0;

@end
