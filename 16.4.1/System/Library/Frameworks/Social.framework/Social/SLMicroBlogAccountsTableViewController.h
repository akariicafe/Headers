@class NSArray, SLMicroBlogUserRecord, UIImage;
@protocol SLMicroBlogAccountsTableViewControllerDelegate;

@interface SLMicroBlogAccountsTableViewController : UITableViewController {
    NSArray *_accountUserRecords;
    SLMicroBlogUserRecord *_selectedAccountUserRecord;
    id<SLMicroBlogAccountsTableViewControllerDelegate> _selectionDelegate;
    UIImage *_blankImage;
}

- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (id)initWithStyle:(long long)a0;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)viewDidLoad;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)setSelectionDelegate:(id)a0;
- (void)cancelButtonTapped:(id)a0;
- (id)_accountUserRecordForIndexPath:(id)a0;
- (id)_blankImage;
- (void)didUpdateAccountUserRecord:(id)a0;
- (void)setAccountUserRecords:(id)a0;
- (void)setCurrentAccountUserRecord:(id)a0;

@end
