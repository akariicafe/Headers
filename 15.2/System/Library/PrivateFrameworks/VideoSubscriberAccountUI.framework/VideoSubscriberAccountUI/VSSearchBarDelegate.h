@class NSString, UISearchBar;

@interface VSSearchBarDelegate : NSObject <UISearchBarDelegate>

@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) UISearchBar *searchBar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)clearText;
- (void)searchBarCancelButtonClicked:(id)a0;
- (void)searchBar:(id)a0 textDidChange:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
