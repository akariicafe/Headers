@class NSArray, CNStarkContactNameView, CNPropertyBestIDSValueQuery, CNCardiMessageEmailGroup;

@interface CNStarkContactViewController : CNContactContentUnitaryViewController <CNPropertyBestIDSValueQueryDelegate>

@property (retain, nonatomic) CNPropertyBestIDSValueQuery *bestiMessageQuery;
@property (retain, nonatomic) CNCardiMessageEmailGroup *iMessageEmailGroup;
@property (retain, nonatomic) NSArray *activatedConstraints;
@property (retain, nonatomic) CNStarkContactNameView *contactNameView;

+ (long long)tableViewStyle;
+ (BOOL)enablesTransportButtons;

- (id)initWithContact:(id)a0;
- (void)setupConstraints;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (id)tableView:(id)a0 contextMenuConfigurationForRowAtIndexPath:(id)a1 point:(struct CGPoint { double x0; double x1; })a2;
- (id)title;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)_initiateBestiMessagePropertyQuery;
- (id)applyContactStyle;
- (id)displayHeaderView;
- (BOOL)hasTableViewHeaderFirstSection;
- (void)initializeTableViewsForHeaderHeight;
- (BOOL)isGeminiAvailable;
- (BOOL)isScrollViewControllingHeaderResizeAnimation:(id)a0;
- (void)loadContactViewControllerViews;
- (void)queryComplete;
- (struct CGSize { double x0; double x1; })setupTableHeaderView;
- (BOOL)shouldDisplayAvatarHeaderView;
- (void)updateFontColors;

@end
