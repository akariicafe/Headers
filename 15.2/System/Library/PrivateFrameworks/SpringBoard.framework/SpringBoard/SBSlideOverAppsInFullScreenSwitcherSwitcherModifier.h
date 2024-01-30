@interface SBSlideOverAppsInFullScreenSwitcherSwitcherModifier : SBSwitcherModifier {
    BOOL _haveInvalidatedAppLayouts;
}

- (id)adjustedAppLayoutsForAppLayouts:(id)a0;
- (id)_handleEvent:(id)a0;

@end
