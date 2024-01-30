@class NSArray, CNStarkContactNameView, CNPropertyBestIDSValueQuery, CNCardiMessageEmailGroup;

@interface CNStarkContactViewController : CNContactContentViewController <CNPropertyBestIDSValueQueryDelegate>

@property (retain, nonatomic) CNPropertyBestIDSValueQuery *bestiMessageQuery;
@property (retain, nonatomic) CNCardiMessageEmailGroup *iMessageEmailGroup;
@property (retain, nonatomic) NSArray *activatedConstraints;
@property (retain, nonatomic) CNStarkContactNameView *contactNameView;

+ (long long)tableViewStyle;
+ (BOOL)enablesTransportButtons;

- (id)initWithContact:(id)a0;
- (void)setupConstraints;
- (void).cxx_destruct;
- (void)updateFontColors;
- (BOOL)tableView:(id)a0 canPerformAction:(SEL)a1 forRowAtIndexPath:(id)a2 withSender:(id)a3;
- (void)dealloc;
- (id)displayHeaderView;
- (void)viewWillDisappear:(BOOL)a0;
- (struct CGSize { double x0; double x1; })setupTableHeaderView;
- (void)loadContactViewControllerViews;
- (BOOL)shouldDisplayAvatarHeaderView;
- (id)applyContactStyle;
- (BOOL)isScrollViewControllingHeaderResizeAnimation:(id)a0;
- (void)initializeTableViewsForHeaderHeight;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (BOOL)isGeminiAvailable;
- (BOOL)hasTableViewHeaderFirstSection;
- (void)_initiateBestiMessagePropertyQuery;
- (id)title;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)queryComplete;

@end
