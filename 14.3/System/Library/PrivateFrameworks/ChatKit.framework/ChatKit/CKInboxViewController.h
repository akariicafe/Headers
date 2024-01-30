@class UIViewController, UITextView, UITableViewDiffableDataSource, NSString, NSMutableArray, UITableView;
@protocol CKConversationListControllerProtocol;

@interface CKInboxViewController : UIViewController <UITextViewDelegate, UITableViewDelegate> {
    BOOL _isVisible;
}

@property (retain, nonatomic) UIViewController<CKConversationListControllerProtocol> *conversationListController;
@property (retain, nonatomic) UITableViewDiffableDataSource *tableViewDataSource;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) NSMutableArray *tableCellDataArray;
@property (retain, nonatomic) NSMutableArray *categoriesCellDataArray;
@property (retain, nonatomic) NSMutableArray *junkCellDataArray;
@property (retain, nonatomic) NSMutableArray *footerCellDataArray;
@property (retain, nonatomic) UITextView *stickyFooterTextView;
@property (nonatomic) long long categoriesIndexSection;
@property (nonatomic) long long junkIndexSection;
@property (nonatomic) long long footerIndexSection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void).cxx_destruct;
- (id)_getSpamExtensionName;
- (id)_unreadCountStringForIndexPath:(id)a0;
- (id)footerTextView;
- (void)_spamFilteringStateChanged;
- (void)_forceLargeInboxTitle;
- (void)reloadTableViewData;
- (BOOL)shouldHideInboxFooterTextView;
- (void)reloadTableViewDataWithConversationListUpdate:(BOOL)a0;
- (unsigned long long)_filterModeForIndexPath:(id)a0;
- (BOOL)_spamFilteringEnabled;
- (id)initWithConversationListController:(id)a0;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (void)_contentSizeCategoryChanged;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)_conversationList;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)_chatUnreadCountDidChange:(id)a0;
- (void)updateBackButton;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)viewDidLoad;

@end
