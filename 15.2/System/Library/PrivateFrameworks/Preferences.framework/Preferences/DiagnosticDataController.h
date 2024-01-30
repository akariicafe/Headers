@class UISearchController, NSArray, NSString;

@interface DiagnosticDataController : PSListController <UISearchResultsUpdating>

@property (retain, nonatomic) UISearchController *searchController;
@property (nonatomic) unsigned long long _state;
@property (retain, nonatomic) NSArray *_allSpecifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)specifiers;
- (void)viewDidLoad;
- (void)updateSearchResultsForSearchController:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)_loadDiagnosticsDataWithCompletion:(id /* block */)a0;

@end
