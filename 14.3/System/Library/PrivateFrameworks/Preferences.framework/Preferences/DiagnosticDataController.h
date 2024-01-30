@class UISearchController, NSString, NSArray;

@interface DiagnosticDataController : PSListController <UISearchResultsUpdating> {
    NSArray *_allSpecifiers;
}

@property (retain, nonatomic) UISearchController *searchController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)specifiers;
- (void)updateSearchResultsForSearchController:(id)a0;
- (void)viewDidLoad;

@end
