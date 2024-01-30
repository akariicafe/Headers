@interface SwiftUI.ColumnContentNavigationV3Coordinator : NSObject <UISplitViewControllerDelegate, UINavigationControllerDelegate> {
    void /* unknown type, empty encoding */ content;
    void /* unknown type, empty encoding */ previousBridgedState;
    void /* unknown type, empty encoding */ strategy;
    void /* unknown type, empty encoding */ stackCoordinator;
    void /* unknown type, empty encoding */ previousContent;
    void /* unknown type, empty encoding */ isProcessingEndUserTriggeredUpdate;
    void /* unknown type, empty encoding */ isProcessingProgrammaticUpdate;
    void /* unknown type, empty encoding */ lastStateSeed;
}

- (void)navigationController:(id)a0 didShowViewController:(id)a1 animated:(BOOL)a2;
- (long long)splitViewController:(id)a0 displayModeForExpandingToProposedDisplayMode:(long long)a1;
- (long long)splitViewController:(id)a0 topColumnForCollapsingToProposedTopColumn:(long long)a1;
- (id)init;
- (void).cxx_destruct;

@end
