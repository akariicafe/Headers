@class NSArray, HKSpokenLanguageDiffableDataSource, NSString, HKSpokenLanguage, UISearchController;
@protocol HKSpokenLanguagesViewControllerDelegate;

@interface HKSpokenLanguagesViewController : UITableViewController <UISearchResultsUpdating>

@property (retain, nonatomic) NSArray *mostLikelyLanguages;
@property (retain, nonatomic) NSArray *allSpokenLanguages;
@property (retain, nonatomic) HKSpokenLanguage *currentLanguage;
@property (retain, nonatomic) HKSpokenLanguageDiffableDataSource *dataSource;
@property (retain, nonatomic) UISearchController *searchController;
@property (weak, nonatomic) id<HKSpokenLanguagesViewControllerDelegate> pickerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultCheckmarkImage;

- (void)cancelAction;
- (void)tableView:(id)a0 willDisplayHeaderView:(id)a1 forSection:(long long)a2;
- (id)tableView:(id)a0 willSelectRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)updateSearchResultsForSearchController:(id)a0;
- (void)configureDataSource;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)doneAction;
- (void)setConfirmButtonEnabledIfNeeded;
- (void)configureCancelButton;
- (void)configureSearchController;
- (void)handleSearchSelection;
- (id)initWithCurrentLanguage:(id)a0 preferredLanguages:(id)a1 andAllSpokenLanguages:(id)a2;
- (id)snapshotForCurrentState;
- (id)snapshotForSearchResults:(id)a0;

@end
