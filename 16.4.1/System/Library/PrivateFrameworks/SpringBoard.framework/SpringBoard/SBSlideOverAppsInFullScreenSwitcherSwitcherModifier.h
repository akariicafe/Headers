@interface SBSlideOverAppsInFullScreenSwitcherSwitcherModifier : SBSwitcherModifier {
    BOOL _haveInvalidatedAppLayouts;
}

- (id)_handleEvent:(id)a0;
- (id)adjustedAppLayoutsForAppLayouts:(id)a0;

@end
