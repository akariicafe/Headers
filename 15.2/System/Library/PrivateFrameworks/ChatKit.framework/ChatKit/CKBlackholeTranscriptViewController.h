@class UITextView, STConversationContext, UIView, NSString, CKConversation, NSMutableArray, STLockoutViewController;

@interface CKBlackholeTranscriptViewController : UITableViewController <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) CKConversation *conversation;
@property (retain, nonatomic) NSMutableArray *messages;
@property (retain, nonatomic) UITextView *headerTextView;
@property (nonatomic) BOOL isShowingLockoutView;
@property (retain, nonatomic) STLockoutViewController *lockoutViewController;
@property (retain, nonatomic) STConversationContext *conversationContext;
@property (retain, nonatomic) UIView *lockoutView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (double)tableView:(id)a0 estimatedHeightForRowAtIndexPath:(id)a1;
- (id)generateHeader;
- (void)_updateTranscriptHistory;
- (void)_restoreConversation;
- (void)_confirmDeleteConversation:(id)a0 view:(id)a1 withCompletionHandler:(id /* block */)a2;
- (id)_alertTitleForDelete;
- (void)_deleteConversation:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)updateScreenTimeShieldIfNeededForChat:(id)a0;
- (BOOL)isChatAllowedByScreenTime:(id)a0;
- (void)removeLockoutControllerIfNeeded;
- (void)showScreenTimeShieldIfNeeded;
- (void)chatAllowedByScreenTimeChanged:(id)a0;
- (BOOL)shouldPresentBlockingDowntimeViewController;
- (void)_openRestoredChatInMessages;
- (id)_handleIDsForCurrentConversation;
- (void)layoutLockoutView;
- (void).cxx_destruct;
- (id)_conversationList;
- (void)dealloc;
- (id)initWithConversation:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;

@end
