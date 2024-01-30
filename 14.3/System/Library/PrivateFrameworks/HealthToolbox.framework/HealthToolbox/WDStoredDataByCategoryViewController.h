@class UIFont, NSArray, WDProfile, NSPredicate, NSString;

@interface WDStoredDataByCategoryViewController : HKTableViewController

@property (retain, nonatomic) UIFont *bodyFont;
@property (retain, nonatomic) NSArray *capturedSampleTypes;
@property (retain) NSArray *savedCategories;
@property (nonatomic) BOOL queryReturned;
@property (retain, nonatomic) WDProfile *profile;
@property (readonly, nonatomic) NSPredicate *storedDataPredicate;
@property (readonly, nonatomic) NSString *storedDataDisplayName;
@property (readonly, nonatomic) BOOL shouldShowDeleteAllDataButton;

- (id)initWithStyle:(long long)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)init;
- (void).cxx_destruct;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidLoad;
- (void)_displayTypeStringsChanged:(id)a0;
- (void)deleteAllStoredData;
- (void)handleSamplesQueryResults:(id)a0;
- (id)reduceCategoriesForCapturedSampleTypes:(id)a0;
- (void)selectSourceStoredDataTableViewCell:(id)a0;
- (void)presentDeleteConfirmation;

@end
