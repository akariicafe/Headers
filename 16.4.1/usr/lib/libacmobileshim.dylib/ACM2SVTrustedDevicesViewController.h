@class NSString, NSArray, UINavigationController, UIButton, UITableView, NSMutableArray, NSLayoutConstraint, UILabel, UIColor;
@protocol ACM2SVTrustedDevicesViewControllerDelegate;

@interface ACM2SVTrustedDevicesViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, UINavigationBarDelegate, UINavigationControllerDelegate>

@property (retain, nonatomic) UILabel *emptyLabel;
@property (retain, nonatomic) UILabel *headerTitleLabel;
@property (retain, nonatomic) UILabel *headerTextLabel;
@property (retain, nonatomic) UILabel *footerTextLabel;
@property (retain, nonatomic) UIButton *footerButton;
@property (retain, nonatomic) NSLayoutConstraint *tableConstraint;
@property (retain, nonatomic) UITableView *trustedDevicesListView;
@property (nonatomic) long long selectedDeviceIndex;
@property (retain, nonatomic) NSMutableArray *imageDownloadsInProgress;
@property (retain, nonatomic) UINavigationController *navigationController;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (nonatomic) id<ACM2SVTrustedDevicesViewControllerDelegate> delegate;
@property (retain) NSArray *trustedDevicesArray;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIColor *labelTextColor;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (nonatomic) long long suggestedStatusBarStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)navigationBarHeight;
- (BOOL)shouldAutorotate;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)dealloc;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (id)initWithDelegate:(id)a0;
- (void)sendAction:(id)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)reset;
- (void)loadView;
- (unsigned long long)navigationControllerSupportedInterfaceOrientations:(id)a0;
- (void)cancelAction:(id)a0;
- (id)labelWithText:(id)a0 font:(id)a1;
- (double)tableHeight;
- (void)buildConstraints;
- (void)buildHorizontalConstraints;
- (void)buildVerticalConstraints;
- (void)disableControls:(BOOL)a0;
- (id)footerButtonWithText:(id)a0;
- (void)hideAnimated:(BOOL)a0 withCompletion:(id /* block */)a1;
- (BOOL)isLegacyStyle;
- (void)presentWithParentViewController:(id)a0 deviceList:(id)a1 completion:(id /* block */)a2;
- (void)resetWithDeviceList:(id)a0;
- (struct CGSize { double x0; double x1; })sizeOfString:(id)a0 withFont:(id)a1 widthConstraints:(double)a2;
- (void)startIconDownloadForDevice:(id)a0 forIndexPath:(id)a1;
- (void)stopImageDownloads;
- (void)unableReceiveMessagesTextDidTap:(id)a0;

@end
