@class NSArray, CNStarkContactNameView, CNPropertyBestIDSValueQuery, CNCardiMessageEmailGroup;

@interface CNStarkContactDisplayViewController : CNContactContentDisplayViewController <CNPropertyBestIDSValueQueryDelegate>

@property (retain, nonatomic) CNPropertyBestIDSValueQuery *bestiMessageQuery;
@property (retain, nonatomic) CNCardiMessageEmailGroup *iMessageEmailGroup;
@property (retain, nonatomic) NSArray *activatedConstraints;
@property (retain, nonatomic) CNStarkContactNameView *contactNameView;

+ (long long)tableViewStyle;

- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)tableView:(id)a0 contextMenuConfigurationForRowAtIndexPath:(id)a1 point:(struct CGPoint { double x0; double x1; })a2;
- (void)setupConstraints;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (id)title;
- (void)viewDidAppear:(BOOL)a0;
- (void)_initiateBestiMessagePropertyQuery;
- (id)applyContactStyle;
- (id)displayHeaderView;
- (BOOL)hasTableViewHeaderFirstSection;
- (id)initWithContact:(id)a0 contactViewConfiguration:(id)a1;
- (void)initializeTableViewsForHeaderHeight;
- (BOOL)isGeminiAvailable;
- (BOOL)isScrollViewControllingHeaderResizeAnimation:(id)a0;
- (void)loadContactViewControllerViews;
- (void)queryComplete;
- (struct CGSize { double x0; double x1; })setupTableHeaderView;
- (BOOL)shouldDisplayAvatarHeaderView;
- (void)updateFontColors;

@end
