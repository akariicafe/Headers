@class UISearchController, NSArray, NSString;

@interface DiagnosticDataController : PSListController <UISearchResultsUpdating>

@property (retain, nonatomic) UISearchController *searchController;
@property (nonatomic) unsigned long long _state;
@property (retain, nonatomic) NSArray *_allSpecifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateSearchResultsForSearchController:(id)a0;
- (void)viewDidLoad;
- (id)specifiers;
- (id)init;
- (void).cxx_destruct;
- (void)_loadDiagnosticsDataWithCompletion:(id /* block */)a0;

@end
