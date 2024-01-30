@class NSString, NSBundle, NSArray;
@protocol PDUDisclosureReviewViewControllerDelegate;

@interface PDUDisclosureReviewViewController_iOS : UITableViewController <UITableViewDelegate, UITableViewDataSource> {
    NSBundle *_bundle;
    unsigned long long _variant;
    NSArray *_titles;
    NSArray *_descriptions;
    NSString *_obkBundleID;
    BOOL _isConfigured;
}

@property (weak, nonatomic) id<PDUDisclosureReviewViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (BOOL)_canShowWhileLocked;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)preferredUserInterfaceStyle;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void)doneTapped;
- (void)aboutPrivacyTapped;
- (void)configureForAlert;
- (void)configureForSettings;
- (id)footerForSettings;
- (id)headerForAlert;
- (id)headerForSettings;
- (id)initWithBundle:(id)a0 variant:(unsigned long long)a1;

@end
