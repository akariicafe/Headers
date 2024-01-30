@class NSArray, UITableViewDiffableDataSource, HMAccessory, NAFuture, NSString;
@protocol HUPresentationDelegate;

@interface HUManagedConfigurationProfilesViewController : UITableViewController <MCProfileViewControllerDelegate, HUPresentationDelegateHost>

@property (retain, nonatomic) UITableViewDiffableDataSource *tableViewDataSource;
@property (retain, nonatomic) HMAccessory *accessory;
@property (retain, nonatomic) NSArray *profiles;
@property (retain, nonatomic) NAFuture *fetchDataFuture;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<HUPresentationDelegate> presentationDelegate;

- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (id)tableView:(id)a0 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (id)initWithAccessory:(id)a0;
- (id)_confirmProfileDeletion:(id)a0;
- (void)_fetchDataAndReloadTable;
- (id)_newCellForProfile:(id)a0;
- (id)_profileForIdentifier:(id)a0;
- (void)_reloadTableViewWithExistingData;
- (id)_removeProfileForIdentifier:(id)a0;
- (void)profileViewControllerDidSelectRemoveProfile:(id)a0;
- (BOOL)profileViewControllerIsProfileInstalled;

@end
