@class PSSpecifier, NSString, NSArray, PSListController, UISearchController;

@interface PSTimeZoneController : UITableViewController <UISearchResultsUpdating, UISearchBarDelegate, UISearchControllerDelegate> {
    NSArray *_cities;
}

@property (retain, nonatomic) UISearchController *searchController;
@property (retain, nonatomic) PSSpecifier *specifier;
@property (weak, nonatomic) PSListController *parentController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)setTimeZone:(id)a0;

- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void).cxx_destruct;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)updateSearchResultsForSearchController:(id)a0;
- (id)currentTimeZoneCityName;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidLoad;

@end
