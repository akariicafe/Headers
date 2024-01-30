@class UIView, OBWelcomeController, OBTrayButton, UINavigationController, WFWorkflow, WFTrigger, WFAutomationSuggestion, UITableView, NSString, NSLayoutConstraint, UIBarButtonItem, WFDatabase;
@protocol VCUIShortcutViewControllerDelegate;

@interface VCUIShortcutViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>

@property (readonly, nonatomic) NSLayoutConstraint *tableViewHeightConstraint;
@property (readonly, nonatomic) UITableView *tableView;
@property (readonly, nonatomic) NSLayoutConstraint *customViewContainerHeightConstraint;
@property (readonly, nonatomic) UIView *customViewContainer;
@property (retain, nonatomic) UIView *customView;
@property (retain, nonatomic) OBTrayButton *primaryButton;
@property (readonly, nonatomic) WFDatabase *database;
@property (nonatomic) BOOL hasAppeared;
@property (weak, nonatomic) id<VCUIShortcutViewControllerDelegate> delegate;
@property (readonly, nonatomic) OBWelcomeController *welcomeController;
@property (readonly, nonatomic) UINavigationController *navigationController;
@property (retain, nonatomic) UIBarButtonItem *rightBarButtonItem;
@property (retain, nonatomic) WFWorkflow *workflow;
@property (retain, nonatomic) WFTrigger *trigger;
@property (retain, nonatomic) WFAutomationSuggestion *suggestion;
@property (nonatomic) unsigned long long source;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_preventsAppearanceProxyCustomization;

- (long long)numberOfSectionsInTableView:(id)a0;
- (int)eventSource;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (id)headerImage;
- (id)applicationBundleIdentifier;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)title;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void).cxx_destruct;
- (id)primaryButtonTitle;
- (void)didTapCancel;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (id)nameCell;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)didTapPrimaryButton;
- (id)initWithAutomationSuggestion:(id)a0 workflow:(id)a1 database:(id)a2;
- (unsigned long long)currentPreviewMode;
- (void)updateCustomView;
- (void)setCustomView:(id)a0 withHeight:(double)a1;
- (id)shortcutPreviewImage;
- (id)shortcutPreview;
- (id)nameSectionTitle;
- (BOOL)shouldShowActionCell;
- (void)updatePrimaryButton;
- (void)trackAddEvent;

@end
