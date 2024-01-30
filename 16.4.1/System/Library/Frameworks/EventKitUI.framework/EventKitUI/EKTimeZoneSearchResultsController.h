@class NSString;

@interface EKTimeZoneSearchResultsController : EKTimeZoneViewController <UISearchResultsUpdating>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateSearchResultsForSearchController:(id)a0;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;

@end
