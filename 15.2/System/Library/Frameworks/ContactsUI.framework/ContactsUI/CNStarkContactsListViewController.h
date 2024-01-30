@class CNContactListTableView, NSArray, UITableViewHeaderFooterView, AVExternalDevice, CNStarkNoContentBannerView, NSString;

@interface CNStarkContactsListViewController : CNContactListViewController <CNContactListViewControllerDelegate, CNContactContentViewControllerDelegate>

@property (retain, nonatomic) NSArray *displayedContactProperties;
@property (retain, nonatomic) CNContactListTableView *contactListTableView;
@property (retain, nonatomic) CNStarkNoContentBannerView *overlayView;
@property (retain, nonatomic) UITableViewHeaderFooterView *siriHeaderView;
@property (nonatomic) BOOL limitedUI;
@property (retain, nonatomic) AVExternalDevice *externalDevice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)makeContactsDisplayedProperties;

- (void)viewDidLoad;
- (id)createTableView;
- (void)viewWillAppear:(BOOL)a0;
- (void)showContactListTableView;
- (void)refreshTableViewHeaderWithSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithDataSource:(id)a0 searchable:(BOOL)a1 environment:(id)a2 shouldUseLargeTitle:(BOOL)a3;
- (void)handleSiriHeaderViewTap:(id)a0;
- (void)limitedUINotification:(id)a0;
- (void)setupDataSource;
- (void)postMessageOverlayIfNecessary;
- (id)contactListStyleApplier;
- (void)contactListViewController:(id)a0 didSelectContact:(id)a1;
- (void)updateLimitedUI;
- (id)initWithStyle:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)showOverlayView;

@end
