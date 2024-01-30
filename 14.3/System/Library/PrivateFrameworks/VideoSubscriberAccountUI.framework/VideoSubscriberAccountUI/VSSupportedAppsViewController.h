@class VSOptional, NSArray, NSOperationQueue, VSAuditToken;
@protocol VSSupportedAppsViewControllerDelegate;

@interface VSSupportedAppsViewController : UIViewController

@property (retain, nonatomic) NSOperationQueue *privateQueue;
@property (copy, nonatomic) NSArray *apps;
@property (retain, nonatomic) VSOptional *identityProvider;
@property (copy, nonatomic) VSAuditToken *auditToken;
@property (weak, nonatomic) id<VSSupportedAppsViewControllerDelegate> delegate;

- (void)_presentError:(id)a0;
- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)_didFinish;
- (void)viewDidLoad;
- (void)beginLoadingApps;
- (void)_doneButtonPresed:(id)a0;
- (void)_finishLoadingApps:(id)a0;

@end
