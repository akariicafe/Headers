@interface _TtCV8VideosUI17HostedUISearchBar11Coordinator : NSObject <UISearchBarDelegate, UITextFieldDelegate> {
    void /* unknown type, empty encoding */ _text;
    void /* unknown type, empty encoding */ _isSearching;
    void /* unknown type, empty encoding */ _searchButtonClicked;
    void /* unknown type, empty encoding */ recordMetricsForSubmit;
}

- (void)searchBarTextDidEndEditing:(id)a0;
- (void)searchBar:(id)a0 textDidChange:(id)a1;
- (void)searchBarTextDidBeginEditing:(id)a0;
- (void)searchBarCancelButtonClicked:(id)a0;
- (void)searchBarSearchButtonClicked:(id)a0;
- (BOOL)textFieldShouldClear:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
