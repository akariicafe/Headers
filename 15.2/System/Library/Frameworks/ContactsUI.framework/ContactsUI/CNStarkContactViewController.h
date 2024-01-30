@class NSArray, CNStarkContactNameView, CNPropertyBestIDSValueQuery, CNCardiMessageEmailGroup;

@interface CNStarkContactViewController : CNContactContentViewController <CNPropertyBestIDSValueQueryDelegate>

@property (retain, nonatomic) CNPropertyBestIDSValueQuery *bestiMessageQuery;
@property (retain, nonatomic) CNCardiMessageEmailGroup *iMessageEmailGroup;
@property (retain, nonatomic) NSArray *activatedConstraints;
@property (retain, nonatomic) CNStarkContactNameView *contactNameView;

+ (BOOL)enablesTransportButtons;
+ (long long)tableViewStyle;

- (id)initWithContact:(id)a0;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (id)title;
- (void)updateFontColors;
- (id)displayHeaderView;
- (id)tableView:(id)a0 contextMenuConfigurationForRowAtIndexPath:(id)a1 point:(struct CGPoint { double x0; double x1; })a2;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })setupTableHeaderView;
- (void)loadContactViewControllerViews;
- (BOOL)shouldDisplayAvatarHeaderView;
- (void)queryComplete;
- (BOOL)isGeminiAvailable;
- (BOOL)hasTableViewHeaderFirstSection;
- (void)_initiateBestiMessagePropertyQuery;
- (void)setupConstraints;
- (id)applyContactStyle;
- (BOOL)isScrollViewControllingHeaderResizeAnimation:(id)a0;
- (void)initializeTableViewsForHeaderHeight;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;

@end
