@class NSString, NSArray, NSDate;
@protocol CertInfoSheetViewControllerDelegate;

@interface CertInfoSheetViewController : UIViewController

@property (retain, nonatomic) NSString *serviceName;
@property (retain, nonatomic) NSString *trustTitle;
@property (retain, nonatomic) NSString *trustSubtitle;
@property (retain, nonatomic) NSString *trustPurpose;
@property (retain, nonatomic) NSDate *trustExpiration;
@property (retain, nonatomic) NSArray *trustProperties;
@property (weak, nonatomic) id<CertInfoSheetViewControllerDelegate> delegate;

- (void)viewWillAppear:(BOOL)a0;
- (BOOL)shouldAutorotateToInterfaceOrientation:(long long)a0;
- (void)loadView;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)_cancel;
- (void)_accept;
- (void)_setupNavItem;
- (void)_dismissWithResult:(int)a0;
- (void)_pushDetailsView;

@end
