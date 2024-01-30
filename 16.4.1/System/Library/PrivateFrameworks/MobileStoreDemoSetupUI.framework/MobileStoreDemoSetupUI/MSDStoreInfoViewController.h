@class MSDStoreInfo;
@protocol MSDStoreInfoViewControllerDelegate;

@interface MSDStoreInfoViewController : UIViewController

@property (retain, nonatomic) id<MSDStoreInfoViewControllerDelegate> delegate;
@property (retain, nonatomic) MSDStoreInfo *storeInfo;

- (void)_close:(id)a0;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)_confirm:(id)a0;
- (id)_boldConfiguration;
- (void)_showConfirmationAlert;
- (void)_showStoreConfirmationAlertWithCode:(id)a0;
- (id)_stackedCancelButton;
- (id)_stackedLabelWithTitle:(id)a0 andDescription:(id)a1;
- (id)_stackedStoreName:(id)a0 withIcon:(id)a1 andIconColor:(id)a2;
- (id)initWithStoreInfo:(id)a0 andDelegate:(id)a1;

@end
