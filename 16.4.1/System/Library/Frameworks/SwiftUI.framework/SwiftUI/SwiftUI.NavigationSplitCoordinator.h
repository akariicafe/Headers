@interface SwiftUI.NavigationSplitCoordinator : NSObject <UISplitViewControllerDelegate, UISplitViewControllerDelegatePrivate> {
    void /* unknown type, empty encoding */ sidebar;
    void /* unknown type, empty encoding */ content;
    void /* unknown type, empty encoding */ detail;
    void /* unknown type, empty encoding */ parameters;
    void /* unknown type, empty encoding */ columnVisibility;
    void /* unknown type, empty encoding */ navigationAuthority;
    void /* unknown type, empty encoding */ splitViewController;
    void /* unknown type, empty encoding */ previousBridgedState;
    void /* unknown type, empty encoding */ expandedStackCoordinators;
    void /* unknown type, empty encoding */ compactCoordinator;
    void /* unknown type, empty encoding */ wasCollapsed;
    void /* unknown type, empty encoding */ destinationDisplayMode;
    void /* unknown type, empty encoding */ trackingCompletionAction;
    void /* unknown type, empty encoding */ mode;
    void /* unknown type, empty encoding */ lastStateSeed;
}

- (id)init;
- (void).cxx_destruct;
- (void)_splitViewController:(id)a0 didChangeFromDisplayMode:(long long)a1 toDisplayMode:(long long)a2;
- (long long)splitViewController:(id)a0 displayModeForExpandingToProposedDisplayMode:(long long)a1;
- (long long)splitViewController:(id)a0 topColumnForCollapsingToProposedTopColumn:(long long)a1;
- (void)splitViewController:(id)a0 willChangeToDisplayMode:(long long)a1;
- (void)splitViewController:(id)a0 willHideColumn:(long long)a1;
- (void)splitViewController:(id)a0 willShowColumn:(long long)a1;

@end
