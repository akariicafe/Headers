@interface SwiftUI.UIKitSearchBarCoordinator : SwiftUI.PlatformViewCoordinator <UISearchBarDelegate> {
    void /* unknown type, empty encoding */ triggerSubmission;
    void /* unknown type, empty encoding */ configuration;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ isViewUpdating;
    void /* unknown type, empty encoding */ oldText;
}

- (void)searchBarCancelButtonClicked:(id)a0;
- (void)searchBar:(id)a0 textDidChange:(id)a1;
- (void)searchBarTextDidEndEditing:(id)a0;
- (void)searchBarTextDidBeginEditing:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)primaryActionTriggered:(id)a0;

@end
