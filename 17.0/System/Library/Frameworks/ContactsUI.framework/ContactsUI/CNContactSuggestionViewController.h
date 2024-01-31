@class CNPropertySuggestionAction, CNPropertyCell, UILabel, NSLayoutConstraint, UIButton;
@protocol CNContactSuggestionViewControllerDataSource;

@interface CNContactSuggestionViewController : UITableViewController

@property (retain, nonatomic) id<CNContactSuggestionViewControllerDataSource> dataSource;
@property (retain, nonatomic) UILabel *withLabel;
@property (retain, nonatomic) UILabel *dateLabel;
@property (retain, nonatomic) UILabel *subjectLabel;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UIButton *addToContactButton;
@property (retain, nonatomic) UIButton *ignoreButton;
@property (retain, nonatomic) NSLayoutConstraint *addToContactLeadingMargin;
@property (retain, nonatomic) NSLayoutConstraint *addToContactTrailingMargin;
@property (retain, nonatomic) NSLayoutConstraint *ignoreLeadingMargin;
@property (retain, nonatomic) NSLayoutConstraint *ignoreTrailingMargin;
@property (retain, nonatomic) NSLayoutConstraint *fromLeadingMargin;
@property (retain, nonatomic) NSLayoutConstraint *dateTrailingMargin;
@property (retain, nonatomic) CNPropertySuggestionAction *action;
@property (retain, nonatomic) CNPropertyCell *propertyCell;

+ (id)viewControllerWithDataSource:(id)a0;

- (long long)numberOfSectionsInTableView:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void).cxx_destruct;
- (void)viewDidDisappear:(BOOL)a0;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (void)ignore:(id)a0;
- (void)addToContact:(id)a0;
- (id)alertMessageForIgnoreContactDetail;
- (BOOL)shouldShowAddRejectActions;
- (BOOL)shouldShowPreview;
- (void)showSource:(id)a0;
- (id)titleForIgnoreContactDetail;
- (void)updatePreview;

@end
