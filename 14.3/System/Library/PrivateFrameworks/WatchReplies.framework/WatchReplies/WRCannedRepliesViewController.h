@class UIImage, WRCannedRepliesStore, PSSpecifier;

@interface WRCannedRepliesViewController : PSListController {
    WRCannedRepliesStore *_repliesStore;
    PSSpecifier *_addNewSpecifier;
    PSSpecifier *_smartRepliesSpecifier;
    UIImage *_accessoryImage;
    UIImage *_highlightedAccessoryImage;
    BOOL _supportedEnhancedEditing;
}

@property (readonly, nonatomic) unsigned long long category;

- (BOOL)tableView:(id)a0 canMoveRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (void).cxx_destruct;
- (void)_returnKeyPressed:(id)a0;
- (void)returnPressedAtEnd;
- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (void)tableView:(id)a0 moveRowAtIndexPath:(id)a1 toIndexPath:(id)a2;
- (id)specifiers;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 editingStyleForRowAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (id)cannedReplies;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)updateEditDoneButton;
- (void)viewDidLoad;
- (void)saveReplies;
- (void)setIncludeSmartReplies:(id)a0 specifier:(id)a1;
- (id)includeSmartReplies;
- (id)newCannedReplySpecifier;
- (void)addNewReply:(id)a0;
- (void)configureCellAccessoryImage:(id)a0;
- (void)setCustomReply:(id)a0 specifier:(id)a1;
- (id)customReply:(id)a0;
- (void)loadRepliesStoreIfNeeded;
- (id)cannedRepliesFromSpecifiers;
- (unsigned long long)numberOfDefaultReplySpecifiers;

@end
