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

- (id)contactListStyleApplier;
- (void)refreshTableViewHeaderWithSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithStyle:(long long)a0;
- (id)init;
- (void)showOverlayView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setupDataSource;
- (void)contactListViewController:(id)a0 didSelectContact:(id)a1;
- (void)limitedUINotification:(id)a0;
- (id)createTableView;
- (id)initWithDataSource:(id)a0 searchable:(BOOL)a1 environment:(id)a2 shouldUseLargeTitle:(BOOL)a3;
- (void)updateLimitedUI;
- (void)postMessageOverlayIfNecessary;
- (void)viewWillAppear:(BOOL)a0;
- (void)handleSiriHeaderViewTap:(id)a0;
- (void)showContactListTableView;
- (void)viewDidLoad;

@end
