@class NSString, HKClinicalAuthorizationDisplayController, HKClinicalAuthorizationSequenceContext, UITableView;
@protocol HKHealthPrivacyServicePromptControllerDelegate;

@interface HKClinicalAuthorizationNewRecordsViewController : HKViewController <UITableViewDataSource, UITableViewDelegate, HKHealthPrivacyServicePromptController>

@property (readonly, nonatomic) UITableView *tableView;
@property (readonly, nonatomic) HKClinicalAuthorizationDisplayController *displayController;
@property (nonatomic) long long authorizationMode;
@property (readonly, nonatomic) HKClinicalAuthorizationSequenceContext *context;
@property (weak, nonatomic) id<HKHealthPrivacyServicePromptControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContext:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)init;
- (void).cxx_destruct;
- (void)_finishWithError:(id)a0;
- (void)loadView;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)_configureNavigationItem;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void)viewDidAppear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)_updateForCurrentContentSizeCategory;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)_doneButtonPressed:(id)a0;
- (void)viewDidLoad;
- (id)_createFooterView;
- (void)_configureTableView;
- (BOOL)_indexPathIsValidRow:(id)a0;
- (id)_createHeaderView;
- (id)_indexPathForShareAuthorizationMode:(long long)a0;
- (long long)_shareAuthorizationModeForIndexPath:(id)a0;
- (id)_formatStringForShareAuthorizationModeFooterWithMode:(long long)a0;
- (id)_visibleShareAuthorizationModeCellForMode:(long long)a0;
- (void)_updateShareAuthorizationModeSectionFooter;
- (id)_shareAuthorizationModeCellForIndexPath:(id)a0;
- (id)_titleForShareAuthorizationModeFooter;
- (void)_shareAuthorizationModeCellPressed:(id)a0;

@end
