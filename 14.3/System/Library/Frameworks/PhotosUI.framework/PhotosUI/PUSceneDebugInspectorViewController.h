@class NSArray, NSDictionary, NSString, UIView, UIBarButtonItem;

@interface PUSceneDebugInspectorViewController : UITableViewController <UISearchResultsUpdating>

@property (readonly, nonatomic) NSArray *currentSceneViewModels;
@property (copy, nonatomic) NSArray *sceneViewModelsAll;
@property (copy, nonatomic) NSArray *sceneViewModelsSearched;
@property (copy, nonatomic) NSDictionary *groupedSceneViewModels;
@property (copy, nonatomic) NSArray *groupedSceneViewModelTitles;
@property (readonly, nonatomic) UIView *loadingContentView;
@property (readonly, nonatomic) UIBarButtonItem *sortButton;
@property (readonly, nonatomic) UIBarButtonItem *shareButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_commaSeparatedValueRepresentation:(id)a0;
+ (BOOL)_isAscendingForSortOrder:(unsigned long long)a0;
+ (id)_sortedSceneViewModels:(id)a0 sortOrder:(unsigned long long)a1;
+ (id)_sectionTitleForSceneViewModel:(id)a0 sortOrder:(unsigned long long)a1;
+ (id)_titleForSortOrder:(unsigned long long)a0;
+ (id)_assetGridViewControllerForViewModel:(id)a0 interfaceIdiom:(long long)a1;
+ (id)_shortTitlesForSectionTitles:(id)a0 SortOrder:(unsigned long long)a1;
+ (id)_keyForSortOrder:(unsigned long long)a0;
+ (id)highestConfidenceForAsset:(id)a0 sceneIdentifier:(id)a1;

- (id)sectionIndexTitlesForTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void).cxx_destruct;
- (void)didSelectDoneButton:(id)a0;
- (void)didSelectSortButton:(id)a0;
- (void)_reloadTableViewByGroupingViewModels:(id)a0 sortOrder:(unsigned long long)a1;
- (void)didSelectShareButton:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)updateSearchResultsForSearchController:(id)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)viewDidLoad;

@end
